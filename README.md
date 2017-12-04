# Arduini bitcoin ticker


## To run the Arduino bitcoin ticker

### Communication port
You must set up script.sh to cat your serial communication port like I did in script.sh:
/bin/cat [your communications port directory] &
Example:
 `/bin/cat /dev/cu.usbmodem1411 &`

### Node File
Inside of your script.sh, call your node directory to run your script.js file

[node bin directory] [yourWorkingDirectory/script.js] &

Example:
`/usr/local/bin/node /Users/garycoltrane/desktop/projects/gormanly/script.js &`


### Adding the data.json file into the serial port


cat [yourWorkingDirectory] >  [your communications port directory]
Example:
`cat /Users/garycoltrane/desktop/projects/gormanly/data.json > /dev/cu.usbmodem1411
`

Then kill the process afterwards

sudo pkill -9 cat [your communications port directory]

`sudo pkill -9 cat /dev/cu.usbmodem1411`
