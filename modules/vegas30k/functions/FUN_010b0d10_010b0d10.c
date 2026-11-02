/* Module: vegas30k.dll
   Function: FUN_010b0d10
   Address: 010b0d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010b0d10(int param_1,undefined4 param_2,undefined4 param_3,int param_4,byte param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0x10;
  if ((param_5 & 0x10) == 0) {
    if (param_4 < 0) {
      param_4 = -param_4;
      uVar1 = 0xf;
    }
    else {
      uVar1 = 0xe;
    }
  }
  else if (param_4 < 0) {
    param_4 = -param_4;
    uVar1 = 0x11;
  }
  FUN_010b0da0(param_1,uVar1,(double)param_4 * _DAT_01206440 * _DAT_011e2af0);
  FUN_010af800(param_1,1);
  (**(code **)(param_1 + 0x29c))
            (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),5,
             param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
  return;
}


