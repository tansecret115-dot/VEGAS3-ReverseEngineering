/* Module: encn3260.dll
   Function: FUN_664b5860
   Address: 664b5860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664b588d) */

void __cdecl FUN_664b5860(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x85c);
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
    FUN_664bab40(&local_c);
  }
  (**(code **)(**(int **)(param_1 + 0x85c) + 8))();
  return;
}


