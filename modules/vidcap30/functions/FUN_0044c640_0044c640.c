/* Module: vidcap30.exe
   Function: FUN_0044c640
   Address: 0044c640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044c640(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == param_2) {
    return 1;
  }
  iVar1 = FUN_0044c620(param_2);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar2 = FUN_0044c5c0(param_2,iVar3);
      iVar4 = FUN_0044c640(param_1,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar4;
}


