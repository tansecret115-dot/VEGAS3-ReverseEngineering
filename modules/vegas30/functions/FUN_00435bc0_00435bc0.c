/* Module: vegas30.exe
   Function: FUN_00435bc0
   Address: 00435bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435bc0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_005b83b0(uVar1,0);
  FUN_004692e0(param_1);
  piVar3 = (int *)FUN_005b8950(uVar1);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    piVar2 = *(int **)(piVar3[2] + iVar4 * 4);
    if ((*piVar2 == 0x20) && (*(int **)(param_1 + 0xce4) == piVar2)) {
      *(undefined4 *)(param_1 + 0xce4) = 0;
      *(undefined4 *)(param_1 + 0xcec) = 0;
    }
  }
  FUN_00469280(param_1);
  FUN_005b84d0(uVar1,0);
  FUN_004cb910(param_1,0,0xffffffff);
  FUN_00456c20(param_1);
  return;
}


