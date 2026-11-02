/* Module: rv303260.dll
   Function: PNStream_GetIPNUnknown
   Address: 67206030
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_GetIPNUnknown(int *param_1)

{
                    /* 0x6030  10  PNStream_GetIPNUnknown */
  (**(code **)(*param_1 + 0x38))();
  return;
}


