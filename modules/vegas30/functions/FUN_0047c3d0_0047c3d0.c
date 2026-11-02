/* Module: vegas30.exe
   Function: FUN_0047c3d0
   Address: 0047c3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c3d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  if (param_5 == 0) {
    *param_1 = param_2;
    param_1[0xf] = param_3;
    param_1[0x10] = param_4;
    param_1[10] = 0;
    return;
  }
  *param_1 = 0;
  param_1[10] = 0;
  if (param_1[8] != 0) {
    _SfList_Destroy_4(param_1[8]);
  }
  param_1[8] = 0;
  return;
}


