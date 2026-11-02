/* Module: sfpagepeel.dll
   Function: FUN_00401770
   Address: 00401770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401770(HMODULE param_1,int param_2)

{
  undefined *puVar1;
  HINSTANCE pHVar2;
  bool bVar3;
  undefined3 extraout_var;
  HGLOBAL pvVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  uchar local_104;
  undefined4 local_103;
  
  puVar7 = DAT_0047d9b8;
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (DAT_0047d9b8 != (undefined4 *)0x0) {
        FUN_00461ce0(DAT_0047d9b8);
        pvVar4 = GlobalHandle(puVar7);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(puVar7);
        GlobalFree(pvVar4);
      }
      FUN_00401fd0(&DAT_0047d4a0);
      pHVar2 = DAT_0047d488;
      FUN_00423610(DAT_0047d488,"SFPAGEPEEL_20_Trackbar_Class");
      FUN_0041f000(pHVar2,"SFPAGEPEEL_20_Spinner_Class");
      FUN_0041be70(pHVar2,"SFPAGEPEEL_20_ColorPick_Class");
      FUN_00414390(pHVar2,"SFPAGEPEEL_20_Logo_Class");
      FUN_00413230();
    }
    return 1;
  }
  FUN_00413170(param_1);
  DAT_0047d9b8 = FUN_00401490();
  _DAT_0047d494 = 0;
  local_104 = '\0';
  puVar7 = &local_103;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  _DAT_0047d490 = param_1;
  DAT_0047d488 = param_1;
  DAT_0047d498 = DAT_0047d9f0;
  FUN_00423ae0(0,param_1,&local_104,0x104);
  FUN_00423b20(0,(LPCSTR)&local_104);
  FUN_00423ae0(1,DAT_0047d488,&local_104,0x104);
  FUN_00423b20(1,(LPCSTR)&local_104);
  pHVar2 = DAT_0047d488;
  FUN_00423630(DAT_0047d488,"SFPAGEPEEL_20_Trackbar_Class");
  FUN_0041f030(pHVar2,"SFPAGEPEEL_20_Spinner_Class");
  FUN_0041be90(pHVar2,"SFPAGEPEEL_20_ColorPick_Class");
  bVar3 = FUN_004143b0(pHVar2,"SFPAGEPEEL_20_Logo_Class");
  if (CONCAT31(extraout_var,bVar3) != 0) {
    FUN_00414370(0xc9,5,0xc9);
  }
  _DAT_0047d510 = &DAT_0047c108;
  _DAT_0047d480 = &DAT_0047d4a0;
  DAT_0047d4a0 = 0x84;
  _DAT_0047d504 = 0x300;
  DAT_0047d4b0 = &PTR_DAT_0047c010;
  DAT_0047d4a8 = param_1;
  _DAT_0047d4ac = param_1;
  DAT_0047d4a4 = param_1;
  DAT_0047d4b4 = 0;
  _DAT_0047d4b8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0047d4bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0047d4d4);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0047d4ec);
  DAT_0047d508 = 0;
  DAT_0047d50c = 1;
  _DAT_0047d514 = 0;
  _DAT_0047d51c = 0;
  _DAT_0047d518 = 0;
  DAT_0047d520 = 0;
  if (DAT_0047d4b0 != (undefined **)0x0) {
    puVar1 = *DAT_0047d4b0;
    ppuVar6 = DAT_0047d4b0;
    while (puVar1 != (undefined *)0x0) {
      (*(code *)ppuVar6[8])(1);
      if (DAT_0047d4a0 == 100) {
        ppuVar6 = ppuVar6 + 7;
      }
      else {
        ppuVar6 = ppuVar6 + 9;
      }
      puVar1 = *ppuVar6;
    }
  }
  DisableThreadLibraryCalls(param_1);
  return 1;
}


