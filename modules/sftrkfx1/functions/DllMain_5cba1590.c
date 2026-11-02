/* Module: sftrkfx1.dll
   Function: DllMain
   Address: 5cba1590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllMain(HMODULE param_1,int param_2)

{
  undefined4 *pMem;
  bool bVar1;
  int3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  
                    /* 0x1590  5  DllMain */
  if (param_2 != 1) {
    if (param_2 == 0) {
      FUN_5cbd4bb0(param_1,"SfTrkFX1Bld182_Fader_Class");
      FUN_5cbce320(param_1,"SfTrkFX1Bld182_Trackbar_Class");
      FUN_5cbc9e50(param_1,"SfTrkFX1Bld182_Meter_Class");
      FUN_5cbc38f0(param_1,"SfTrkFX1Bld182_Static_Class");
      FUN_5cbc2920(param_1,"SfTrkFX1Bld182_Logo_Class");
      FUN_5cbb07c0(param_1,"TrackEQ_TabControl_Class");
      FUN_5cbac0f0(param_1,"TrackEQ_Wnd_Class");
      pMem = DAT_5cc11484;
      if (DAT_5cc11484 != (undefined4 *)0x0) {
        FUN_5cbf6850(DAT_5cc11484);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      FUN_5cbc17c0();
      DAT_5cc114f0 = 0;
    }
    uVar2 = FUN_5cbeff05(param_1,param_2);
    return uVar2;
  }
  FUN_5cbc1700(param_1);
  if (extraout_var < 0) {
    return 0;
  }
  FUN_5cbd4bd0(param_1,"SfTrkFX1Bld182_Fader_Class");
  FUN_5cbce340(param_1,"SfTrkFX1Bld182_Trackbar_Class");
  FUN_5cbc9e70(param_1,DAT_5cc114f8,"SfTrkFX1Bld182_Meter_Class");
  FUN_5cbc3920(param_1,"SfTrkFX1Bld182_Static_Class");
  bVar1 = FUN_5cbc2940(param_1,"SfTrkFX1Bld182_Logo_Class");
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_5cbc2900(5,6,7);
  }
  FUN_5cbb0730(param_1,"TrackEQ_TabControl_Class");
  FUN_5cbac060(param_1,"TrackEQ_Wnd_Class");
  FUN_5cba1000();
  uVar2 = FUN_5cbeff05(param_1,1);
  return uVar2;
}


