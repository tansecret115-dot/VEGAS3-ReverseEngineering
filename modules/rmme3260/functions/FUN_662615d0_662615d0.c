/* Module: rmme3260.dll
   Function: FUN_662615d0
   Address: 662615d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662615f9) */

void __fastcall FUN_662615d0(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x58);
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  return;
}


