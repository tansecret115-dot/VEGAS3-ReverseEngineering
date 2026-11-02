/* Module: rmto3260.dll
   Function: FUN_66305400
   Address: 66305400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66305400(int param_1)

{
  LSTATUS LVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0x80040009;
  }
  LVar1 = RegCloseKey(*(HKEY *)(param_1 + 8));
  if (LVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 0;
  }
  return 0x80004005;
}


