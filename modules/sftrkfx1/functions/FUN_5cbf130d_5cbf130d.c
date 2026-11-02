/* Module: sftrkfx1.dll
   Function: FUN_5cbf130d
   Address: 5cbf130d
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cbf130d(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return iVar1 != *(int *)(param_1 + 0xc);
}


