/* Module: sfppack3.dll
   Function: DllMain
   Address: 5cc319f0
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
    FUN_5cc4c960(param_1);
    if (extraout_var < 0) {
      return 0;
    }
    FUN_5cc4e550(DAT_5cc98300,&PTR_s_Presets_5cc93010,0x52,1000);
    FUN_5cc5fbc0(pHVar2,"SfPpack3Bld217_Fader_Class");
    FUN_5cc593e0(pHVar2,"SfPpack3Bld217_Trackbar_Class");
    FUN_5cc54ed0(pHVar2,"SfPpack3Bld217_Static_Class");
    FUN_5cc53780(pHVar2,"SfPpack3Bld217_Envelope_Class");
    bVar3 = FUN_5cc4fdb0(pHVar2,"SfPpack3Bld217_Logo_Class");
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      FUN_5cc4fd70(5,6,7);
    }
    DAT_5cc982c8 = FUN_5cc31590();
    DAT_5cc982c0 = 0;
    iVar4 = FUN_5cc7bb20(DAT_5cc982c8,&DAT_5cc982c4,(int *)&param_1,1);
    if ((iVar4 < 0) || (param_1 == (HMODULE)0x0)) {
      DAT_5cc982c0 = 0;
      DAT_5cc982c0 = FUN_5cc4bfe0();
    }
    else {
      DAT_5cc982c0 = 1;
    }
    uVar7 = 0xffffffff;
    pcVar9 = s_XFX_3_Plug_In_Pack_5cc9324c;
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
    pcVar10 = (char *)&DAT_5cc9827c;
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
    pcVar9 = &DAT_5cc93260;
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
    pcVar10 = (char *)&DAT_5cc9823c;
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
    FUN_5cc5fba0(param_1,"SfPpack3Bld217_Fader_Class");
    FUN_5cc593c0(pHVar2,"SfPpack3Bld217_Trackbar_Class");
    FUN_5cc54ea0(pHVar2,"SfPpack3Bld217_Static_Class");
    FUN_5cc53760(pHVar2,"SfPpack3Bld217_Envelope_Class");
    FUN_5cc4fd90(pHVar2,"SfPpack3Bld217_Logo_Class");
    FUN_5cc4e670(DAT_5cc98300);
    pMem = DAT_5cc982c8;
    if (DAT_5cc982c8 != (undefined4 *)0x0) {
      FUN_5cc78d30(DAT_5cc982c8);
      pvVar5 = GlobalHandle(pMem);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pMem);
      GlobalFree(pvVar5);
    }
    FUN_5cc4ca20();
    DAT_5cc982f8 = 0;
  }
  uVar6 = FUN_5cc72475(pHVar2,param_2);
  return uVar6;
}


