/* Module: oggplug.dll
   Function: FUN_004364f0
   Address: 004364f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_004364f0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x14);
  iVar3 = 0;
  uVar2 = FUN_00441f10(param_2,piVar1[2]);
  if (-1 < (int)uVar2) {
    iVar3 = *(int *)(*piVar1 + uVar2 * 4);
    FUN_00442050(param_2,*(int *)(piVar1[1] + uVar2 * 4));
    if (iVar3 < 1) {
      return -iVar3;
    }
  }
  do {
    uVar2 = FUN_004421e0(param_2);
    if (uVar2 == 0xffffffff) {
      return -1;
    }
    if (uVar2 == 0) {
      iVar3 = *(int *)(piVar1[3] + iVar3 * 4);
    }
    else if (uVar2 == 1) {
      iVar3 = *(int *)(piVar1[4] + iVar3 * 4);
    }
  } while (0 < iVar3);
  return -iVar3;
}


