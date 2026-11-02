/* Module: qt4plug.dll
   Function: FUN_5f524ac0
   Address: 5f524ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f524f75) */
/* WARNING: Removing unreachable block (ram,0x5f524fa8) */
/* WARNING: Removing unreachable block (ram,0x5f524c57) */

undefined4 FUN_5f524ac0(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_70 [19];
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596d50;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffef0;
  ExceptionList = &local_14;
  FUN_5f5782f0();
  iVar2 = FUN_5f5782f0();
  if (iVar2 != 0) {
    FUN_5f5781b0();
  }
  FUN_5f580a00();
  iVar2 = (int)sRam00000000;
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_20 = 0;
  sVar1 = FUN_5f5808e0();
  if (sVar1 == 0) {
    puVar3 = local_70;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_5f5842a0();
    iVar2 = FUN_5f5782f0();
    if (iVar2 != 0) {
      FUN_5f5781b0();
    }
    FUN_5f57c090();
    FUN_5f57c0b0();
    FUN_5f584350();
    iVar2 = FUN_5f57aed0();
    FUN_5f57ae90();
    FUN_5f57b310();
    FUN_5f57b0b0();
    FUN_5f57c130();
    FUN_5f57c150();
    FUN_5f57c910();
    FUN_5f524fe0();
    FUN_5f57aed0();
    sVar1 = FUN_5f580b00();
    _fpreset();
    if (sVar1 == 0) {
      local_8 = 0;
      local_24 = FUN_5f580b20();
      if ((short)local_24 == 0) {
        local_8 = 1;
        local_24 = FUN_5f5767b0();
      }
      local_8 = 0xffffffff;
      FUN_5f580d20();
    }
    FUN_5f57c0d0();
    if (iVar2 != 0) {
      FUN_5f57b0d0();
      FUN_5f57b390();
    }
    if (local_20 != 0) {
      FUN_5f580600();
    }
    ExceptionList = local_14;
    return 0;
  }
  ExceptionList = local_14;
  return 0x8004e011;
}


