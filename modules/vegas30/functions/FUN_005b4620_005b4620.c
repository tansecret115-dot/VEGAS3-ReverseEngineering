/* Module: vegas30.exe
   Function: FUN_005b4620
   Address: 005b4620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b4620(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_1;
  }
  uVar1 = 0;
  iVar2 = 0;
  if (0 < iVar4) {
    piVar3 = (int *)param_1[2];
    while (*piVar3 != param_2) {
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + param_1[1]);
      if (iVar4 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


