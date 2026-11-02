/* Module: vegas30.exe
   Function: FUN_005b3f30
   Address: 005b3f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b3f30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    piVar3 = (int *)(param_2 + 4);
    while (*piVar3 != 0) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
      if (param_1 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


