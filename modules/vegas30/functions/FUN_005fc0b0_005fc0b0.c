/* Module: vegas30.exe
   Function: FUN_005fc0b0
   Address: 005fc0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fc0b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = DAT_0064b138;
  param_1[1] = DAT_00647630;
  uVar1 = *param_4;
  uVar2 = uVar1 | 0xa0000000;
  *param_4 = uVar2;
  if (((uVar1 & 0x10000000) != 0) && (DAT_00649420 == 0)) {
    *param_4 = uVar2 & 0xdfffffff;
  }
  return 0;
}


