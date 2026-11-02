/* Module: vidcap30.exe
   Function: FUN_00456a70
   Address: 00456a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00456a70(HWND param_1,int param_2,uint param_3,int param_4)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x53) {
    FUN_0041f690(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_005b5eb0,0);
    return 1;
  }
  if (param_2 != 0x110) {
    if (param_2 != 0x111) {
      return 0;
    }
    FUN_00456b20(param_1,param_3 & 0xffff,param_3 >> 0x10,param_4,LVar1);
    return 1;
  }
  SetWindowLongA(param_1,8,param_4);
  _SfWndCenter_16(param_1,0,0,0x8001);
  SetDlgItemTextA(param_1,0x4f3,(LPCSTR)(param_4 + 0x104));
  return 1;
}


