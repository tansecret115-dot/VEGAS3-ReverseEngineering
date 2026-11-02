/* Module: rmme3260.dll
   Function: FUN_66243720
   Address: 66243720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66243720(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_6626c718;
  FUN_662438e0((int)param_1);
  piVar2 = *(int **)((int)param_1 + 0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  puVar1 = (undefined4 *)((int)param_1 + 0x21);
  local_14 = -(uint)(*(int *)((int)param_1 + 0x2d) != 0);
  local_c = (int *)0x0;
  local_8 = 0;
  local_10 = puVar1;
  while (local_14 != 0) {
    FUN_66251190(local_10,&local_14,&local_8,(int *)&local_c);
    piVar2 = local_c;
    if (local_c != (int *)0x0) {
      FUN_66243690(local_c);
      operator_delete(piVar2);
    }
  }
  FUN_66250e90((int)puVar1);
  FUN_66250ed0(puVar1);
  return;
}


