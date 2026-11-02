/* Module: rv203260.dll
   Function: PNStream_GetStreamHeader
   Address: 638a5d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_GetStreamHeader(int *param_1,undefined4 param_2)

{
                    /* 0x5d80  13  PNStream_GetStreamHeader */
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


