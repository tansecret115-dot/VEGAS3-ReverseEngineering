/* Module: vegas30.exe
   Function: FUN_005fc110
   Address: 005fc110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fc110(int *param_1,int param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  
  GetCurrentThreadId();
  uVar1 = 0x8004e001;
  if (*param_1 != 0) {
    if (((*param_4 & 0x10000000) != 0) && ((*param_4 & 0x800000) == 0)) {
      param_1[6] = 0;
      param_1[4] = param_2;
      param_1[5] = param_3;
      param_1[7] = 0;
      param_1[8] = 0;
      PostMessageA(DAT_00647624,0x619,*param_4,(LPARAM)param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}


