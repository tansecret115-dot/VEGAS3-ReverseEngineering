/* Module: rv103260.dll
   Function: PNStream_Close
   Address: 636a3170
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_Close(int *param_1)

{
                    /* 0x3170  9  PNStream_Close */
  (**(code **)(*param_1 + 0x1c))();
  return;
}


