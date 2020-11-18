#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];
const movieurl = `https://swapi.dev/api/films/${movieId}/`;

request.get(movieurl, (error, response, body) => {
  if (error)
    return console.log(error);

  const characterList = JSON.parse(body).characters;

  for (let i = 0; i < characterList.length; i++) {
    request.get(characterList[i], (error, response, body) => {
      if (error)
        return console.log(error);
      console.log(JSON.parse(response.body).name);
    });
  }
});
