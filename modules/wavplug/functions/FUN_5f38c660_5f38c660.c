/* Module: wavplug.dll
   Function: FUN_5f38c660
   Address: 5f38c660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f38c660(int *param_1,LPWSTR param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_5f38cc80((int)param_1);
  if (-1 < iVar1) {
    if (param_1[0x96] == 0) {
      iVar1 = FUN_5f38d2b0(param_1);
    }
    if (*(int *)(param_1[0x96] + 0x28) == 0) {
      iVar1 = FUN_5f38d050(param_1,0);
    }
    if (((-1 < iVar1) && (param_1[0x96] != 0)) &&
       (iVar1 = *(int *)(param_1[0x96] + 0x28), iVar1 != 0)) {
      FUN_5f38db10(iVar1 + -0xa8,param_2,param_3,param_5);
    }
  }
  return;
}


