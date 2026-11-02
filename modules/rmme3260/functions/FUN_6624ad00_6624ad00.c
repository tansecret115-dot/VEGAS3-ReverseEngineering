/* Module: rmme3260.dll
   Function: FUN_6624ad00
   Address: 6624ad00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6624ad2d) */

void __cdecl FUN_6624ad00(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x85c);
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
    FUN_66250bf0(&local_c);
  }
  (**(code **)(**(int **)(param_1 + 0x85c) + 8))();
  return;
}


