/* Module: encn3260.dll
   Function: FUN_6649dd20
   Address: 6649dd20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6649dd65) */

void __fastcall FUN_6649dd20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_c;
  int *local_8;
  
  piVar1 = (int *)((int)param_1 + 0x49);
  *param_1 = &PTR_FUN_664deca8;
  param_1[1] = &PTR_LAB_664dec70;
  param_1[2] = &PTR_LAB_664dec58;
  param_1[3] = &PTR_LAB_664dec40;
  param_1[4] = &PTR_LAB_664dec18;
  param_1[5] = &PTR_LAB_664dec08;
  local_c = *(int *)((int)param_1 + 0x4d);
  local_8 = piVar1;
  while (local_c != 0) {
    puVar2 = (undefined4 *)FUN_664bab80(local_c);
    operator_delete((void *)*puVar2);
    FUN_664bab40(&local_c);
  }
  (**(code **)(*piVar1 + 8))();
  if (*(void **)((int)param_1 + 0x5d) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5d));
    *(undefined4 *)((int)param_1 + 0x5d) = 0;
  }
  FUN_664ba950(piVar1);
  FUN_664ba950(param_1 + 8);
  return;
}


