/* Module: sfpaplug.dll
   Function: FUN_00447630
   Address: 00447630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00447630(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return;
  }
  if (0 < *piVar2) {
    do {
      iVar1 = *(int *)(piVar2[2] + iVar3 * 4);
      if (iVar1 != 0) {
        if (*(void **)(iVar1 + 8) != (void *)0x0) {
          free(*(void **)(iVar1 + 8));
        }
        if (*(void **)(iVar1 + 4) != (void *)0x0) {
          free(*(void **)(iVar1 + 4));
        }
      }
      piVar2 = *(int **)(param_1 + 0xc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar2);
  }
  FUN_0042b9d0(*(int **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


