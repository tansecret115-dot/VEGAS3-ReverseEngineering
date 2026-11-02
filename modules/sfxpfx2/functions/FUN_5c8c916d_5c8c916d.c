/* Module: sfxpfx2.dll
   Function: FUN_5c8c916d
   Address: 5c8c916d
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5c8c916d(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return iVar1 != *(int *)(param_1 + 0xc);
}


