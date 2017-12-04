 /bin/cat /dev/cu.usbmodem1411 &
 #crontab -e
# */1 * * * * /Users/garycoltrane/desktop/projects/gormanly/script.sh
# chmod +x  /Users/garycoltrane/desktop/projects/gormanly/script.sh
sleep 2
/usr/local/bin/node /Users/garycoltrane/desktop/projects/gormanly/script.js &
cat /Users/garycoltrane/desktop/projects/gormanly/data.json > /dev/cu.usbmodem1411
sleep 2
sudo pkill -9 cat /dev/cu.usbmodem1411
