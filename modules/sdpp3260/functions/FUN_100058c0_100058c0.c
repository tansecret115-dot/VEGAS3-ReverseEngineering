/* Module: sdpp3260.dll
   Function: FUN_100058c0
   Address: 100058c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100058c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = *(int *)(*(int *)(param_1 + 4) + 4);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_10002800(&local_8);
    piVar1 = (int *)*puVar2;
    if (piVar1 != (int *)0x0) {
      FUN_10005b80(piVar1);
      operator_delete(piVar1);
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  return;
}


