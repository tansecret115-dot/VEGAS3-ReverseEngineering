/* Module: encn3260.dll
   Function: FUN_66494a80
   Address: 66494a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66494a9d) */

void __fastcall FUN_66494a80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c;
  int *local_8;
  
  local_c = *(int *)((int)param_1 + 0x12);
  piVar1 = (int *)((int)param_1 + 0xe);
  local_8 = piVar1;
  while (local_c != 0) {
    puVar4 = (undefined4 *)FUN_664bab80(local_c);
    puVar4 = (undefined4 *)*puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar4[7];
      *puVar4 = &PTR_FUN_664dc580;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      operator_delete(puVar4);
    }
    FUN_664bab40(&local_c);
  }
  (**(code **)(*piVar1 + 8))();
  piVar2 = *(int **)((int)param_1 + 10);
  iVar3 = piVar2[3];
  while (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_664c0540(piVar2);
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar4[7];
      *puVar4 = &PTR_FUN_664dc580;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      operator_delete(puVar4);
    }
    piVar2 = *(int **)((int)param_1 + 10);
    iVar3 = piVar2[3];
  }
  puVar4 = *(undefined4 **)((int)param_1 + 10);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_664c03a0(puVar4);
    operator_delete(puVar4);
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *param_1 = 0;
  }
  FUN_664ba950(piVar1);
  return;
}


