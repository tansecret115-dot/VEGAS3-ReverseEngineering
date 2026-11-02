/* Module: aviplug.dll
   Function: FUN_5f9401b0
   Address: 5f9401b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9401b0(uint param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
                undefined4 *param_7)

{
  int iVar1;
  
  if (param_5 != *(int *)(param_1 + 0x48) + 8) {
    return -0x7fff0001;
  }
  iVar1 = FUN_5f940560(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


