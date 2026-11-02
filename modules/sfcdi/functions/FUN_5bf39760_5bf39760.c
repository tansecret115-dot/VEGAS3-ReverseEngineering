/* Module: sfcdi.dll
   Function: FUN_5bf39760
   Address: 5bf39760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf39760(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_1;
  }
  uVar3 = iVar2 - 1;
  if (-1 < (int)uVar3) {
    piVar4 = (int *)(param_1[2] + uVar3 * 4);
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == 3) {
        return piVar1[3] + piVar1[2];
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + -1;
    } while (uVar3 < 0x80000000);
  }
  return 0;
}


