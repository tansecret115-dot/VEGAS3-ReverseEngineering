/* Module: sfs4rw.dll
   Function: FUN_00402150
   Address: 00402150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402150(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x144) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x144);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x144) + 8) + iVar1 * 4);
      if (*(int *)(iVar2 + 0x23c) != 0) {
        free(*(void **)(iVar2 + 0x240));
        *(undefined4 *)(iVar2 + 0x240) = 0;
        *(undefined4 *)(iVar2 + 0x23c) = 0;
      }
      if (*(void **)(iVar2 + 0x368) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x368));
        *(undefined4 *)(iVar2 + 0x368) = 0;
      }
      if (*(void **)(iVar2 + 0x36c) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x36c));
        *(undefined4 *)(iVar2 + 0x36c) = 0;
      }
      if (*(void **)(iVar2 + 0x370) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x370));
        *(undefined4 *)(iVar2 + 0x370) = 0;
      }
      if (*(void **)(iVar2 + 0x374) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x374));
        *(undefined4 *)(iVar2 + 0x374) = 0;
      }
      if (*(void **)(iVar2 + 0x378) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x378));
        *(undefined4 *)(iVar2 + 0x378) = 0;
      }
      if (*(void **)(iVar2 + 0x37c) != (void *)0x0) {
        free(*(void **)(iVar2 + 0x37c));
        *(undefined4 *)(iVar2 + 0x37c) = 0;
      }
      FUN_00423d00(*(int **)(param_1 + 0x144),iVar1,1,0);
    }
    FUN_00424f70(*(int **)(param_1 + 0x144));
    *(undefined4 *)(param_1 + 0x144) = 0;
    DAT_004a8134 = 0;
  }
  return;
}


