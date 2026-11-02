/* Module: vidcap30.exe
   Function: FUN_00402040
   Address: 00402040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402040(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  undefined4 local_4;
  
  local_8 = (int *)0x0;
  local_4 = 1;
  iVar3 = FUN_00401d60(&local_8,param_1,param_2,param_3);
  if ((iVar3 < 0) || (local_8 == (int *)0x0)) {
    return iVar3;
  }
  FUN_00402100(local_8);
  iVar2 = *local_8;
  param_3 = 0;
  while (param_3 < iVar2) {
    iVar1 = param_3 + 1;
    iVar3 = FUN_00402190(local_8,&param_3,&local_4);
    if (iVar3 < 0) break;
    if (param_3 < iVar1) {
      iVar3 = -0x7fff0001;
      break;
    }
    if (param_3 < 0) {
      _SfList_Destroy_4(local_8);
      return iVar3;
    }
  }
  _SfList_Destroy_4(local_8);
  return iVar3;
}


