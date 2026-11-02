/* Module: vidpcore.dll
   Function: FUN_5de06650
   Address: 5de06650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de06650(HMODULE param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  HMODULE pHVar3;
  LPCVOID pMem;
  HGLOBAL pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  char local_114 [4];
  char local_110 [4];
  char local_10c [4];
  char local_108;
  undefined1 local_104;
  undefined4 local_103;
  
  pMem = DAT_5df42ea0;
  if (param_2 == 1) {
    FUN_5dea31a0(param_1);
    DAT_5df42ea0 = (LPCVOID)FUN_5de062c0();
    local_110[0] = s_RICHED20_DLL_5df185c0[4];
    local_110[1] = s_RICHED20_DLL_5df185c0[5];
    local_110[2] = s_RICHED20_DLL_5df185c0[6];
    local_110[3] = s_RICHED20_DLL_5df185c0[7];
    local_114[0] = s_RICHED20_DLL_5df185c0[0];
    local_114[1] = s_RICHED20_DLL_5df185c0[1];
    local_114[2] = s_RICHED20_DLL_5df185c0[2];
    local_114[3] = s_RICHED20_DLL_5df185c0[3];
    _DAT_5df42774 = 0;
    local_108 = s_RICHED20_DLL_5df185c0[0xc];
    local_104 = 0;
    puVar8 = &local_103;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_10c[0] = s_RICHED20_DLL_5df185c0[8];
    local_10c[1] = s_RICHED20_DLL_5df185c0[9];
    local_10c[2] = s_RICHED20_DLL_5df185c0[10];
    local_10c[3] = s_RICHED20_DLL_5df185c0[0xb];
    _DAT_5df42770 = param_1;
    DAT_5df42768 = param_1;
    DAT_5df42778 = DAT_5df42ed8;
    FUN_5deb3b10(0,param_1,&local_104,0x104);
    FUN_5deb3b50(0,&local_104);
    FUN_5deb3b10(1,DAT_5df42768,&local_104,0x104);
    FUN_5deb3b50(1,&local_104);
    LoadLibraryA(local_114);
    _DAT_5df427f0 = &DAT_5df3c968;
    _DAT_5df42760 = &DAT_5df42780;
    DAT_5df42780 = 0x84;
    _DAT_5df427e4 = 0x300;
    FUN_5de072a0(&DAT_5df42780,&PTR_DAT_5df3c028,param_1);
    pHVar3 = DAT_5df42768;
    FUN_5deb3660(DAT_5df42768,"Vidpcore_20_Trackbar_Class");
    FUN_5deaf060(pHVar3,"Vidpcore_20_Spinner_Class");
    FUN_5deabec0(pHVar3,"Vidpcore_20_ColorPick_Class");
    FUN_5df07a20(pHVar3,"Vidpcore_20_Placement_Class");
    iVar5 = FUN_5dea43e0(pHVar3,"Vidpcore_20_Logo_Class");
    if (iVar5 != 0) {
      FUN_5dea43a0(4,5,4);
    }
    DisableThreadLibraryCalls(param_1);
  }
  else if (param_2 == 0) {
    if (DAT_5df42ea0 != (LPCVOID)0x0) {
      FUN_5df0a060();
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
    if (DAT_5df42790 != (int *)0x0) {
      iVar5 = *DAT_5df42790;
      piVar6 = DAT_5df42790;
      while (iVar5 != 0) {
        piVar1 = (int *)piVar6[4];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar6[4] = 0;
        (*(code *)piVar6[8])(0);
        if (DAT_5df42780 == 100) {
          piVar6 = piVar6 + 7;
        }
        else {
          piVar6 = piVar6 + 9;
        }
        iVar5 = *piVar6;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5df4279c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5df427b4);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5df427cc);
    puVar8 = DAT_5df42800;
    while (puVar8 != (undefined4 *)0x0) {
      (*(code *)*puVar8)(puVar8[1]);
      puVar2 = (undefined4 *)puVar8[2];
      pvVar4 = GlobalHandle(puVar8);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar8);
      GlobalFree(pvVar4);
      puVar8 = puVar2;
    }
    if ((DAT_5df42798 != (HANDLE)0x0) && (DAT_5df427ec != '\0')) {
      if (DAT_5df427f8 != 0) {
        uVar7 = 0;
        do {
          HeapDestroy(*(HANDLE *)(DAT_5df427f8 + uVar7 * 4));
          uVar7 = uVar7 + 1;
        } while (uVar7 <= DAT_5df427f4);
      }
      HeapDestroy(DAT_5df42798);
    }
    pHVar3 = DAT_5df42768;
    FUN_5deb3640(DAT_5df42768,"Vidpcore_20_Trackbar_Class");
    FUN_5deaf030(pHVar3,"Vidpcore_20_Spinner_Class");
    FUN_5deabea0(pHVar3,"Vidpcore_20_ColorPick_Class");
    FUN_5df07a00(pHVar3,"Vidpcore_20_Placement_Class");
    FUN_5dea43c0(pHVar3,"Vidpcore_20_Logo_Class");
    FUN_5dea3260(param_1);
    return 1;
  }
  return 1;
}


