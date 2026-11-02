/* Module: vegas30k.dll
   Function: FUN_01147960
   Address: 01147960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01147960(HWND param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  pt.y = param_3;
  pt.x = param_2;
  PtInRect(&local_10,pt);
  return;
}


