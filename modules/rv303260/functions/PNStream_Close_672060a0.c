/* Module: rv303260.dll
   Function: PNStream_Close
   Address: 672060a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_Close(int *param_1)

{
                    /* 0x60a0  9  PNStream_Close */
  (**(code **)(*param_1 + 0x1c))();
  return;
}


