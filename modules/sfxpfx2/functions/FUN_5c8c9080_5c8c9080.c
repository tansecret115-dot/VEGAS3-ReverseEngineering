/* Module: sfxpfx2.dll
   Function: FUN_5c8c9080
   Address: 5c8c9080
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5c8c9080(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


