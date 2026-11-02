/* Module: vidcap30.exe
   Function: FUN_00465720
   Address: 00465720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00465720(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  
  *param_5 = 0;
  if (param_4 == 0) {
    if (param_1 == 32000) {
      iVar1 = __allrem(param_2,param_3,0xf,0);
      *param_5 = *(undefined4 *)(&DAT_005925cc + iVar1 * 4);
      return 0;
    }
    if (param_1 != 0xac44) {
      if (param_1 != 48000) {
        return 0x8004e000;
      }
      iVar1 = __allrem(param_2,param_3,5,0);
      *param_5 = *(undefined4 *)(&DAT_00592428 + iVar1 * 4);
      return 0;
    }
    iVar1 = __allrem(param_2,param_3,100,0);
    *param_5 = *(undefined4 *)(&DAT_0059243c + iVar1 * 4);
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


