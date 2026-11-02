/* Module: vegas30.exe
   Function: FUN_004e89e0
   Address: 004e89e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e89e0(int param_1,undefined4 param_2)

{
  WPARAM wParam;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 == 0x9d08) || (param_1 == 0x9d09)) {
    if (DAT_0064db34 != 0) {
      FUN_004043e0(DAT_0064763c,2);
      return;
    }
    local_10 = param_1;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    param_1 = 0;
    local_14 = 0;
    DAT_0064db34 = 1;
    wParam = FUN_00404310(0x30b,FUN_004e9290,&local_14,1,param_2,&param_1);
    DAT_0064db34 = 0;
    if (((wParam != 2) && (wParam != 1)) && (wParam != 0xffffffff)) {
      SendMessageA(DAT_00647624,0x111,wParam,0);
    }
  }
  return;
}


