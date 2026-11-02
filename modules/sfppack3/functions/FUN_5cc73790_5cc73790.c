/* Module: sfppack3.dll
   Function: FUN_5cc73790
   Address: 5cc73790
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5cc73790(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


