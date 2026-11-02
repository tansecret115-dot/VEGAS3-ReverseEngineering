/* Module: espr3260.dll
   Function: CloseEncoder
   Address: 632f1050
   Source: Ghidra pseudocode (Stage 10 batch) */


void CloseEncoder(void *param_1)

{
                    /* 0x1050  1  CloseEncoder */
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
  }
  return;
}


