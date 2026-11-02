/* Module: rv203260.dll
   Function: PNStream_SetProperty
   Address: 638a5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_SetProperty(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x5d10  19  PNStream_SetProperty */
  (**(code **)(*param_1 + 0x2c))(param_2,param_3);
  return;
}


