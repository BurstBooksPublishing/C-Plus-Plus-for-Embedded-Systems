DMA1_Channel1->CCR = 0;
DMA1_Channel1->CPAR = (uint32_t)&ADC1->DR;
DMA1_Channel1->CMAR = (uint32_t)adc_buffer;
DMA1_Channel1->CNDTR = 100;
DMA1_Channel1->CCR = DMA_CCR_EN | DMA_CCR_CIRC | DMA_CCR_PSIZE_0
| DMA_CCR_MSIZE_0 | DMA_CCR_PL_0 | DMA_CCR_TCIE;