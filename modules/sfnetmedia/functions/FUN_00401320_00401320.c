/* Module: sfnetmedia.dll
   Function: FUN_00401320
   Address: 00401320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401320(HMODULE param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int3 extraout_var;
  HGLOBAL pvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  uchar auStack_104 [260];
  
  uVar4 = 1;
  if (param_2 == 1) {
    puVar9 = &DAT_00441728;
    for (iVar6 = 0x44; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    DAT_00441728 = param_1;
    FUN_00419e70(param_1);
    if ((-1 < extraout_var) && (iVar6 = FUN_004186d0(&DAT_0044172c,param_1,0,0), -1 < iVar6)) {
      FUN_00415710(param_1,0,(uchar *)"Sonic Foundry Download Media");
      _DAT_004418a8 = &DAT_0043f078;
      _DAT_004414e8 = &DAT_00441838;
      DAT_00441838 = 0x84;
      _DAT_0044189c = 0x300;
      DAT_00441848 = &PTR_DAT_0043f030;
      DAT_00441840 = param_1;
      _DAT_00441844 = param_1;
      DAT_0044183c = param_1;
      DAT_0044184c = 0;
      DAT_00441850 = (HANDLE)0x0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00441854);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00441884);
      DAT_004418a0 = 0;
      DAT_004418a4 = 1;
      DAT_004418ac = 0;
      _DAT_004418b4 = 0;
      DAT_004418b0 = 0;
      DAT_004418b8 = (undefined4 *)0x0;
      if (DAT_00441848 != (undefined **)0x0) {
        puVar1 = *DAT_00441848;
        ppuVar10 = DAT_00441848;
        while (puVar1 != (undefined *)0x0) {
          (*(code *)ppuVar10[8])(1);
          if (DAT_00441838 == 100) {
            ppuVar10 = ppuVar10 + 7;
          }
          else {
            ppuVar10 = ppuVar10 + 9;
          }
          puVar1 = *ppuVar10;
        }
      }
      _DAT_004414d8 = DAT_004354b0;
      _DAT_004414dc = DAT_004354b4;
      _DAT_004414e0 = DAT_004354b8;
      _DAT_004414e4 = DAT_004354bc;
      DisableThreadLibraryCalls(param_1);
      FUN_004136c0(param_1,&DAT_00441734,0x104);
      auStack_104[0] = '\0';
      FUN_00412bd0(0,param_1,auStack_104,0x104);
      FUN_00412c10(0,(LPCSTR)auStack_104);
      FUN_00412bd0(1,param_1,auStack_104,0x104);
      FUN_00412c10(1,(LPCSTR)auStack_104);
      return 1;
    }
    uVar4 = 0;
  }
  else if (param_2 == 0) {
    DAT_00441730 = 0;
    if (DAT_00441848 != (undefined **)0x0) {
      iVar6 = (int)*DAT_00441848;
      piVar7 = (int *)DAT_00441848;
      while (iVar6 != 0) {
        piVar2 = (int *)piVar7[4];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar7[4] = 0;
        (*(code *)piVar7[8])(0);
        if (DAT_00441838 == 100) {
          piVar7 = piVar7 + 7;
        }
        else {
          piVar7 = piVar7 + 9;
        }
        iVar6 = *piVar7;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00441854);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00441884);
    puVar9 = DAT_004418b8;
    while (puVar9 != (undefined4 *)0x0) {
      (*(code *)*puVar9)(puVar9[1]);
      puVar3 = (undefined4 *)puVar9[2];
      pvVar5 = GlobalHandle(puVar9);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar9);
      GlobalFree(pvVar5);
      puVar9 = puVar3;
    }
    if ((DAT_00441850 != (HANDLE)0x0) && (DAT_004418a4 != '\0')) {
      if (DAT_004418b0 != 0) {
        uVar8 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_004418b0 + uVar8 * 4));
          uVar8 = uVar8 + 1;
        } while (uVar8 <= DAT_004418ac);
      }
      HeapDestroy(DAT_00441850);
    }
    return 1;
  }
  return uVar4;
}


