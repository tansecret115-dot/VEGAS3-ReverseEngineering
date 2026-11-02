/* Module: sfpublish.dll
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
    puVar9 = &DAT_00441648;
    for (iVar6 = 0x44; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    DAT_00441648 = param_1;
    FUN_0041d4e0(param_1);
    if ((-1 < extraout_var) && (iVar6 = FUN_0041bd40(&DAT_0044164c,param_1,0,0), -1 < iVar6)) {
      FUN_00418d80(param_1,0,(uchar *)"Sonic Foundry Publisher");
      _DAT_004417c8 = &DAT_0043f078;
      _DAT_00441408 = &DAT_00441758;
      DAT_00441758 = 0x84;
      _DAT_004417bc = 0x300;
      DAT_00441768 = &PTR_DAT_0043f030;
      DAT_00441760 = param_1;
      _DAT_00441764 = param_1;
      DAT_0044175c = param_1;
      DAT_0044176c = 0;
      DAT_00441770 = (HANDLE)0x0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004417a4);
      DAT_004417c0 = 0;
      DAT_004417c4 = 1;
      DAT_004417cc = 0;
      _DAT_004417d4 = 0;
      DAT_004417d0 = 0;
      DAT_004417d8 = (undefined4 *)0x0;
      if (DAT_00441768 != (undefined **)0x0) {
        puVar1 = *DAT_00441768;
        ppuVar10 = DAT_00441768;
        while (puVar1 != (undefined *)0x0) {
          (*(code *)ppuVar10[8])(1);
          if (DAT_00441758 == 100) {
            ppuVar10 = ppuVar10 + 7;
          }
          else {
            ppuVar10 = ppuVar10 + 9;
          }
          puVar1 = *ppuVar10;
        }
      }
      _DAT_004413f8 = DAT_00435470;
      _DAT_004413fc = DAT_00435474;
      _DAT_00441400 = DAT_00435478;
      _DAT_00441404 = DAT_0043547c;
      DisableThreadLibraryCalls(param_1);
      FUN_00416d30(param_1,&DAT_00441654,0x104);
      auStack_104[0] = '\0';
      FUN_00416240(0,param_1,auStack_104,0x104);
      FUN_00416280(0,(LPCSTR)auStack_104);
      FUN_00416240(1,param_1,auStack_104,0x104);
      FUN_00416280(1,(LPCSTR)auStack_104);
      return 1;
    }
    uVar4 = 0;
  }
  else if (param_2 == 0) {
    DAT_00441650 = 0;
    if (DAT_00441768 != (undefined **)0x0) {
      iVar6 = (int)*DAT_00441768;
      piVar7 = (int *)DAT_00441768;
      while (iVar6 != 0) {
        piVar2 = (int *)piVar7[4];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar7[4] = 0;
        (*(code *)piVar7[8])(0);
        if (DAT_00441758 == 100) {
          piVar7 = piVar7 + 7;
        }
        else {
          piVar7 = piVar7 + 9;
        }
        iVar6 = *piVar7;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004417a4);
    puVar9 = DAT_004417d8;
    while (puVar9 != (undefined4 *)0x0) {
      (*(code *)*puVar9)(puVar9[1]);
      puVar3 = (undefined4 *)puVar9[2];
      pvVar5 = GlobalHandle(puVar9);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar9);
      GlobalFree(pvVar5);
      puVar9 = puVar3;
    }
    if ((DAT_00441770 != (HANDLE)0x0) && (DAT_004417c4 != '\0')) {
      if (DAT_004417d0 != 0) {
        uVar8 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_004417d0 + uVar8 * 4));
          uVar8 = uVar8 + 1;
        } while (uVar8 <= DAT_004417cc);
      }
      HeapDestroy(DAT_00441770);
    }
    return 1;
  }
  return uVar4;
}


