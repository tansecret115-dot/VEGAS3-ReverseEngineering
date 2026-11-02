/* Module: erv13260.dll
   Function: FUN_635fbb60
   Address: 635fbb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635fbb60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(void **)(iVar1 + 0x8c14) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x8c14));
    *(undefined4 *)(iVar1 + 0x8c14) = 0;
  }
  if (*(void **)(iVar1 + 0x8c18) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x8c18));
    *(undefined4 *)(iVar1 + 0x8c18) = 0;
  }
  if (*(void **)(iVar1 + 0x1200) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x1200));
    *(undefined4 *)(iVar1 + 0x1200) = 0;
  }
  return 0;
}


