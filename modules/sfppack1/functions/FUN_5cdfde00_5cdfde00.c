/* Module: sfppack1.dll
   Function: FUN_5cdfde00
   Address: 5cdfde00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cdfde00(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


