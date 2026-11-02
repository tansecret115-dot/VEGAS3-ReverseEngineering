/* Module: vfplugs.dll
   Function: FUN_004023a0
   Address: 004023a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004023a0(HMODULE param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  HINSTANCE pHVar3;
  bool bVar4;
  undefined3 extraout_var;
  HGLOBAL pvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  char local_11c [4];
  char local_118 [4];
  char local_114 [4];
  char local_110;
  INITCOMMONCONTROLSEX local_10c;
  uchar local_104;
  undefined4 local_103;
  
  puVar9 = DAT_00494a40;
  if (param_2 == 1) {
    local_11c = (char  [4])s_RICHED20_DLL_00486d18._0_4_;
    local_118 = (char  [4])s_RICHED20_DLL_00486d18._4_4_;
    local_114 = (char  [4])s_RICHED20_DLL_00486d18._8_4_;
    local_110 = s_RICHED20_DLL_00486d18[0xc];
    FUN_00418190(param_1);
    DAT_00494a40 = FUN_004021f0();
    _DAT_0049451c = 0;
    local_104 = '\0';
    puVar9 = &local_103;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    _DAT_00494518 = param_1;
    DAT_00494510 = param_1;
    DAT_00494520 = DAT_00494a78;
    FUN_00428b00(0,param_1,&local_104,0x104);
    FUN_00428b40(0,(LPCSTR)&local_104);
    FUN_00428b00(1,DAT_00494510,&local_104,0x104);
    FUN_00428b40(1,(LPCSTR)&local_104);
    local_10c.dwSize = 0;
    local_10c.dwICC = 0;
    InitCommonControlsEx(&local_10c);
    LoadLibraryA(local_11c);
    pHVar3 = DAT_00494510;
    FUN_00428650(DAT_00494510,"VFPlugs_30_Trackbar_Class");
    FUN_00424050(pHVar3,"VFPlugs_30_Spinner_Class");
    FUN_00420eb0(pHVar3,"VFPlugs_30_ColorPick_Class");
    FUN_00474ba0(pHVar3,"VFPlugs_30_Placement_Class");
    FUN_004710a0(pHVar3,"VFPlugs_30_DropColor_Class");
    bVar4 = FUN_004193d0(pHVar3,"VFPlugs_30_Logo_Class");
    if (CONCAT31(extraout_var,bVar4) != 0) {
      FUN_00419390(0x72,5,0x72);
    }
    _DAT_00494598 = &DAT_00493108;
    _DAT_00494508 = &DAT_00494528;
    DAT_00494528 = 0x84;
    _DAT_0049458c = 0x300;
    FUN_00402dd0(&DAT_00494528,0x493010,(int)param_1);
    DisableThreadLibraryCalls(param_1);
  }
  else if (param_2 == 0) {
    if (DAT_00494a40 != (undefined4 *)0x0) {
      FUN_00476020(DAT_00494a40);
      pvVar5 = GlobalHandle(puVar9);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar9);
      GlobalFree(pvVar5);
    }
    if (DAT_00494538 != (int *)0x0) {
      iVar6 = *DAT_00494538;
      piVar7 = DAT_00494538;
      while (iVar6 != 0) {
        piVar1 = (int *)piVar7[4];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar7[4] = 0;
        (*(code *)piVar7[8])(0);
        if (DAT_00494528 == 100) {
          piVar7 = piVar7 + 7;
        }
        else {
          piVar7 = piVar7 + 9;
        }
        iVar6 = *piVar7;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00494544);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0049455c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00494574);
    puVar9 = DAT_004945a8;
    while (puVar9 != (undefined4 *)0x0) {
      (*(code *)*puVar9)(puVar9[1]);
      puVar2 = (undefined4 *)puVar9[2];
      pvVar5 = GlobalHandle(puVar9);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(puVar9);
      GlobalFree(pvVar5);
      puVar9 = puVar2;
    }
    if ((DAT_00494540 != (HANDLE)0x0) && (DAT_00494594 != '\0')) {
      if (DAT_004945a0 != 0) {
        uVar8 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_004945a0 + uVar8 * 4));
          uVar8 = uVar8 + 1;
        } while (uVar8 <= DAT_0049459c);
      }
      HeapDestroy(DAT_00494540);
    }
    pHVar3 = DAT_00494510;
    FUN_00428630(DAT_00494510,"VFPlugs_30_Trackbar_Class");
    FUN_00424020(pHVar3,"VFPlugs_30_Spinner_Class");
    FUN_00420e90(pHVar3,"VFPlugs_30_ColorPick_Class");
    FUN_00474b80(pHVar3,"VFPlugs_30_Placement_Class");
    FUN_00471080(pHVar3,"VFPlugs_30_DropColor_Class");
    FUN_004193b0(pHVar3,"VFPlugs_30_Logo_Class");
    FUN_00418250();
    return 1;
  }
  return 1;
}


