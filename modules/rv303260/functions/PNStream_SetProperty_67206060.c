/* Module: rv303260.dll
   Function: PNStream_SetProperty
   Address: 67206060
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_SetProperty(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x6060  19  PNStream_SetProperty */
  (**(code **)(*param_1 + 0x2c))(param_2,param_3);
  return;
}


