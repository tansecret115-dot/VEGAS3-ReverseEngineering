/* Module: sfppack2.dll
   Function: FUN_5ccea510
   Address: 5ccea510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccea510(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_2 = 2;
  puVar2 = CoTaskMemAlloc(0x20);
  param_2[1] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar2 = DAT_5cd52c00;
  puVar2[1] = DAT_5cd52c04;
  puVar2[2] = DAT_5cd52c08;
  puVar2[3] = DAT_5cd52c0c;
  iVar1 = param_2[1];
  *(undefined4 *)(iVar1 + 0x10) = DAT_5cd52c10;
  *(undefined4 *)(iVar1 + 0x14) = DAT_5cd52c14;
  *(undefined4 *)(iVar1 + 0x18) = DAT_5cd52c18;
  *(undefined4 *)(iVar1 + 0x1c) = DAT_5cd52c1c;
  return 0;
}


