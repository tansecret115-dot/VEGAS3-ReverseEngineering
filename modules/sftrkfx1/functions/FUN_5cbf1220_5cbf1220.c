/* Module: sftrkfx1.dll
   Function: FUN_5cbf1220
   Address: 5cbf1220
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cbf1220(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


