/* Module: encn3260.dll
   Function: FUN_664d29c0
   Address: 664d29c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664d29c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_664dfef0;
  puVar1 = operator_new(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_664d7a00(puVar1);
  }
  param_1[1] = puVar1;
  puVar2 = operator_new(0x14);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = 1000;
    puVar2[1] = 0x1f5;
    puVar2[2] = 0;
    puVar2[3] = 999;
    pvVar3 = operator_new(4000);
    puVar2[4] = (uint)pvVar3;
    uVar4 = 0;
    if (*puVar2 != 0) {
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)((puVar2[4] - 4) + uVar4 * 4) = 0;
      } while (uVar4 < *puVar2);
      param_1[2] = puVar2;
      return param_1;
    }
  }
  param_1[2] = puVar2;
  return param_1;
}


