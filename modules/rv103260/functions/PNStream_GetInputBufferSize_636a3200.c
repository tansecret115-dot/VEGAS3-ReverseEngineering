/* Module: rv103260.dll
   Function: PNStream_GetInputBufferSize
   Address: 636a3200
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_GetInputBufferSize(int *param_1,undefined4 param_2)

{
                    /* 0x3200  11  PNStream_GetInputBufferSize */
  (**(code **)(*param_1 + 0x28))(param_2);
  return;
}


