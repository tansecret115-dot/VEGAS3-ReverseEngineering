/* Module: vegas30k.dll
   Function: FUN_011a0260
   Address: 011a0260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011a0260(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 0x608);
  uVar1 = 1;
  if (piVar2 != (int *)0x0) {
    while (*piVar2 != param_2) {
      piVar2 = (int *)piVar2[0x5b];
      if (piVar2 == (int *)0x0) {
        return uVar1;
      }
    }
    uVar4 = 0;
    if (*(short *)((int)piVar2 + 6) != 0) {
      piVar3 = piVar2 + 0x3a;
      do {
        uVar4 = uVar4 + 1;
        *piVar3 = *param_3;
        piVar3[1] = param_3[1];
        param_3 = param_3 + 2;
        piVar3 = piVar3 + 2;
      } while (uVar4 < *(ushort *)((int)piVar2 + 6));
    }
    uVar1 = 0;
  }
  return uVar1;
}


