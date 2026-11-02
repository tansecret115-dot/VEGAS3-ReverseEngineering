/* Module: vegas30k.dll
   Function: FUN_01040030
   Address: 01040030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01040030(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_2[0x11] == 0) {
    puVar7 = (undefined4 *)param_1[0x11];
    if ((puVar7 != (undefined4 *)0x0) && (puVar7 != param_1 + 0x12)) {
      CoTaskMemFree(puVar7);
    }
    param_1[0x11] = 0;
    param_1[0x10] = 0;
  }
  else {
    if ((uint)param_1[0x10] < (uint)param_2[0x10]) {
      pvVar3 = CoTaskMemAlloc(param_2[0x10]);
      if (pvVar3 == (LPVOID)0x0) {
        return 0;
      }
      puVar7 = (undefined4 *)param_1[0x11];
      if ((puVar7 != (undefined4 *)0x0) && (puVar7 != param_1 + 0x12)) {
        CoTaskMemFree(puVar7);
      }
      uVar1 = param_2[0x10];
      param_1[0x11] = pvVar3;
      param_1[0x10] = uVar1;
    }
    uVar5 = param_2[0x10];
    puVar7 = (undefined4 *)param_2[0x11];
    puVar8 = (undefined4 *)param_1[0x11];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  uVar1 = param_1[0x11];
  uVar2 = param_1[0xf];
  puVar7 = param_1;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x11] = uVar1;
  param_1[0xf] = uVar2;
  return 1;
}


