/* Module: rmme3260.dll
   Function: FUN_66263b70
   Address: 66263b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66263b98) */

void __fastcall FUN_66263b70(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    FUN_66263eb0((undefined4 *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  (**(code **)(*(int *)*param_1 + 8))();
  return;
}


