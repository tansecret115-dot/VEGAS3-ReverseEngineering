/* Module: vegas30.exe
   Function: FUN_005b46a0
   Address: 005b46a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b46a0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_1;
  }
  uVar1 = 0;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar2 = (int *)param_1[2];
    while ((*piVar2 != param_2 || (piVar2[1] != param_3))) {
      iVar3 = iVar3 + 1;
      piVar2 = (int *)((int)piVar2 + param_1[1]);
      if (iVar4 <= iVar3) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


