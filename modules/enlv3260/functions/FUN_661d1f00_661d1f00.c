/* Module: enlv3260.dll
   Function: FUN_661d1f00
   Address: 661d1f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d1f00(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_661d5130;
  param_1[1] = &PTR_LAB_661d5110;
  param_1[2] = &PTR_LAB_661d5100;
  param_1[3] = &PTR_LAB_661d50f0;
  param_1[4] = &PTR_LAB_661d50e0;
  FUN_661d23d0((int)param_1);
  pvVar1 = *(void **)((int)param_1 + 0x62);
  if (pvVar1 != (void *)0x0) {
    FUN_661d28f0((int)pvVar1);
    operator_delete(pvVar1);
    *(undefined4 *)((int)param_1 + 0x62) = 0;
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[7] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x5e);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0x66);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_661d3c00(puVar3);
    operator_delete(puVar3);
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  if (*(void **)((int)param_1 + 0x56) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x56));
    *(undefined4 *)((int)param_1 + 0x56) = 0;
  }
  FUN_661d2c80(param_1 + 0x12);
  FUN_661d2c80(param_1 + 0xf);
  FUN_661d2c80(param_1 + 0xc);
  FUN_661d2c80(param_1 + 9);
  return;
}


