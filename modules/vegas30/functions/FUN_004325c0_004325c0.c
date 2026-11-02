/* Module: vegas30.exe
   Function: FUN_004325c0
   Address: 004325c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004325c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_0064b138;
  FUN_004db160(DAT_0064b138);
  DAT_00647678 = 0xffffffff;
  DAT_0064b138 = param_1;
  DAT_0064767c = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_00647678;
    param_1[1] = 0;
    puVar3 = param_1 + 0x116;
    puVar4 = &DAT_0064b110;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (DAT_00647630 != 0) {
      FUN_004a4390(DAT_00647630,param_1);
    }
    FUN_005d30d0(param_1);
    FUN_004280a0(param_1);
    FUN_00435230(param_1);
    FUN_004db1e0(param_1);
    FUN_00422510(param_1);
    FUN_005733a0();
    FUN_005749b0();
    *(uint *)*param_1 = *(uint *)*param_1 | 0x200;
    *(uint *)*param_1 = *(uint *)*param_1 | 4;
    iVar2 = param_1[0x76];
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004e8800();
    }
  }
  return -(uint)(puVar1 != param_1) & (uint)puVar1;
}


