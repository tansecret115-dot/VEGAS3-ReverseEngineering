/* Module: vegas30.exe
   Function: FUN_004e23e0
   Address: 004e23e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e23e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  
  if (param_1 != 0) {
    if ((param_5 < 1) && (param_5 < 0)) {
      bVar1 = param_4 != 0;
      param_4 = -param_4;
      param_5 = -(param_5 + (uint)bVar1);
    }
    if (param_6 == 0) {
      bVar1 = param_4 != 0;
      param_4 = -param_4;
      param_5 = -(param_5 + (uint)bVar1);
    }
    FUN_00453340(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),param_4,
                 param_5,1);
  }
  return;
}


