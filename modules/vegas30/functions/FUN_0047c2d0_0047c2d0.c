/* Module: vegas30.exe
   Function: FUN_0047c2d0
   Address: 0047c2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047c2d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10 [2];
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x40);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + iVar2 * 4);
    }
    if (iVar2 == param_2) {
      FUN_00479160(param_1,param_2,*(undefined4 *)(param_1 + 0x48),local_10,0);
      FUN_00479160(param_1,param_2,*(int *)(param_1 + 0x48) + -1 + *(int *)(param_1 + 0x4c),local_8,
                   0);
      if ((local_10[0] <= param_3) && (param_3 <= local_8[0])) {
        return 1;
      }
    }
  }
  return 0;
}


