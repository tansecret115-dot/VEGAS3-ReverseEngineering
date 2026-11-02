/* Module: vegas30.exe
   Function: FUN_00607d60
   Address: 00607d60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00607d60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00607cb0();
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return true;
  }
  iVar1 = FUN_00607d30();
  return iVar1 == *(int *)(param_1 + 0x10);
}


