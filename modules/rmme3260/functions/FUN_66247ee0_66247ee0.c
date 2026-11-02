/* Module: rmme3260.dll
   Function: FUN_66247ee0
   Address: 66247ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66247eff) */

void __fastcall FUN_66247ee0(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(param_1 + 0x4fe);
  local_8 = (int *)(param_1 + 0x4fa);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
    FUN_66250bf0(&local_c);
  }
  (**(code **)(*(int *)(param_1 + 0x4fa) + 8))();
  return;
}


