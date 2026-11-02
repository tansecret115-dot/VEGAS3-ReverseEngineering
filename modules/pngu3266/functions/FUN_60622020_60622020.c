/* Module: pngu3266.dll
   Function: FUN_60622020
   Address: 60622020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60622020(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  *param_1 = &PTR_FUN_6062d418;
  puVar5 = (undefined4 *)FUN_606224a0(param_1,0x7fffffff,0x7fffffff);
  while (puVar5 != (undefined4 *)0x0) {
    puVar2 = (uint *)param_1[0x208];
    puVar3 = (undefined4 *)puVar5[1];
    if ((puVar5[5] - 1 <= *puVar2) &&
       (piVar1 = (int *)(puVar2[4] + (puVar5[5] - 1) * 4), *piVar1 != 0)) {
      *piVar1 = 0;
      puVar2[2] = puVar2[2] - 1;
    }
    if (puVar5[4] == 0) {
      (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
    }
    piVar1 = (int *)puVar5[-1];
    if (piVar1 == (int *)0x0) {
      operator_delete(puVar5 + -1);
      puVar5 = puVar3;
    }
    else {
      (**(code **)(*piVar1 + 0x10))(piVar1,puVar5 + -1);
      puVar5 = puVar3;
    }
  }
  if ((param_1[0x209] != 0) && (pvVar4 = (void *)param_1[0x208], pvVar4 != (void *)0x0)) {
    operator_delete(*(void **)((int)pvVar4 + 0x10));
    operator_delete(pvVar4);
    param_1[0x208] = 0;
  }
  return;
}


