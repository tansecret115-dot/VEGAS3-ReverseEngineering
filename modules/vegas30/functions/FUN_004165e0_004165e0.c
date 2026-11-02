/* Module: vegas30.exe
   Function: FUN_004165e0
   Address: 004165e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004165e0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 0x8c);
  if (iVar4 < 1) {
    return;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0xc) & 0x40000) == 0)) {
    if (0 < iVar4) {
      piVar3 = (int *)((*(int **)(param_1 + 0x8c))[2] + 0x28);
      do {
        if (*piVar3 != 0) {
          puVar1 = (uint *)(*piVar3 + 0xc);
          *puVar1 = *puVar1 & 0xfffbffff;
        }
        if (param_2 == 0) {
          piVar3[-6] = piVar3[-10];
          piVar3[-5] = piVar3[-9];
          piVar3[-4] = piVar3[-8];
          piVar3[-3] = piVar3[-7];
        }
        piVar3 = piVar3 + 0x12;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (param_2 == 0) goto LAB_0041665b;
    uVar2 = *(uint *)(param_2 + 0xc) | 0x40000;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc) & 0xfffbffff;
  }
  *(uint *)(param_2 + 0xc) = uVar2;
LAB_0041665b:
  FUN_004159e0(param_1,0,0,0);
  return;
}


