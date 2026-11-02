/* Module: rv203260.dll
   Function: PNStream_GetInputBufferSize
   Address: 638a5de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_GetInputBufferSize(int *param_1,undefined4 param_2)

{
                    /* 0x5de0  11  PNStream_GetInputBufferSize */
  (**(code **)(*param_1 + 0x28))(param_2);
  return;
}


