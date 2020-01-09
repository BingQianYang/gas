#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_adc.h"
#include "bsp_dac.h"


extern __IO uint16_t ADC_ConvertedValue; 
float ADC_ConvertedValueLocal;        

void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
} 

int main(void)
{	
	USART_Config();
	ADCx_Init();
	DAC_Mode_Init();
	while (1)
	{
		ADC_ConvertedValueLocal =(float) ADC_ConvertedValue/4096*3.3; // 读取转换的AD值 
	}
}
/*********************************************END OF FILE**********************/

