#ifndef TWOM_MAIN_INCLUDE_H
#define TWOM_MAIN_INCLUDE_H

#ifdef __cplusplus
extern "C"{
#endif


/*
        ,-.-.    ,----.    _,.----.  ,--.--------.   _,.---._                        ,-----,--,   
 ,--.-./=/ ,/ ,-.--` , \ .' .' -   \/==/,  -   , -\,-.' , -  `.   .-.,.---.          | '-  -\==\  
/==/, ||=| -||==|-  _.-`/==/  ,  ,-'\==\.-.  - ,-./==/_,  ,  - \ /==/  `   \         \,--, '/==/  
\==\,  \ / ,||==|   `.-.|==|-   |  . `--`\==\- \ |==|   .=.     |==|-, .=., |           /  /==/   
 \==\ - ' - /==/_ ,    /|==|_   `-' \     \==\_ \|==|_ : ;=:  - |==|   '='  /          / -/==/    
  \==\ ,   ||==|    .-' |==|   _  , |     |==|- ||==| , '='     |==|- ,   .'          / -/==/     
  |==| -  ,/|==|_  ,`-._\==\.       /     |==|, | \==\ -    ,_ /|==|_  . ,'.         / `\==\_,--, 
  \==\  _ / /==/ ,     / `-.`.___.-'      /==/ -/  '.='. -   .' /==/  /\ ,  )       /` -   ,/==/  
   `--`--'  `--`-----``                   `--`--`    `--`--''   `--`-`--`--'        `------`--`   

             TWOM - Vector2
*/

typedef struct
{
    double x;
    double y;
} TWOM_Vector2d;

TWOM_Vector2d TWOM_Vector2d_Add(
    TWOM_Vector2d a,
    TWOM_Vector2d b);

TWOM_Vector2d TWOM_Vector2d_Subtract(
    TWOM_Vector2d a,
    TWOM_Vector2d b);

TWOM_Vector2d TWOM_Vector2d_Scale(
    TWOM_Vector2d vector,
    double scalar);

double TWOM_Vector2d_Dot(
    TWOM_Vector2d a,
    TWOM_Vector2d b);

double TWOM_Vector2d_Length(
    TWOM_Vector2d vector);

TWOM_Vector2d TWOM_Vector2d_Normalize(
    TWOM_Vector2d vector);

typedef struct
{
    float x;
    float y;
} TWOM_Vector2f;

TWOM_Vector2f TWOM_Vector2f_Add(
    TWOM_Vector2f a,
    TWOM_Vector2f b);

TWOM_Vector2f TWOM_Vector2f_Subtract(
    TWOM_Vector2f a,
    TWOM_Vector2f b);

TWOM_Vector2f TWOM_Vector2f_Scale(
    TWOM_Vector2f vector,
    float scalar);

float TWOM_Vector2f_Dot(
    TWOM_Vector2f a,
    TWOM_Vector2f b);

float TWOM_Vector2f_Length(
    TWOM_Vector2f vector);

TWOM_Vector2f TWOM_Vector2f_Normalize(
    TWOM_Vector2f vector);

typedef struct
{
    int x;
    int y;
} TWOM_Vector2i;

TWOM_Vector2i TWOM_Vector2i_Add(
    TWOM_Vector2i a,
    TWOM_Vector2i b);

TWOM_Vector2i TWOM_Vector2i_Subtract(
    TWOM_Vector2i a,
    TWOM_Vector2i b);

TWOM_Vector2i TWOM_Vector2i_Scale(
    TWOM_Vector2i vector,
    int scalar);

int TWOM_Vector2i_Dot(
    TWOM_Vector2i a,
    TWOM_Vector2i b);

int TWOM_Vector2i_Length(
    TWOM_Vector2i vector);

TWOM_Vector2i TWOM_Vector2i_Normalize(
    TWOM_Vector2i vector);

/*
        ,-.-.    ,----.    _,.----.  ,--.--------.   _,.---._                        .----,      
 ,--.-./=/ ,/ ,-.--` , \ .' .' -   \/==/,  -   , -\,-.' , -  `.   .-.,.---.         / ``--`.-,   
/==/, ||=| -||==|-  _.-`/==/  ,  ,-'\==\.-.  - ,-./==/_,  ,  - \ /==/  `   \        '-._  -|==|  
\==\,  \ / ,||==|   `.-.|==|-   |  . `--`\==\- \ |==|   .=.     |==|-, .=., |       .-.'   |==|  
 \==\ - ' - /==/_ ,    /|==|_   `-' \     \==\_ \|==|_ : ;=:  - |==|   '='  /       \    , _\==\ 
  \==\ ,   ||==|    .-' |==|   _  , |     |==|- ||==| , '='     |==|- ,   .'         `-.    |==| 
  |==| -  ,/|==|_  ,`-._\==\.       /     |==|, | \==\ -    ,_ /|==|_  . ,'.        _.-',  _|==| 
  \==\  _ / /==/ ,     / `-.`.___.-'      /==/ -/  '.='. -   .' /==/  /\ ,  )       \     , \==\ 
   `--`--'  `--`-----``                   `--`--`    `--`--''   `--`-`--`--'         ``-----'--' 

             TWOM - Vector3
*/

typedef struct
{
    double x;
    double y;
    double z;
} TWOM_Vector3d;

typedef struct
{
    float x;
    float y;
    float z;
} TWOM_Vector3f;

typedef struct
{
    int x;
    int y;
    int z;
} TWOM_Vector3i;

/*
        ,-.-.    ,----.    _,.----.  ,--.--------.   _,.---._                       .--, .-.--,  
 ,--.-./=/ ,/ ,-.--` , \ .' .' -   \/==/,  -   , -\,-.' , -  `.   .-.,.---.         |  |=| -\==\ 
/==/, ||=| -||==|-  _.-`/==/  ,  ,-'\==\.-.  - ,-./==/_,  ,  - \ /==/  `   \        |  `-' _|==| 
\==\,  \ / ,||==|   `.-.|==|-   |  . `--`\==\- \ |==|   .=.     |==|-, .=., |       \     , |==| 
 \==\ - ' - /==/_ ,    /|==|_   `-' \     \==\_ \|==|_ : ;=:  - |==|   '='  /        `--.  -|==| 
  \==\ ,   ||==|    .-' |==|   _  , |     |==|- ||==| , '='     |==|- ,   .'             \_ |==| 
  |==| -  ,/|==|_  ,`-._\==\.       /     |==|, | \==\ -    ,_ /|==|_  . ,'.             |  \==\ 
  \==\  _ / /==/ ,     / `-.`.___.-'      /==/ -/  '.='. -   .' /==/  /\ ,  )             \ /==/ 
   `--`--'  `--`-----``                   `--`--`    `--`--''   `--`-`--`--'               `--`  

             TWOM - Vector4
*/
typedef struct
{
    double x;
    double y;
    double z;
    double w;
} TWOM_Vector4d;

typedef struct
{
    float x;
    float y;
    float z;
    float w;
} TWOM_Vector4f;

typedef struct
{
    int x;
    int y;
    int z;
    int w;
} TWOM_Vector4i;

/*
    _,.---._                   ,---.   ,--.--------.    ,----.              .-._         .=-.-.  _,.---._    .-._         
  ,-.' - ,  `.   .--.-. .-.-..--.'  \ /==/,  -   , -\,-.--` , \  .-.,.---. /==/ \  .-._ /==/_ /,-.' , -  `. /==/ \  .-._  
 /==/ ,    -  \ /==/ -|/=/  |\==\-/\ \\==\.-.  - ,-./==|-  _.-` /==/  `   \|==|, \/ /, /==|, |/==/_,  ,  - \|==|, \/ /, / 
|==| - .=.  ,  ||==| ,||=| -|/==/-|_\ |`--`\==\- \  |==|   `.-.|==|-, .=., |==|-  \|  ||==|  |==|   .=.     |==|-  \|  |  
|==|  : ;=:  - ||==|- | =/  |\==\,   - \    \==\_ \/==/_ ,    /|==|   '='  /==| ,  | -||==|- |==|_ : ;=:  - |==| ,  | -|  
|==|,  '='  ,  ||==|,  \/ - |/==/ -   ,|    |==|- ||==|    .-' |==|- ,   .'|==| -   _ ||==| ,|==| , '='     |==| -   _ |  
 \==\ _   -    ;|==|-   ,   /==/-  /\ - \   |==|, ||==|_  ,`-._|==|_  . ,'.|==|  /\ , ||==|- |\==\ -    ,_ /|==|  /\ , |  
  '.='.  ,  ; -\/==/ , _  .'\==\ _.\=\.-'   /==/ -//==/ ,     //==/  /\ ,  )==/, | |- |/==/. / '.='. -   .' /==/, | |- |  
    `--`--'' `--`--`..---'   `--`           `--`--``--`-----`` `--`-`--`--'`--`./  `--``--`-`    `--`--''   `--`./  `--`  

             TWOM - Quaternion
*/

typedef TWOM_Vector4d TWOM_Quaterniond;
typedef TWOM_Vector4f TWOM_Quaternionf;
typedef TWOM_Vector4i TWOM_Quaternioni;


/*
     _,---.              _,.---._       _,.---._                 
  .-`.' ,  \   _.-.    ,-.' , -  `.   ,-.' , -  `.   .-.,.---.   
 /==/_  _.-' .-,.'|   /==/_,  ,  - \ /==/_,  ,  - \ /==/  `   \  
/==/-  '..-.|==|, |  |==|   .=.     |==|   .=.     |==|-, .=., | 
|==|_ ,    /|==|- |  |==|_ : ;=:  - |==|_ : ;=:  - |==|   '='  / 
|==|   .--' |==|, |  |==| , '='     |==| , '='     |==|- ,   .'  
|==|-  |    |==|- `-._\==\ -    ,_ / \==\ -    ,_ /|==|_  . ,'.  
/==/   \    /==/ - , ,/'.='. -   .'   '.='. -   .' /==/  /\ ,  ) 
`--`---'    `--`-----'   `--`--''       `--`--''   `--`-`--`--'  

            TWOM - FLOOR
*/

double TWOM_Floord(double a);
float TWOM_Floorf(float a);

/*
   _,.----.      ,----.   .=-.-.          
 .' .' -   \  ,-.--` , \ /==/_ / _.-.     
/==/  ,  ,-' |==|-  _.-`|==|, |.-,.'|     
|==|-   |  . |==|   `.-.|==|  |==|, |     
|==|_   `-' Y==/_ ,    /|==|- |==|- |     
|==|   _  , |==|    .-' |==| ,|==|, |     
\==\.       /==|_  ,`-._|==|- |==|- `-._  
 `-.`.___.-'/==/ ,     //==/. /==/ - , ,/ 
            `--`-----`` `--`-``--`-----'  
            TWOM - CEIL
*/

double TWOM_Ceild(double a);
float TWOM_Ceilf(float a);

/*
         ___     _,.---._                 
  .-._ .'=.'\  ,-.' , -  `.   _,..---._   
 /==/ \|==|  |/==/_,  ,  - \/==/,   -  \  
 |==|,|  / - |==|   .=.     |==|   _   _\ 
 |==|  \/  , |==|_ : ;=:  - |==|  .=.   | 
 |==|- ,   _ |==| , '='     |==|,|   | -| 
 |==| _ /\   |\==\ -    ,_ /|==|  '='   / 
 /==/  / / , / '.='. -   .' |==|-,   _`/  
 `--`./  `--`    `--`--''   `-.`.____.'   

            TWOM - MOD
*/

double TWOM_Modd(double a, double b);
float  TWOM_Modf(float a, float b);
int    TWOM_Modi(int a, int b);


/*
         ___   .=-.-..-._         
  .-._ .'=.'\ /==/_ /==/ \  .-._  
 /==/ \|==|  |==|, ||==|, \/ /, / 
 |==|,|  / - |==|  ||==|-  \|  |  
 |==|  \/  , |==|- ||==| ,  | -|  
 |==|- ,   _ |==| ,||==| -   _ |  
 |==| _ /\   |==|- ||==|  /\ , |  
 /==/  / / , /==/. //==/, | |- |  
 `--`./  `--``--`-` `--`./  `--`  

            TWOM - MIN
*/

double TWOM_Mind(double a, double b);
float  TWOM_Minf(float a, float b);
int    TWOM_Mini(int a, int b);


/*
*/

double TWOM_Maxd(double a, double b);
float  TWOM_Maxf(float a, float b);
int    TWOM_Maxi(int a, int b);


/*
*/

double TWOM_Clampd(double value, double min, double max);
float  TWOM_Clampf(float value, float min, float max);
int    TWOM_Clampi(int value, int min, int max);


/*
*/

double TWOM_Lerpd(double a, double b, double t);
float  TWOM_Lerpf(float a, float b, float t);
int    TWOM_Lerpi(int a, int b, int t);


/*
*/

int TWOM_Signd(double a);
int TWOM_Signf(float a);
int TWOM_Signi(int a);

/*
                _,.---._                 .-._                     .=-.-..-._            _,---.   
  .-.,.---.   ,-.' , -  `.  .--.-. .-.-./==/ \  .-._  _,..---._  /==/_ /==/ \  .-._ _.='.'-,  \  
 /==/  `   \ /==/_,  ,  - \/==/ -|/=/  ||==|, \/ /, /==/,   -  \|==|, ||==|, \/ /, /==.'-     /  
|==|-, .=., |==|   .=.     |==| ,||=| -||==|-  \|  ||==|   _   _\==|  ||==|-  \|  /==/ -   .-'   
|==|   '='  /==|_ : ;=:  - |==|- | =/  ||==| ,  | -||==|  .=.   |==|- ||==| ,  | -|==|_   /_,-.  
|==|- ,   .'|==| , '='     |==|,  \/ - ||==| -   _ ||==|,|   | -|==| ,||==| -   _ |==|  , \_.' ) 
|==|_  . ,'. \==\ -    ,_ /|==|-   ,   /|==|  /\ , ||==|  '='   /==|- ||==|  /\ , \==\-  ,    (  
/==/  /\ ,  ) '.='. -   .' /==/ , _  .' /==/, | |- ||==|-,   _`//==/. //==/, | |- |/==/ _  ,  /  
`--`-`--`--'    `--`--''   `--`..---'   `--`./  `--``-.`.____.' `--`-` `--`./  `--``--`------'   

            TWOM - ROUNDING
*/

double TWOM_RoundToNearestIntd(double a);
float TWOM_RoundToNearestIntf(float a);

/*
   ,---.                    ,-,--.  
 .--.'  \        _..---.  ,-.'-  _\ 
 \==\-/\ \     .' .'.-. \/==/_ ,_.' 
 /==/-|_\ |   /==/- '=' /\==\  \    
 \==\,   - \  |==|-,   '  \==\ -\   
 /==/ -   ,|  |==|  .=. \ _\==\ ,\  
/==/-  /\ - \ /==/- '=' ,/==/\/ _ | 
\==\ _.\=\.-'|==|   -   /\==\ - , / 
 `--`        `-._`.___,'  `--`---'  

            TWOM - ABS
*/

double TWOM_Absd(double a);
float TWOM_Absf(float a);
int TWOM_Absi(int a);

/*
   ,-,--.    _,.---._                 ,--.--------.  
 ,-.'-  _\ ,-.' - ,  `.    .-.,.---. /==/,  -   , -\ 
/==/_ ,_.'/==/ ,    -  \  /==/  `   \\==\.-.  - ,-./ 
\==\  \  |==| - .=.  ,  ||==|-, .=., |`--`\==\- \    
 \==\ -\ |==|  : ;=:  - ||==|   '='  /     \==\_ \   
 _\==\ ,\|==|,  '='  ,  ||==|- ,   .'      |==|- |   
/==/\/ _ |\==\ _   -    ;|==|_  . ,'.      |==|, |   
\==\ - , / '.='.  ,  ; -\/==/  /\ ,  )     /==/ -/   
 `--`---'    `--`--'' `--`--`-`--`--'      `--`--`   

            TWOM - SquareRoot
*/

double TWOM_SQRTd(double a);
float TWOM_SQRTf(float a);
int TWOM_SQRTi(int a);

#ifdef __cplusplus
}
#endif

#endif