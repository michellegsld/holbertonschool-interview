#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];
const movieurl = `https://swapi.dev/api/films/${movieId}/`;

request(movieurl, async function (error, response, body) {
  if (error) {
    return console.error(error);
  }

  const characterList = JSON.parse(body).characters;

  for (const character of characterList) {
    await new Promise(function (resolve, reject) {
      request(character, (error, response, body) => {
        if (error) {
          return console.error(error);
        }
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
