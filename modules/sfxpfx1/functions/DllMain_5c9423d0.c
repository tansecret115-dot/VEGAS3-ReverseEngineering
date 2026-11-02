/* Module: sfxpfx1.dll
   Function: DllMain
   Address: 5c9423d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllMain(HMODULE param_1,int param_2)

{
  undefined4 *pMem;
  bool bVar1;
  int3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  
                    /* 0x23d0  5  DllMain */
  if (param_2 != 1) {
    if (param_2 == 0) {
      FUN_5c963b60(param_1,"SfExpressFX1Bld216_Fader_Class");
      FUN_5c95d380(param_1,"SfExpressFX1Bld216_Trackbar_Class");
      FUN_5c958e60(param_1,"SfExpressFX1Bld216_Static_Class");
      FUN_5c957e90(param_1,"SfExpressFX1Bld216_Logo_Class");
      pMem = DAT_5c998768;
      if (DAT_5c998768 != (undefined4 *)0x0) {
        FUN_5c97cd80(DAT_5c998768);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      FUN_5c956770(DAT_5c9987a0);
      FUN_5c954b20();
      DAT_5c998798 = 0;
    }
    uVar2 = FUN_5c976435(param_1,param_2);
    return uVar2;
  }
  FUN_5c954a60(param_1);
  if (extraout_var < 0) {
    return 0;
  }
  FUN_5c956650(DAT_5c9987a0,&PTR_s_Presets_5c996010,0x38,1000);
  FUN_5c963b80(param_1,"SfExpressFX1Bld216_Fader_Class");
  FUN_5c95d3a0(param_1,"SfExpressFX1Bld216_Trackbar_Class");
  FUN_5c958e90(param_1,"SfExpressFX1Bld216_Static_Class");
  bVar1 = FUN_5c957eb0(param_1,"SfExpressFX1Bld216_Logo_Class");
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_5c957e70(5,6,5);
  }
  FUN_5c9422a0();
  uVar2 = FUN_5c976435(param_1,1);
  return uVar2;
}


