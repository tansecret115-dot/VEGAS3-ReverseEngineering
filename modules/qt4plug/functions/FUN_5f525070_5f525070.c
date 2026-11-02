/* Module: qt4plug.dll
   Function: FUN_5f525070
   Address: 5f525070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f5252ec) */
/* WARNING: Removing unreachable block (ram,0x5f5252f1) */
/* WARNING: Removing unreachable block (ram,0x5f5252f5) */

undefined4 FUN_5f525070(undefined4 param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 local_54;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596d68;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  ExceptionList = &local_14;
  FUN_5f5183a0(param_2,&local_60);
  local_38 = 0;
  local_34 = 0x4e4f4e45;
  local_30 = 2;
  local_2e = 0x10;
  local_2c = 0xac440000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_44 = 0;
  sVar1 = FUN_5f57eb70();
  if (sVar1 == 0) {
    FUN_5f57ec50();
    iVar2 = FUN_5f57aed0();
    FUN_5f57ec30();
    FUN_5f57ec50();
    if (iVar2 != 0) {
      FUN_5f57b390();
    }
    FUN_5f57ebb0();
    iVar2 = FUN_5f57aed0();
    FUN_5f57ae90();
    FUN_5f57b130();
    puVar3 = (undefined4 *)FUN_5f57aed0();
    FUN_5f57ae90();
    FUN_5f57b130();
    puVar4 = (undefined4 *)*puVar3;
    for (uVar6 = (local_74 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = local_74 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    sVar1 = FUN_5f57ebd0();
    if (sVar1 == 0) {
      FUN_5f57ec30();
      puVar4 = (undefined4 *)FUN_5f57af10();
      puVar4 = (undefined4 *)*puVar4;
      *puVar4 = 0x34;
      puVar4[1] = local_5c;
      puVar4[2] = 0;
      *(undefined2 *)(puVar4 + 3) = 0;
      *(undefined2 *)((int)puVar4 + 0xe) = 1;
      *(undefined2 *)(puVar4 + 4) = 1;
      *(undefined2 *)((int)puVar4 + 0x12) = 0;
      puVar4[5] = 0;
      *(undefined2 *)(puVar4 + 6) = local_58;
      *(undefined2 *)((int)puVar4 + 0x1a) = uStack_56;
      *(undefined2 *)(puVar4 + 7) = 0;
      *(undefined2 *)((int)puVar4 + 0x1e) = 0;
      puVar4[8] = local_54;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      uVar5 = FUN_5f5766b0();
      local_8 = 0;
      while ((short)uVar5 == 0) {
        uVar5 = FUN_5f57ebf0();
        local_3c = uVar5;
      }
      local_8 = 0xffffffff;
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_5f57b0d0();
      FUN_5f57b390();
    }
    FUN_5f57b0d0();
    if (iVar2 != 0) {
      FUN_5f57b390();
    }
    if (local_44 != 0) {
      FUN_5f57eb90();
    }
  }
  ExceptionList = local_14;
  return 0;
}


