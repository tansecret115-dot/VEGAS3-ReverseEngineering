/* Module: aviplug.dll
   Function: FUN_5f94da20
   Address: 5f94da20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94da20(int *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (param_1[9] == 0) {
    return -0x7fff0001;
  }
  if (*param_1 == 0) {
    if (((param_1[4] & 4U) != 0) && (param_1[8] != 0xac44)) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0x7f;
      param_1[4] = param_1[4] | 8;
    }
    *param_1 = 1;
  }
  if ((param_1[4] & 1U) == 0) {
    iVar1 = FUN_5f94d280((int)param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_5f94d570((int)param_1,param_2,param_3,param_4);
  }
  if (-1 < iVar1) {
    param_1[3] = (param_1[3] + 1) % param_1[2];
  }
  return iVar1;
}


