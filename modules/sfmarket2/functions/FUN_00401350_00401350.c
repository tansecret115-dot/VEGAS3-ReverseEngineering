/* Module: sfmarket2.dll
   Function: FUN_00401350
   Address: 00401350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401350(HMODULE param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int3 extraout_var;
  HGLOBAL pvVar5;
  int iVar6;
  undefined **ppuVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar4 = 1;
  if (param_2 == 1) {
    puVar10 = &DAT_004a9c90;
    for (iVar6 = 0x44; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    DAT_004a9c90 = param_1;
    FUN_00426fd0(param_1);
    if ((-1 < extraout_var) && (iVar6 = FUN_00422a20(&DAT_004a9c94,param_1,0,0), -1 < iVar6)) {
      FUN_00424a80(param_1,0,(uchar *)"Sonic Foundry");
      _DAT_004a9c78 = &DAT_004a7078;
      _DAT_004a99c8 = &DAT_004a9c08;
      DAT_004a9c08 = 0x84;
      _DAT_004a9c6c = 0x300;
      DAT_004a9c18 = &PTR_DAT_004a7030;
      DAT_004a9c10 = param_1;
      _DAT_004a9c14 = param_1;
      DAT_004a9c0c = param_1;
      DAT_004a9c1c = 0;
      DAT_004a9c20 = (HANDLE)0x0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c24);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c3c);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c54);
      DAT_004a9c70 = 0;
      DAT_004a9c74 = 1;
      DAT_004a9c7c = 0;
      _DAT_004a9c84 = 0;
      DAT_004a9c80 = 0;
      DAT_004a9c88 = (undefined4 *)0x0;
      if (DAT_004a9c18 != (undefined **)0x0) {
        puVar1 = *DAT_004a9c18;
        ppuVar7 = DAT_004a9c18;
        while (puVar1 != (undefined *)0x0) {
          (*(code *)ppuVar7[8])(1);
          if (DAT_004a9c08 == 100) {
            ppuVar7 = ppuVar7 + 7;
          }
          else {
            ppuVar7 = ppuVar7 + 9;
          }
          puVar1 = *ppuVar7;
        }
      }
      _DAT_004a99b8 = DAT_004954e0;
      _DAT_004a99bc = DAT_004954e4;
      _DAT_004a99c0 = DAT_004954e8;
      _DAT_004a99c4 = DAT_004954ec;
      DAT_004a9c10 = (HMODULE)FUN_00421810(DAT_004a9c94);
      DisableThreadLibraryCalls(param_1);
      FUN_00420820(param_1,&DAT_004a9c9c,0x104);
      return 1;
    }
    uVar4 = 0;
  }
  else if (param_2 == 0) {
    DAT_004a9c98 = 0;
    if (DAT_004a9c18 != (undefined **)0x0) {
      iVar6 = (int)*DAT_004a9c18;
      piVar8 = (int *)DAT_004a9c18;
      while (iVar6 != 0) {
        piVar2 = (int *)piVar8[4];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar8[4] = 0;
        (*(code *)piVar8[8])(0);
        if (DAT_004a9c08 == 100) {
          piVar8 = piVar8 + 7;
        }
        else {
          piVar8 = piVar8 + 9;
        }
        iVar6 = *piVar8;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c24);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c3c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c54);
    puVar10 = DAT_004a9c88;
    while (puVar10 != (undefined4 *)0x0) {
      (*(code *)*puVar10)(puVar10[1]);
      puVar3 = (undefined4 *)puVar10[2];
      pvVar5 = GlobalHandle(puVar10);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar10);
      GlobalFree(pvVar5);
      puVar10 = puVar3;
    }
    if ((DAT_004a9c20 != (HANDLE)0x0) && (DAT_004a9c74 != '\0')) {
      if (DAT_004a9c80 != 0) {
        uVar9 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_004a9c80 + uVar9 * 4));
          uVar9 = uVar9 + 1;
        } while (uVar9 <= DAT_004a9c7c);
      }
      HeapDestroy(DAT_004a9c20);
    }
    return 1;
  }
  return uVar4;
}


