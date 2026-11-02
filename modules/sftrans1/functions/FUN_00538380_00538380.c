/* Module: sftrans1.dll
   Function: FUN_00538380
   Address: 00538380
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00538380(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005382d0();
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return true;
  }
  iVar1 = FUN_00538350();
  return iVar1 == *(int *)(param_1 + 0x10);
}


