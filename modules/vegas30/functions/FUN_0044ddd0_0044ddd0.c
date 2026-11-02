/* Module: vegas30.exe
   Function: FUN_0044ddd0
   Address: 0044ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ddd0(int param_1,uint param_2)

{
  HDC hDC;
  tagRECT local_10;
  
  if ((*(uint *)(param_1 + 0x9c) >> 10 & 1) != param_2) {
    hDC = GetDC(*(HWND *)(param_1 + 0x84));
    GetWindowRect(*(HWND *)(param_1 + 0x144),&local_10);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x84),(LPPOINT)&local_10,2);
    InflateRect(&local_10,3,3);
    FUN_00468740(hDC,&local_10,3,3,0x550009);
    ReleaseDC(*(HWND *)(param_1 + 0x84),hDC);
    *(uint *)(param_1 + 0x9c) = (param_2 & 1) << 10 | *(uint *)(param_1 + 0x9c) & 0xfffffbff;
  }
  return;
}


