/* Module: mpegin.dll
   Function: FUN_1000e553
   Address: 1000e553
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000e553(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1001c40c = GetVersion();
    iVar1 = FUN_1000fed6(1);
    if (iVar1 != 0) {
      _DAT_1001c418 = DAT_1001c40c >> 8 & 0xff;
      _DAT_1001c414 = DAT_1001c40c & 0xff;
      DAT_1001c40c = DAT_1001c40c >> 0x10;
      _DAT_1001c410 = _DAT_1001c414 * 0x100 + _DAT_1001c418;
      iVar1 = FUN_10011265();
      if (iVar1 != 0) {
        DAT_1001da98 = GetCommandLineA();
        DAT_1001c388 = FUN_10011907();
        FUN_100113f1();
        FUN_100116ba();
        FUN_10011601();
        FUN_10011147();
        DAT_1001c384 = DAT_1001c384 + 1;
        goto LAB_1000e626;
      }
      FUN_1000ff33();
    }
LAB_1000e5b3:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1001c384 < 1) goto LAB_1000e5b3;
      DAT_1001c384 = DAT_1001c384 + -1;
      if (DAT_1001c444 == 0) {
        FUN_10011185();
      }
      FUN_100115ad();
      FUN_100112b9();
      FUN_1000ff33();
    }
    else if (param_2 == 3) {
      FUN_10011351((undefined *)0x0);
    }
LAB_1000e626:
    uVar2 = 1;
  }
  return uVar2;
}


