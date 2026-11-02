/* Module: vidcap30.exe
   Function: FUN_00576f80
   Address: 00576f80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00576f80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00576ed0();
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return true;
  }
  iVar1 = FUN_00576f50();
  return iVar1 == *(int *)(param_1 + 0x10);
}


