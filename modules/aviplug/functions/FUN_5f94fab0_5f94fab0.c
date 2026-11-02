/* Module: aviplug.dll
   Function: FUN_5f94fab0
   Address: 5f94fab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94fab0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *pv;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pv = CoTaskMemAlloc(0x48);
  if (pv == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  FUN_5f94fbb0(pv);
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = param_1;
  puVar4 = pv;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  piVar1 = (int *)pv[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  pv[0x10] = 0;
  pv[0x11] = 0;
  iVar2 = FUN_5f94fb40((int)param_1,(int)pv);
  if (iVar2 < 0) {
    CoTaskMemFree(pv);
    *param_2 = 0;
    return iVar2;
  }
  *param_2 = pv;
  return iVar2;
}


