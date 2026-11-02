/* Module: rv203260.dll
   Function: PNStream_GetProperty
   Address: 638a5d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_GetProperty(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x5d30  12  PNStream_GetProperty */
  (**(code **)(*param_1 + 0x30))(param_2,param_3);
  return;
}


