/* Module: vegas30.exe
   Function: FUN_0052a740
   Address: 0052a740
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0052a740(int param_1,uint param_2,int param_3)

{
  POINT pt;
  BOOL BVar1;
  LRESULT LVar2;
  tagRECT local_10;
  
  GetWindowRect(*(HWND *)(param_1 + 0xdc),&local_10);
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect(&local_10,pt);
  if (BVar1 != 0) {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0xdc),0x60c,0,param_3 << 0x10 | param_2 & 0xffff);
    return LVar2;
  }
  return -1;
}


