/* Module: tokr3260.dll
   Function: CloseDecoder
   Address: 680511d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void CloseDecoder(void *param_1)

{
                    /* 0x11d0  1  CloseDecoder
                       0x11d0  2  CloseEncoder */
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}


