/* Module: vidcap30.exe
   Function: FUN_0044f6b0
   Address: 0044f6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f6b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_0044c620(param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (iVar4 < 0) {
        return iVar4;
      }
      uVar2 = FUN_0044c5c0(param_1,iVar3);
      iVar4 = FUN_0044f7c0(uVar2,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar4;
}


