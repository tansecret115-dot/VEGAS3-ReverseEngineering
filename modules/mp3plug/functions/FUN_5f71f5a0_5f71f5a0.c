/* Module: mp3plug.dll
   Function: FUN_5f71f5a0
   Address: 5f71f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f71f5a0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = FUN_5f727760(iVar1);
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


