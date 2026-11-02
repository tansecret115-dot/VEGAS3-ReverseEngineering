/* Module: oggplug.dll
   Function: FUN_00436a30
   Address: 00436a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00436a30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1 << 2) {
    iVar1 = 0;
    do {
      FUN_00436b20((undefined4 *)(param_1[4] + iVar1));
      free(*(void **)(param_1[5] + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < *param_1 * 4);
  }
  free((void *)param_1[5]);
  free((void *)param_1[4]);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


