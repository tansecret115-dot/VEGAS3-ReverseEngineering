/* Module: encn3260.dll
   Function: FUN_664cfbd0
   Address: 664cfbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664cfbf8) */

void __fastcall FUN_664cfbd0(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    FUN_664cff00((undefined4 *)*puVar1);
    FUN_664bab40(&local_c);
  }
  (**(code **)(*(int *)*param_1 + 8))();
  return;
}


