/* Module: vegas30k.dll
   Function: FUN_01147df0
   Address: 01147df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01147df0(HWND param_1,int *param_2,int param_3)

{
  HDC hdc;
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  hdc = GetDC(param_1);
  if (*param_2 != -1) {
    PatBlt(hdc,0,*param_2,local_10.right,2,0x5a0049);
  }
  if (param_3 != -1) {
    PatBlt(hdc,0,param_3,local_10.right,2,0x5a0049);
  }
  ReleaseDC(param_1,hdc);
  *param_2 = param_3;
  return;
}


