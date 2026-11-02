/* Module: tokr3260.dll
   Function: OpenDecoder
   Address: 680511a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int OpenDecoder(undefined4 *param_1)

{
  void *pvVar1;
  
                    /* 0x11a0  3  OpenDecoder */
  pvVar1 = calloc(1,0x9c);
  *param_1 = pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


