#include <TWOM/TWOM.h>

/*
   ,---.                               
 .--.'  \      _,..---._   _,..---._   
 \==\-/\ \   /==/,   -  \/==/,   -  \  
 /==/-|_\ |  |==|   _   _\==|   _   _\ 
 \==\,   - \ |==|  .=.   |==|  .=.   | 
 /==/ -   ,| |==|,|   | -|==|,|   | -| 
/==/-  /\ - \|==|  '='   /==|  '='   / 
\==\ _.\=\.-'|==|-,   _`/|==|-,   _`/  
 `--`        `-.`.____.' `-.`.____.'   

*/

TWOM_Vector2d TWOM_Vector2d_Add(
    TWOM_Vector2d a,
    TWOM_Vector2d b)
{
    TWOM_Vector2d result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

TWOM_Vector2f TWOM_Vector2f_Add(
    TWOM_Vector2f a,
    TWOM_Vector2f b)
{
    TWOM_Vector2f result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

TWOM_Vector2i TWOM_Vector2i_Add(
    TWOM_Vector2i a,
    TWOM_Vector2i b)
{
    TWOM_Vector2i result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

/*
   ,-,--.                         ,--.--------.              ,---.       _,.----.  ,--.--------.  
 ,-.'-  _\ .--.-. .-.-.   _..---./==/,  -   , -\.-.,.---.  .--.'  \    .' .' -   \/==/,  -   , -\ 
/==/_ ,_.'/==/ -|/=/  | .' .'.-. \==\.-.  - ,-./==/  `   \ \==\-/\ \  /==/  ,  ,-'\==\.-.  - ,-./ 
\==\  \   |==| ,||=| -|/==/- '=' /`--`\==\- \ |==|-, .=., |/==/-|_\ | |==|-   |  . `--`\==\- \    
 \==\ -\  |==|- | =/  ||==|-,   '      \==\_ \|==|   '='  /\==\,   - \|==|_   `-' \     \==\_ \   
 _\==\ ,\ |==|,  \/ - ||==|  .=. \     |==|- ||==|- ,   .' /==/ -   ,||==|   _  , |     |==|- |   
/==/\/ _ ||==|-   ,   //==/- '=' ,|    |==|, ||==|_  . ,'./==/-  /\ - \==\.       /     |==|, |   
\==\ - , //==/ , _  .'|==|   -   /     /==/ -//==/  /\ ,  )==\ _.\=\.-'`-.`.___.-'      /==/ -/   
 `--`---' `--`..---'  `-._`.___,'      `--`--``--`-`--`--' `--`                         `--`--`   

*/

TWOM_Vector2d TWOM_Vector2d_Subtract(
    TWOM_Vector2d a,
    TWOM_Vector2d b)
{
    TWOM_Vector2d result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;

    return result;
}

TWOM_Vector2f TWOM_Vector2f_Subtract(
    TWOM_Vector2f a,
    TWOM_Vector2f b)
{
    TWOM_Vector2f result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;

    return result;
}

TWOM_Vector2i TWOM_Vector2i_Subtract(
    TWOM_Vector2i a,
    TWOM_Vector2i b)
{
    TWOM_Vector2i result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;

    return result;
}

/*
   ,-,--.    _,.----.    ,---.                    ,----.  
 ,-.'-  _\ .' .' -   \ .--.'  \       _.-.     ,-.--` , \ 
/==/_ ,_.'/==/  ,  ,-' \==\-/\ \    .-,.'|    |==|-  _.-` 
\==\  \   |==|-   |  . /==/-|_\ |  |==|, |    |==|   `.-. 
 \==\ -\  |==|_   `-' \\==\,   - \ |==|- |   /==/_ ,    / 
 _\==\ ,\ |==|   _  , |/==/ -   ,| |==|, |   |==|    .-'  
/==/\/ _ |\==\.       /==/-  /\ - \|==|- `-._|==|_  ,`-._ 
\==\ - , / `-.`.___.-'\==\ _.\=\.-'/==/ - , ,/==/ ,     / 
 `--`---'              `--`        `--`-----'`--`-----``  

*/

TWOM_Vector2d TWOM_Vector2d_Scale(
    TWOM_Vector2d vector,
    double scalar)
{
    TWOM_Vector2d result;

    result.x = vector.x * scalar;
    result.y = vector.y * scalar;

    return result;
}

TWOM_Vector2f TWOM_Vector2f_Scale(
    TWOM_Vector2f vector,
    float scalar)
{
    TWOM_Vector2f result;

    result.x = vector.x * scalar;
    result.y = vector.y * scalar;

    return result;
}

TWOM_Vector2i TWOM_Vector2i_Scale(
    TWOM_Vector2i vector,
    int scalar)
{
    TWOM_Vector2i result;

    result.x = vector.x * scalar;
    result.y = vector.y * scalar;

    return result;
}

/*
                _,.---._    ,--.--------.  
  _,..---._   ,-.' , -  `. /==/,  -   , -\ 
/==/,   -  \ /==/_,  ,  - \\==\.-.  - ,-./ 
|==|   _   _\==|   .=.     |`--`\==\- \    
|==|  .=.   |==|_ : ;=:  - |     \==\_ \   
|==|,|   | -|==| , '='     |     |==|- |   
|==|  '='   /\==\ -    ,_ /      |==|, |   
|==|-,   _`/  '.='. -   .'       /==/ -/   
`-.`.____.'     `--`--''         `--`--`   

*/

double TWOM_Vector2d_Dot(
    TWOM_Vector2d a,
    TWOM_Vector2d b)
{
    return (a.x * b.x) + (a.y * b.y);
}

float TWOM_Vector2f_Dot(
    TWOM_Vector2f a,
    TWOM_Vector2f b)
{
    return (a.x * b.x) + (a.y * b.y);
}

int TWOM_Vector2i_Dot(
    TWOM_Vector2i a,
    TWOM_Vector2i b)
{
    return (a.x * b.x) + (a.y * b.y);
}

/*
               ,----.  .-._            _,---. ,--.--------. ,--.-,,-,--, 
   _.-.     ,-.--` , \/==/ \  .-._ _.='.'-,  Y==/,  -   , -Y==/  /|=|  | 
 .-,.'|    |==|-  _.-`|==|, \/ /, /==.'-     |==\.-.  - ,-./==|_ ||=|, | 
|==|, |    |==|   `.-.|==|-  \|  /==/ -   .-' `--`\==\- \  |==| ,|/=| _| 
|==|- |   /==/_ ,    /|==| ,  | -|==|_   /_,-.     \==\_ \ |==|- `-' _ | 
|==|, |   |==|    .-' |==| -   _ |==|  , \_.' )    |==|- | |==|  _     | 
|==|- `-._|==|_  ,`-._|==|  /\ , \==\-  ,    (     |==|, | |==|   .-. ,\ 
/==/ - , ,/==/ ,     //==/, | |- |/==/ _  ,  /     /==/ -/ /==/, //=/  | 
`--`-----'`--`-----`` `--`./  `--``--`------'      `--`--` `--`-' `-`--` 

*/


double TWOM_Vector2d_Length(
    TWOM_Vector2d vector)
{
    return TWOM_SQRTd(
        vector.x * vector.x +
        vector.y * vector.y);
}

float TWOM_Vector2f_Length(
    TWOM_Vector2f vector)
{
    return TWOM_SQRTf(
        vector.x * vector.x +
        vector.y * vector.y);
}

int TWOM_Vector2i_Length(
    TWOM_Vector2i vector)
{
    return TWOM_SQRTi(
        vector.x * vector.x +
        vector.y * vector.y);
}

/*
 .-._          _,.---._                       ___    ,---.                 .=-.-.             ,----.  
/==/ \  .-._ ,-.' , -  `.   .-.,.---.  .-._ .'=.'\ .--.'  \       _.-.    /==/_ /,--,----. ,-.--` , \ 
|==|, \/ /, /==/_,  ,  - \ /==/  `   \/==/ \|==|  |\==\-/\ \    .-,.'|   |==|, |/==/` - ./|==|-  _.-` 
|==|-  \|  |==|   .=.     |==|-, .=., |==|,|  / - |/==/-|_\ |  |==|, |   |==|  |`--`=/. / |==|   `.-. 
|==| ,  | -|==|_ : ;=:  - |==|   '='  /==|  \/  , |\==\,   - \ |==|- |   |==|- | /==/- / /==/_ ,    / 
|==| -   _ |==| , '='     |==|- ,   .'|==|- ,   _ |/==/ -   ,| |==|, |   |==| ,|/==/- /-.|==|    .-'  
|==|  /\ , |\==\ -    ,_ /|==|_  . ,'.|==| _ /\   /==/-  /\ - \|==|- `-._|==|- /==/, `--`\==|_  ,`-._ 
/==/, | |- | '.='. -   .' /==/  /\ ,  )==/  / / , |==\ _.\=\.-'/==/ - , ,/==/. |==\-  -, /==/ ,     / 
`--`./  `--`   `--`--''   `--`-`--`--'`--`./  `--` `--`        `--`-----'`--`-` `--`.-.--`--`-----``  

*/

TWOM_Vector2d TWOM_Vector2d_Normalize(
    TWOM_Vector2d vector)
{
    TWOM_Vector2d result;
    double length;

    length = TWOM_Vector2d_Length(vector);

    if (length == 0.0)
    {
        result.x = 0.0;
        result.y = 0.0;
        return result;
    }

    result.x = vector.x / length;
    result.y = vector.y / length;

    return result;
}

TWOM_Vector2f TWOM_Vector2f_Normalize(
    TWOM_Vector2f vector)
{
    TWOM_Vector2f result;
    float length;

    length = TWOM_Vector2f_Length(vector);

    if (length == 0.0f)
    {
        result.x = 0.0f;
        result.y = 0.0f;
        return result;
    }

    result.x = vector.x / length;
    result.y = vector.y / length;

    return result;
}

TWOM_Vector2i TWOM_Vector2i_Normalize(
    TWOM_Vector2i vector)
{
    TWOM_Vector2i result;
    double length;

    length = TWOM_Vector2i_Length(vector);

    if (length == 0.0)
    {
        result.x = 0;
        result.y = 0;
        return result;
    }

    result.x = (int)((double)vector.x / length);
    result.y = (int)((double)vector.y / length);

    return result;
}