/* Module: sfpublish.dll
   Function: FUN_0040cfe0
   Address: 0040cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040cfe0(int param_1)

{
  int iVar1;
  uint local_10 [2];
  uint local_8 [2];
  
  if (*(void **)(param_1 + 0x6c) != (void *)0x0) {
    iVar1 = FUN_00420870(*(void **)(param_1 + 0x6c),local_8,local_10);
    if (-1 < iVar1) {
      FUN_00413b00(*(void **)(param_1 + 0x70),local_8,local_10);
    }
  }
  return 0;
}


