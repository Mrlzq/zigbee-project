#include <ioCC2530.h>
#include "OnBoard.h"
#include "hal_adc.h"
#include "mq2.h"

uint16 ReadGasData( void )
{
  uint16 reading = 0;
  
  P0DIR &= ~0x40;  // 设置P0.6为输入方式
  asm("NOP");asm("NOP");
  
  /* Clear ADC interrupt flag */
  ADCIF = 0;
  
  ADCCON3 = (0x40 | HAL_ADC_DEC_064 | HAL_ADC_CHANNEL_6);
  
  /* Wait for the conversion to finish */
  while ( !ADCIF );
  
  asm("NOP");asm("NOP");
  
  /* Read the result */
  reading = ADCL;
  reading |= (int16) (ADCH << 8);
  reading >>= 8;
  
  return reading;
}

