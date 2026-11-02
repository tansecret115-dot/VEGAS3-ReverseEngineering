/* Module: sfxpfx2.dll
   Function: DllMain
   Address: 5c8923e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllMain(HMODULE param_1,int param_2)

{
  undefined4 *pMem;
  bool bVar1;
  int3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  
                    /* 0x23e0  5  DllMain */
  pMem = DAT_5c8e93c0;
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (DAT_5c8e93c0 != (undefined4 *)0x0) {
        FUN_5c8ce6b0(DAT_5c8e93c0);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      FUN_5c8b5490(param_1,"SfExpressFX2Bld215_Fader_Class");
      FUN_5c8aecb0(param_1,"SfExpressFX2Bld215_Trackbar_Class");
      FUN_5c8aa790(param_1,"SfExpressFX2Bld215_Static_Class");
      FUN_5c8a97c0(param_1,"SfExpressFX2Bld215_Logo_Class");
      FUN_5c8a80a0(DAT_5c8e93f8);
      FUN_5c8a6450();
      DAT_5c8e93f0 = 0;
    }
    uVar2 = FUN_5c8c7d65(param_1,param_2);
    return uVar2;
  }
  FUN_5c8a6390(param_1);
  if (extraout_var < 0) {
    return 0;
  }
  FUN_5c8a7f80(DAT_5c8e93f8,&PTR_s_Presets_5c8e7010,0x30,1000);
  FUN_5c8b54b0(param_1,"SfExpressFX2Bld215_Fader_Class");
  FUN_5c8aecd0(param_1,"SfExpressFX2Bld215_Trackbar_Class");
  FUN_5c8aa7c0(param_1,"SfExpressFX2Bld215_Static_Class");
  bVar1 = FUN_5c8a97e0(param_1,"SfExpressFX2Bld215_Logo_Class");
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_5c8a97a0(5,6,5);
  }
  FUN_5c8922b0();
  uVar2 = FUN_5c8c7d65(param_1,1);
  return uVar2;
}


