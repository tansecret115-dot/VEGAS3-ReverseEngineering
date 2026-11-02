/* Module: sfppack2.dll
   Function: DllMain
   Address: 5ccd19f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllMain(HMODULE param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *pMem;
  HMODULE pHVar2;
  bool bVar3;
  int3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  HGLOBAL pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
                    /* 0x19f0  5  DllMain */
  pHVar2 = param_1;
  if (param_2 == 1) {
    FUN_5cd06420(param_1);
    if (extraout_var < 0) {
      return 0;
    }
    FUN_5cd08010(DAT_5cd67a38,&PTR_s_Presets_5cd5f010,0x5a,1000);
    FUN_5cd1fb90(pHVar2,"SfPpack2Bld217_Fader_Class");
    FUN_5cd193b0(pHVar2,"SfPpack2Bld217_Trackbar_Class");
    FUN_5cd14ee0(pHVar2,DAT_5cd67a38,"SfPpack2Bld217_Meter_Class");
    FUN_5cd0e990(pHVar2,"SfPpack2Bld217_Static_Class");
    FUN_5cd0d240(pHVar2,"SfPpack2Bld217_Envelope_Class");
    bVar3 = FUN_5cd09870(pHVar2,"SfPpack2Bld217_Logo_Class");
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      FUN_5cd09830(5,6,7);
    }
    DAT_5cd67a00 = FUN_5ccd1590();
    DAT_5cd679f8 = 0;
    iVar4 = FUN_5cd45010(DAT_5cd67a00,&DAT_5cd679fc,(int *)&param_1,1);
    if ((iVar4 < 0) || (param_1 == (HMODULE)0x0)) {
      DAT_5cd679f8 = 0;
      DAT_5cd679f8 = FUN_5cd05aa0();
    }
    else {
      DAT_5cd679f8 = 1;
    }
    uVar7 = 0xffffffff;
    pcVar9 = s_XFX_2_Plug_In_Pack_5cd5f2a8;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_5cd679b4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_5cd5f2bc;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_5cd67974;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  else if (param_2 == 0) {
    FUN_5cd1fb70(param_1,"SfPpack2Bld217_Fader_Class");
    FUN_5cd19390(pHVar2,"SfPpack2Bld217_Trackbar_Class");
    FUN_5cd14ec0(pHVar2,"SfPpack2Bld217_Meter_Class");
    FUN_5cd0e960(pHVar2,"SfPpack2Bld217_Static_Class");
    FUN_5cd0d220(pHVar2,"SfPpack2Bld217_Envelope_Class");
    FUN_5cd09850(pHVar2,"SfPpack2Bld217_Logo_Class");
    FUN_5cd08130(DAT_5cd67a38);
    pMem = DAT_5cd67a00;
    if (DAT_5cd67a00 != (undefined4 *)0x0) {
      FUN_5cd42220(DAT_5cd67a00);
      pvVar5 = GlobalHandle(pMem);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pMem);
      GlobalFree(pvVar5);
    }
    FUN_5cd064e0();
    DAT_5cd67a30 = 0;
  }
  uVar6 = FUN_5cd3b965(pHVar2,param_2);
  return uVar6;
}


