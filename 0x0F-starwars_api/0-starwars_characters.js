#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];
const url = `https://swapi.dev/api/films/${movieId}/`;

request.get(url, (error, response, body) => {
  if (error) {
    return console.log(error);
  }

  const characterNames = {};
  const characterList = JSON.parse(body).characters;

  for (let i = 0; i < characterList.length; i++) {
    request.get(url, (error, response, body) => {
      if (error) {
        return console.log(error);
      }
      characters[i] = (JSON.parse(response.body).name);
    });
  }

  for (const character of characterNames) {
    console.log(character[i]);
  }
});
