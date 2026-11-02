/* Module: sfppack1.dll
   Function: DllMain
   Address: 5cdb1b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllMain(HMODULE param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *pMem;
  int iVar2;
  bool bVar3;
  int3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  undefined4 uVar5;
  HGLOBAL pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
                    /* 0x1b60  5  DllMain */
  iVar2 = param_2;
  if (param_2 == 1) {
    FUN_5cddb110(param_1);
    if (extraout_var < 0) {
      return 0;
    }
    FUN_5cddcd00(DAT_5ce23828,&PTR_s_Presets_5ce1f010,0xbb,1000);
    FUN_5cdea230(param_1,"SfPpack1Bld222_Fader_Class");
    FUN_5cde3a50(param_1,"SfPpack1Bld222_Trackbar_Class");
    FUN_5cddf540(param_1,"SfPpack1Bld222_Static_Class");
    bVar3 = FUN_5cdde560(param_1,"SfPpack1Bld222_Logo_Class");
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      FUN_5cdde520(5,6,7);
    }
    DAT_5ce237f0 = FUN_5cdb16b0();
    DAT_5ce237e8 = 0;
    iVar4 = FUN_5ce06190(DAT_5ce237f0,&DAT_5ce237ec,&param_2,1);
    if ((iVar4 < 0) || (param_2 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    uVar7 = 0xffffffff;
    pcVar9 = s_XFX_1_Plug_In_Pack_5ce1f3f4;
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
    pcVar10 = (char *)&DAT_5ce237a4;
    DAT_5ce237e8 = iVar4;
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
    pcVar9 = &DAT_5ce1f408;
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
    pcVar10 = (char *)&DAT_5ce23764;
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
    if (iVar4 == 0) {
      DAT_5ce237e8 = FUN_5cdda790();
      uVar5 = FUN_5cdfcae5(param_1,1);
      return uVar5;
    }
  }
  else if (param_2 == 0) {
    FUN_5cdea210(param_1,"SfPpack1Bld222_Fader_Class");
    FUN_5cde3a30(param_1,"SfPpack1Bld222_Trackbar_Class");
    FUN_5cddf510(param_1,"SfPpack1Bld222_Static_Class");
    FUN_5cdde540(param_1,"SfPpack1Bld222_Logo_Class");
    FUN_5cddce20(DAT_5ce23828);
    pMem = DAT_5ce237f0;
    if (DAT_5ce237f0 != (undefined4 *)0x0) {
      FUN_5ce033a0(DAT_5ce237f0);
      pvVar6 = GlobalHandle(pMem);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pMem);
      GlobalFree(pvVar6);
    }
    FUN_5cddb1d0();
    DAT_5ce23820 = 0;
  }
  uVar5 = FUN_5cdfcae5(param_1,iVar2);
  return uVar5;
}


