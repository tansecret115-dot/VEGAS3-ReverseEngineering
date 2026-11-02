/* Module: wavplug.dll
   Function: FUN_5f391170
   Address: 5f391170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f391170(int *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_5f3916e0((int)param_1);
  if ((-1 < iVar1) && (param_4 == 0)) {
    if (param_1[0x96] == 0) {
      iVar1 = FUN_5f391c40(param_1);
    }
    if (*(int *)(param_1[0x96] + 0x20) == 0) {
      iVar1 = FUN_5f3919e0(param_1,0);
    }
    if (((-1 < iVar1) && (param_1[0x96] != 0)) &&
       (iVar1 = *(int *)(param_1[0x96] + 0x20), iVar1 != 0)) {
      FUN_5f392630(iVar1 + -0xa8,param_2,param_3,param_5);
    }
  }
  return;
}


