/* Module: rmme3260.dll
   Function: FUN_66263340
   Address: 66263340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66263368) */

void __fastcall FUN_66263340(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    FUN_66263540((void *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  (**(code **)(*(int *)*param_1 + 8))();
  return;
}


