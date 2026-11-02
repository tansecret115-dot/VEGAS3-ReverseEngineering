/* Module: ednt3260.dll
   Function: CloseEncoder
   Address: 630fbd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void CloseEncoder(void *param_1)

{
                    /* 0xbd30  1  CloseEncoder */
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
  }
  return;
}


