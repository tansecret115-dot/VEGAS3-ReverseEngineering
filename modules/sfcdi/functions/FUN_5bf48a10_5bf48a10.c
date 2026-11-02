/* Module: sfcdi.dll
   Function: FUN_5bf48a10
   Address: 5bf48a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf48a10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0x4c;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  iVar4 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0x214);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if (iVar3 <= iVar4) break;
    iVar3 = *(int *)(*(int *)(piVar2[2] + iVar4 * 4) + 0x34c);
    if (iVar3 != 0) {
      uVar5 = *(uint *)(iVar1 + 0x14) & 0x7ff;
      if (0x800 - uVar5 < (uint)*(byte *)(iVar3 + 0x56)) {
        *(uint *)(iVar1 + 0x14) = (*(uint *)(iVar1 + 0x14) - uVar5) + 0x800;
      }
      *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + (uint)*(byte *)(iVar3 + 0x56);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(iVar1 + 0x10);
      iVar3 = (*(uint *)(iVar1 + 0x14) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x14) & 0x7ff) != 0);
      *(int *)(iVar1 + 0x10) = iVar3;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar3;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}


