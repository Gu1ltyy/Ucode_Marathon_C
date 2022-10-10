case $1 in
	-c) tar -c -f $2 ${@:3};;
	-e) tar --extract -f $2;;

