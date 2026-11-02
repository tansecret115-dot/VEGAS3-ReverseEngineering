/* Module: rmbe3260.dll
   Function: FUN_6605f600
   Address: 6605f600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6605f600(int *param_1)

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
    *puVar1 = &PTR_FUN_66063e30;
    puVar2[4] = puVar1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = &PTR_FUN_66068e40;
    *puVar1 = &PTR_LAB_66068e18;
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


