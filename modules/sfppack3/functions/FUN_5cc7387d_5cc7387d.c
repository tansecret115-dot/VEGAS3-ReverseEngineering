/* Module: sfppack3.dll
   Function: FUN_5cc7387d
   Address: 5cc7387d
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cc7387d(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return iVar1 != *(int *)(param_1 + 0xc);
}


