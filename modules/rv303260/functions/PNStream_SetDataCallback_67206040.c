/* Module: rv303260.dll
   Function: PNStream_SetDataCallback
   Address: 67206040
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_SetDataCallback(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x6040  17  PNStream_SetDataCallback */
  (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4);
  return;
}


