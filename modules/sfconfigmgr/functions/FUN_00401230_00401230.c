/* Module: sfconfigmgr.dll
   Function: FUN_00401230
   Address: 00401230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401230(HMODULE param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int3 extraout_var;
  HGLOBAL pvVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (param_2 == 1) {
    puVar9 = &DAT_00422ec0;
    for (iVar6 = 0x43; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    DAT_00422ec0 = param_1;
    bVar4 = FUN_0040a810(param_1);
    iVar6 = CONCAT31(extraout_var,bVar4);
    if ((-1 < extraout_var) && (iVar6 = FUN_00409070(&DAT_00422ec4,param_1,0,0), -1 < iVar6)) {
      FUN_004060b0(param_1,0,(uchar *)"SfConfigMgr");
    }
    _DAT_00423040 = &DAT_00422068;
    _DAT_00422eb8 = &DAT_00422fd0;
    DAT_00422fd0 = 0x84;
    _DAT_00423034 = 0x300;
    DAT_00422fe0 = &PTR_DAT_00422020;
    _DAT_00422fd8 = param_1;
    _DAT_00422fdc = param_1;
    DAT_00422fd4 = param_1;
    DAT_00422fe4 = 0;
    DAT_00422fe8 = (HANDLE)0x0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00422fec);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00423004);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0042301c);
    _DAT_00423038 = 0;
    DAT_0042303c = '\x01';
    DAT_00423044 = 0;
    _DAT_0042304c = 0;
    DAT_00423048 = 0;
    DAT_00423050 = (undefined4 *)0x0;
    if (DAT_00422fe0 != (undefined **)0x0) {
      puVar1 = *DAT_00422fe0;
      ppuVar7 = DAT_00422fe0;
      while (puVar1 != (undefined *)0x0) {
        (*(code *)ppuVar7[8])(1);
        if (DAT_00422fd0 == 100) {
          ppuVar7 = ppuVar7 + 7;
        }
        else {
          ppuVar7 = ppuVar7 + 9;
        }
        puVar1 = *ppuVar7;
      }
    }
    _DAT_00422ea8 = DAT_0041a280;
    _DAT_00422eac = DAT_0041a284;
    _DAT_00422eb0 = DAT_0041a288;
    _DAT_00422eb4 = DAT_0041a28c;
    DisableThreadLibraryCalls(param_1);
    FUN_00404060(param_1,&DAT_00422ec8,0x104);
    if (iVar6 < 0) {
      return 0;
    }
  }
  else if (param_2 == 0) {
    if (DAT_00422fe0 != (undefined **)0x0) {
      puVar1 = *DAT_00422fe0;
      ppuVar7 = DAT_00422fe0;
      while (puVar1 != (undefined *)0x0) {
        piVar2 = (int *)ppuVar7[4];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        ppuVar7[4] = (undefined *)0x0;
        (*(code *)ppuVar7[8])(0);
        if (DAT_00422fd0 == 100) {
          ppuVar7 = ppuVar7 + 7;
        }
        else {
          ppuVar7 = ppuVar7 + 9;
        }
        puVar1 = *ppuVar7;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00422fec);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00423004);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0042301c);
    puVar9 = DAT_00423050;
    while (puVar9 != (undefined4 *)0x0) {
      (*(code *)*puVar9)(puVar9[1]);
      puVar3 = (undefined4 *)puVar9[2];
      pvVar5 = GlobalHandle(puVar9);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar9);
      GlobalFree(pvVar5);
      puVar9 = puVar3;
    }
    if ((DAT_00422fe8 != (HANDLE)0x0) && (DAT_0042303c != '\0')) {
      if (DAT_00423048 != 0) {
        uVar8 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_00423048 + uVar8 * 4));
          uVar8 = uVar8 + 1;
        } while (uVar8 <= DAT_00423044);
      }
      HeapDestroy(DAT_00422fe8);
    }
  }
  return 1;
}


