/* Module: vegas30.exe
   Function: FUN_004ab0a0
   Address: 004ab0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ab0a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = FUN_004ab010(param_1);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if (5 < iVar4) {
        return iVar5;
      }
      uVar2 = FUN_004a9cd0(iVar4);
      iVar3 = FUN_004a9cf0(param_2,uVar2);
      if (iVar3 != 0) {
        if (param_3 == 0) {
          iVar3 = FUN_004ab060(param_1,uVar2);
          iVar5 = iVar5 + iVar3;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar5 < iVar1);
  }
  return iVar5;
}


