/* Module: vegas30.exe
   Function: FUN_004181a0
   Address: 004181a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004181a0(int param_1)

{
  LPCSTR lpWindowName;
  HWND pHVar1;
  WPARAM wParam;
  int nHeight;
  int nWidth;
  DWORD dwStyle;
  int X;
  int Y;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  LPARAM lParam;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00418120(param_1,&local_10);
  if (*(int *)(param_1 + 0x210) == 0) {
    pHVar1 = *(HWND *)(param_1 + 0x1c8);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    nHeight = local_4 - local_c;
    nWidth = local_8 - local_10;
    dwStyle = 0x50000001;
    X = local_10;
    Y = local_c;
    hInstance = DAT_006471fc;
    lpWindowName = (LPCSTR)_SfGetString_8(DAT_00647204,0x50da);
    pHVar1 = CreateWindowExA(0,"Static",lpWindowName,dwStyle,X,Y,nWidth,nHeight,pHVar1,hMenu,
                             hInstance,lpParam);
    lParam = 0;
    *(HWND *)(param_1 + 0x210) = pHVar1;
    wParam = _SfGetUIFont_4(100);
    SendMessageA(*(HWND *)(param_1 + 0x210),0x30,wParam,lParam);
  }
  SetWindowPos(*(HWND *)(param_1 + 0x210),(HWND)0x0,local_10,local_c,local_8 - local_10,
               local_4 - local_c,0x10);
  InvalidateRect(*(HWND *)(param_1 + 0x210),(RECT *)0x0,1);
  return;
}


