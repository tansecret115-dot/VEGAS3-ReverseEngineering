/* Module: rmme3260.dll
   Function: FUN_66262540
   Address: 66262540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6626255c) */

void __fastcall FUN_66262540(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int *local_8;
  
  local_c = param_1[2];
  local_8 = param_1 + 1;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    operator_delete((void *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_66263540((void *)*param_1);
    *param_1 = 0;
  }
  FUN_66250a40(param_1 + 1);
  return;
}


