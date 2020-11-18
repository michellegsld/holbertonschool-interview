#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];
const movieurl = `https://swapi.dev/api/films/${movieId}/`;

request.get(movieurl, async function (error, response, body) {
  if (error) {
    return console.error(error);
  }

  const characterList = JSON.parse(body).characters;

  for (let i = 0; i < characterList.length; i++) {
    await new Promise(function (resolve, reject) {
      request.get(characterList[i], (error, response, body) => {
        if (error) {
          return console.error(error);
        }
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
