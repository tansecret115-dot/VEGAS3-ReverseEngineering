/* Module: pngu3266.dll
   Function: FUN_6061ca90
   Address: 6061ca90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6061ca90(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = operator_new(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar2 + 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar1 = &PTR_FUN_6062d1f8;
    puVar2[4] = puVar1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = &PTR_FUN_6062d1d8;
    *puVar1 = &PTR_LAB_6062d1b0;
  }
  *param_1 = (int)puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 2);
    iVar3 = (**(code **)(*(int *)(*param_1 + 4) + 0x1c))((int *)(*param_1 + 4));
    InterlockedDecrement((LONG *)(*param_1 + 8));
    if (iVar3 < 0) {
      if (*param_1 != 0) {
        (**(code **)(*(int *)(*param_1 + 4) + 0xc))(1);
      }
      *param_1 = 0;
      return iVar3;
    }
    return 0;
  }
  return -0x7ff8fff2;
}


