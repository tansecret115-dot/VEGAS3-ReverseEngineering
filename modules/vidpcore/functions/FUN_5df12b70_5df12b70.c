/* Module: vidpcore.dll
   Function: FUN_5df12b70
   Address: 5df12b70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5df12b70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_5df12ac0();
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return true;
  }
  iVar1 = FUN_5df12b40();
  return iVar1 == *(int *)(param_1 + 0x10);
}


