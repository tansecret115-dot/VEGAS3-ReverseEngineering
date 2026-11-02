/* Module: vegas30.exe
   Function: FUN_004def20
   Address: 004def20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004def20(int param_1,HWND param_2)

{
  int *piVar1;
  HWND hWnd;
  WPARAM wParam;
  uint uVar2;
  LPARAM lParam;
  
  uVar2 = 0;
  if (*(HWND *)(param_1 + 0xf1c) != (HWND)0x0) {
    uVar2 = SendMessageA(*(HWND *)(param_1 + 0xf1c),0x147,0,0);
    uVar2 = ((int)uVar2 < 1) - 1 & uVar2;
    DestroyWindow(*(HWND *)(param_1 + 0xf1c));
    *(undefined4 *)(param_1 + 0xf1c) = 0;
  }
  piVar1 = (int *)_SfGetUIFontSize_4(100);
  hWnd = CreateWindowExA(4,"COMBOBOX","",0x50210143,0,0,100,*piVar1 * 0x14,param_2,
                         (HMENU)&DAT_00000434,DAT_006471fc,(LPVOID)0x0);
  if (hWnd != (HWND)0x0) {
    lParam = 0;
    wParam = _SfGetUIFont_4(100);
    SendMessageA(hWnd,0x30,wParam,lParam);
    FUN_004dadf0(DAT_0064b138,hWnd,uVar2);
  }
  *(HWND *)(param_1 + 0xf1c) = hWnd;
  return;
}


