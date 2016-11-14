#ifndef turbina
#define turbina

#include "hardware_init.h"
#include "variables.h"



int verify(uint8_t value) {
  if( value < 0 )
    return 0;
  if( value > 90 )
    return 90;
  return value;
}

void changeThrottle(uint8_t throttle) {
  throttle = verify(throttle);
  int currentThrottle = esc.read();

  uint8_t jump = 1;
  if( throttle < currentThrottle )
    jump = -1;

  while( currentThrottle != throttle ) {
    esc.write(currentThrottle + jump);
    currentThrottle = esc.read();
    delay(20);
  }

}




#endif
