/* Module: vegas30.exe
   Function: FUN_00524e50
   Address: 00524e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524e50(int param_1)

{
  HDC hDC;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0x18c) & 2) == 0) {
    hDC = GetDC(*(HWND *)(param_1 + 0xd8));
    GetClientRect(*(HWND *)(param_1 + 0xd8),&local_10);
    FUN_00468740(hDC,&local_10,2,2,0x550009);
    ReleaseDC(*(HWND *)(param_1 + 0xd8),hDC);
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) | 2;
  }
  return;
}


