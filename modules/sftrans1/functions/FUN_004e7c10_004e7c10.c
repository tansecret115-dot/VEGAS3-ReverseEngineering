/* Module: sftrans1.dll
   Function: FUN_004e7c10
   Address: 004e7c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004e7c10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x126c0) <= *(int *)(param_1 + 0x126c4)) {
    *(undefined4 *)(param_1 + 0x126c4) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x126bc) + 0x58 + *(int *)(param_1 + 0x126c4) * 0x6c) = 0;
  iVar1 = *(int *)(param_1 + 0x126c4);
  *(int *)(param_1 + 0x126c4) = iVar1 + 1;
  return *(int *)(param_1 + 0x126bc) + iVar1 * 0x6c;
}


