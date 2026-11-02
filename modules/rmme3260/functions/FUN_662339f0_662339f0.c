/* Module: rmme3260.dll
   Function: FUN_662339f0
   Address: 662339f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66233a35) */

void __fastcall FUN_662339f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_c;
  int *local_8;
  
  piVar1 = (int *)((int)param_1 + 0x49);
  *param_1 = &PTR_FUN_6626c198;
  param_1[1] = &PTR_LAB_6626c160;
  param_1[2] = &PTR_LAB_6626c148;
  param_1[3] = &PTR_LAB_6626c130;
  param_1[4] = &PTR_LAB_6626c108;
  param_1[5] = &PTR_LAB_6626c0f8;
  local_c = *(int *)((int)param_1 + 0x4d);
  local_8 = piVar1;
  while (local_c != 0) {
    puVar2 = (undefined4 *)FUN_66250c10(local_c);
    operator_delete((void *)*puVar2);
    FUN_66250bf0(&local_c);
  }
  (**(code **)(*piVar1 + 8))();
  if (*(void **)((int)param_1 + 0x5d) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5d));
    *(undefined4 *)((int)param_1 + 0x5d) = 0;
  }
  FUN_66250a40(piVar1);
  FUN_66250a40(param_1 + 8);
  return;
}


