/* Module: extmondrv.dll
   Function: FUN_00406560
   Address: 00406560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406560(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  
  *param_5 = 0;
  if (param_4 == 0) {
    if (param_1 == 32000) {
      uVar1 = __allrem(param_2,param_3,0xf,0);
      *param_5 = *(undefined4 *)(&DAT_0044deec + (int)uVar1 * 4);
      return 0;
    }
    if (param_1 != 0xac44) {
      if (param_1 != 48000) {
        return 0x8004e000;
      }
      uVar1 = __allrem(param_2,param_3,5,0);
      *param_5 = *(undefined4 *)(&DAT_0044dd48 + (int)uVar1 * 4);
      return 0;
    }
    uVar1 = __allrem(param_2,param_3,100,0);
    *param_5 = *(undefined4 *)(&DAT_0044dd5c + (int)uVar1 * 4);
    return 0;
  }
  if (param_1 == 32000) {
    *param_5 = 0x500;
    return 0;
  }
  if (param_1 != 0xac44) {
    if (param_1 != 48000) {
      return 0x8004e000;
    }
    *param_5 = 0x780;
    return 0;
  }
  *param_5 = 0x6e4;
  return 0;
}


