/* Module: encn3260.dll
   Function: FUN_664cd6b0
   Address: 664cd6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664cd6d9) */

void __fastcall FUN_664cd6b0(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x58);
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    FUN_664bab40(&local_c);
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  return;
}


