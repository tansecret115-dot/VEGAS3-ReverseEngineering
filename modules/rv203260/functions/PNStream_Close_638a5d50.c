/* Module: rv203260.dll
   Function: PNStream_Close
   Address: 638a5d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_Close(int *param_1)

{
                    /* 0x5d50  9  PNStream_Close */
  (**(code **)(*param_1 + 0x1c))();
  return;
}


