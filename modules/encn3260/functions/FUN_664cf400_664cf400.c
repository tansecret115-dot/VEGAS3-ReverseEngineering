/* Module: encn3260.dll
   Function: FUN_664cf400
   Address: 664cf400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664cf428) */

void __fastcall FUN_664cf400(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    FUN_664cf5a0((void *)*puVar1);
    FUN_664bab40(&local_c);
  }
  (**(code **)(*(int *)*param_1 + 8))();
  return;
}


