/* Module: wavplug.dll
   Function: FUN_5f3bce40
   Address: 5f3bce40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f3bce40(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = FUN_5f3c4a40(iVar1);
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


