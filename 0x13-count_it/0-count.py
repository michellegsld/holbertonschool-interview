#!/usr/bin/python3
"""
Task 0:
0-count.py
"""
import requests
import sys


def count_words(subreddit, word_list, after="", word_dict={}):
    """
    Parses each Reddit hot article title
    Prints a sorted count of the given keywords
    """
    url = "https://reddit.com/r/" + subreddit + "/hot.json"

    if after:
         url = url + "?&after=" + after

    data = requests.get(url, headers={'User-agent': 'product'}, allow_redirects=False)

    if 'error' in data:
        return None

    if word_dict == {}:
        for word in word_list:
            word_dict[word] = word_list.count(word)

    for post in data.json().get('data').get('after').get('children'):
        title = post['data']['title'].split()
        for i in title:
            for k in word_dict:
                if i.upper() == k.upper():
                    word_dict[k] += 1

    after = data['data']['after']

    if after:
        count_words(subreddit, word_list, after="", word_dict={})
    else:
        sorted_list = sorted(word_list)
        for k, v in word_dict.items():
            if v > 0 and k in sorted_list:
                print('{}: {}'.format(k, v))
