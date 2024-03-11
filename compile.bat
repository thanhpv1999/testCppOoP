g++ -c -o lib/point.o library/point/point.cpp -Ilibrary/point
ar rcs lib/libpoint.a lib/point.o
g++ -c -o lib/circle.o library/circle/circle.cpp -Ilibrary/circle -Ilibrary/point
ar rcs lib/libcircle.a lib/circle.o
g++ -o app/main main.cpp -Ilibrary/point -Ilibrary/circle -Llib -lpoint -lcircle