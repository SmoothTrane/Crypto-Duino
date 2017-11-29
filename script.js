const request = require("request");
const url =
  "https://api.coindesk.com/v1/bpi/currentprice.json";
  var fs = require("fs");


request.get(url, (error, response, body) => {
  let json = JSON.parse(body);
  var newJson = {};
  newJson["price"] = json.bpi["USD"].rate_float;
  newJson["chart"] = json.chartName;
  console.log(newJson);
  writeFile(newJson);


});


function writeFile(jsonData){
  fs.writeFile("/Users/garycoltrane/desktop/projects/gormanly/data.json", JSON.stringify(jsonData), function(err) {
      if(err) {
          return console.log(err);
      }

      console.log("The file was saved!");
  });

}
