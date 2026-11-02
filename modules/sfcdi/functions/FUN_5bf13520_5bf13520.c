/* Module: sfcdi.dll
   Function: FUN_5bf13520
   Address: 5bf13520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf13520(HWND param_1,int param_2,uint param_3,undefined4 *param_4)

{
  LONG LVar1;
  HWND pHVar2;
  uint nResult;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    if ((param_3 == 0x47c) && (param_4[2] == -3)) {
      PostMessageA(param_1,0x111,1,0);
    }
  }
  else {
    if (param_2 == 0x110) {
      FUN_5bf2fd50(param_1,(HWND)0x0,(int *)0x0,0x8001);
      SetWindowLongA(param_1,8,(LONG)param_4);
      pHVar2 = GetDlgItem(param_1,0x47c);
      FUN_5bf13200(pHVar2,(uint *)*param_4);
      param_4[1] = 0;
      FUN_5bf13400(param_1,(int)param_4,0x47c);
      return 1;
    }
    if (((param_2 == 0x111) && (nResult = param_3 & 0xffff, nResult != 0)) && (nResult < 3)) {
      FUN_5bf134a0(param_1,LVar1,0x47c);
      EndDialog(param_1,nResult);
      return 1;
    }
  }
  return 0;
}


