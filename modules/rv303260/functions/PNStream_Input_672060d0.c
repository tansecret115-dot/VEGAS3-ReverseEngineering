/* Module: rv303260.dll
   Function: PNStream_Input
   Address: 672060d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_Input(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x60d0  15  PNStream_Input */
  (**(code **)(*param_1 + 0x20))(param_2,param_3);
  return;
}


