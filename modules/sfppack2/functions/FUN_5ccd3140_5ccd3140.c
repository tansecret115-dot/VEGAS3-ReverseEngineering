/* Module: sfppack2.dll
   Function: FUN_5ccd3140
   Address: 5ccd3140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3140(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  
  *param_2 = 3;
  pvVar3 = CoTaskMemAlloc(0x30);
  param_2[1] = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(undefined4 *)((int)pvVar3 + 0x10) = DAT_5cd511b8;
  *(undefined4 *)((int)pvVar3 + 0x14) = DAT_5cd511bc;
  *(undefined4 *)((int)pvVar3 + 0x18) = DAT_5cd511c0;
  *(undefined4 *)((int)pvVar3 + 0x1c) = DAT_5cd511c4;
  iVar1 = param_2[1];
  *(undefined4 *)(iVar1 + 0x20) = DAT_5cd511c8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_5cd511cc;
  *(undefined4 *)(iVar1 + 0x28) = DAT_5cd511d0;
  *(undefined4 *)(iVar1 + 0x2c) = DAT_5cd511d4;
  puVar2 = (undefined4 *)param_2[1];
  *puVar2 = DAT_5cd511d8;
  puVar2[1] = DAT_5cd511dc;
  puVar2[2] = DAT_5cd511e0;
  puVar2[3] = DAT_5cd511e4;
  return 0;
}


