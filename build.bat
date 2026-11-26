cls

if not exist build mkdir build
if not exist lib mkdir lib

gcc -std=c89 -O3 -Wall -Wextra -pedantic -Werror -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition -Wstrict-aliasing -D_FORTIFY_SOURCE=2  -Isrc -Iinclude -c src/TWOM_Vector2.c -o build/TWOM_Vector2.o
gcc -std=c89 -O3 -Wall -Wextra -pedantic -Werror -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition -Wstrict-aliasing -D_FORTIFY_SOURCE=2  -Isrc -Iinclude -c src/TWOM_GeneralMath.c -o build/TWOM_GeneralMath.o

ar rcs lib\libTWOM.a build\TWOM_Vector2.o build\TWOM_GeneralMath.o

ar t lib\libTWOM.a