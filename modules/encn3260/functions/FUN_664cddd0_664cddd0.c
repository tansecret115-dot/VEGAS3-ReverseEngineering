/* Module: encn3260.dll
   Function: FUN_664cddd0
   Address: 664cddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664cde27) */
/* WARNING: Removing unreachable block (ram,0x664cddea) */
/* WARNING: Removing unreachable block (ram,0x664cde64) */

void __fastcall FUN_664cddd0(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int *local_8;
  
  local_c = param_1[1];
  local_8 = param_1;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    operator_delete((void *)*puVar1);
    FUN_664bab40(&local_c);
  }
  local_c = param_1[6];
  local_8 = param_1 + 5;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    operator_delete((void *)*puVar1);
    FUN_664bab40(&local_c);
  }
  local_c = param_1[0xb];
  local_8 = param_1 + 10;
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    operator_delete((void *)*puVar1);
    FUN_664bab40(&local_c);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    FUN_664cf5a0((void *)param_1[0xf]);
    param_1[0xf] = 0;
  }
  FUN_664ba950(param_1 + 10);
  FUN_664ba950(param_1 + 5);
  FUN_664ba950(param_1);
  return;
}


