/* Module: sftrans1.dll
   Function: FUN_00542be0
   Address: 00542be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00542be0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 4);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + iVar4 * 4);
        iVar3 = *(int *)(iVar2 + 0x40);
        if (iVar3 != 0) {
          FUN_004dd670(iVar3);
          *(undefined4 *)(iVar2 + 0x40) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_004dd670(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004dd670(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


