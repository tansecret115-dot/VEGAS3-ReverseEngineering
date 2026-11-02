/* Module: vegas30k.dll
   Function: FUN_01040800
   Address: 01040800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01040800(int param_1,int *param_2,int param_3)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(param_1 + 0x14);
  if (hWnd == (HWND)0x0) {
    return;
  }
  if (param_3 == 0) {
    ShowWindow(hWnd,0);
    return;
  }
  SetWindowPos(hWnd,(HWND)0x0,*param_2,param_2[1],0,0,5);
  ShowWindow(*(HWND *)(param_1 + 0x14),5);
  return;
}


