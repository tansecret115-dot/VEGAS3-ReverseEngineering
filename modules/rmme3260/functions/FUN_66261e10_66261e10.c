/* Module: rmme3260.dll
   Function: FUN_66261e10
   Address: 66261e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66261e67) */
/* WARNING: Removing unreachable block (ram,0x66261e2a) */
/* WARNING: Removing unreachable block (ram,0x66261ea4) */

void __fastcall FUN_66261e10(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int *local_8;
  
  local_c = param_1[1];
  local_8 = param_1;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    operator_delete((void *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  local_c = param_1[6];
  local_8 = param_1 + 5;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    operator_delete((void *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  local_c = param_1[0xb];
  local_8 = param_1 + 10;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_66250c10(local_c);
    operator_delete((void *)*puVar1);
    FUN_66250bf0(&local_c);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    FUN_66263540((void *)param_1[0xf]);
    param_1[0xf] = 0;
  }
  FUN_66250a40(param_1 + 10);
  FUN_66250a40(param_1 + 5);
  FUN_66250a40(param_1);
  return;
}


