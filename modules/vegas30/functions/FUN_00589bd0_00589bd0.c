/* Module: vegas30.exe
   Function: FUN_00589bd0
   Address: 00589bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00589bd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_005b87b0(param_1);
  iVar2 = 0;
  if (0 < *piVar1) {
    piVar3 = (int *)piVar1[2];
    while ((param_2 != *(int *)(*piVar3 + 0x3c) || ((*(byte *)(*piVar3 + 0x10) & 0x80) == 0))) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*piVar1 <= iVar2) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


