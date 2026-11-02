/* Module: mpgmux.dll
   Function: FUN_1000d460
   Address: 1000d460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000d460(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1001b008 = GetVersion();
    iVar1 = FUN_1000d77e(1);
    if (iVar1 != 0) {
      _DAT_1001b014 = DAT_1001b008 >> 8 & 0xff;
      _DAT_1001b010 = DAT_1001b008 & 0xff;
      DAT_1001b008 = DAT_1001b008 >> 0x10;
      _DAT_1001b00c = _DAT_1001b010 * 0x100 + _DAT_1001b014;
      iVar1 = FUN_10011500();
      if (iVar1 != 0) {
        DAT_1001c688 = GetCommandLineA();
        DAT_1001af84 = FUN_10011992();
        FUN_10010292();
        FUN_10011745();
        FUN_1001168c();
        FUN_1001069f();
        DAT_1001af80 = DAT_1001af80 + 1;
        goto LAB_1000d533;
      }
      FUN_1000d7db();
    }
LAB_1000d4c0:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1001af80 < 1) goto LAB_1000d4c0;
      DAT_1001af80 = DAT_1001af80 + -1;
      if (DAT_1001b040 == 0) {
        FUN_100106dd();
      }
      FUN_1001044e();
      FUN_10011554();
      FUN_1000d7db();
    }
    else if (param_2 == 3) {
      FUN_100115ec((undefined *)0x0);
    }
LAB_1000d533:
    uVar2 = 1;
  }
  return uVar2;
}


