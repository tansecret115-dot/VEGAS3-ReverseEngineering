/* Module: vegas30.exe
   Function: FUN_004e9f70
   Address: 004e9f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e9f70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_005b8630(param_1);
  if (*(int *)(iVar1 + 0x3e4) == 0) {
    FUN_005b42d0();
  }
  iVar3 = *(int *)(iVar1 + 0x3e4) + 1;
  *(int *)(iVar1 + 0x3e4) = iVar3;
  if (iVar3 == 1) {
    iVar4 = -0x7fffbffb;
    if ((*(char *)(iVar1 + 0x1d0) == '\0') && (iVar4 = FUN_005b3d40(), -1 < iVar4)) {
      if ((param_2 == 0x220) || (param_2 == 0x21e)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      iVar4 = *(int *)(iVar1 + 0x428) + 1;
      *(int *)(iVar1 + 0x428) = iVar4;
      iVar4 = FUN_005b53a0(param_2,iVar4,param_3,uVar2);
      if (-1 < iVar4) {
        return iVar4;
      }
    }
    FUN_004ea010(iVar1,iVar4);
  }
  return iVar4;
}


