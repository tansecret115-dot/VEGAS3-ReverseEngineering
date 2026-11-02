/* Module: vegas30.exe
   Function: FUN_00417d70
   Address: 00417d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417d70(int param_1,HWND param_2,HMENU param_3)

{
  WPARAM wParam;
  HWND hWnd;
  undefined4 uVar1;
  
  wParam = _SfGetUIFont_4(100);
  hWnd = CreateWindowExA(4,"COMBOBOX",(LPCSTR)0x0,0x56210002,0,0,0,0,param_2,param_3,DAT_006471fc,
                         (LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  SendMessageA(hWnd,0x30,wParam,0);
  SendMessageA(hWnd,0x141,0x104,0);
  *(HWND *)(param_1 + 0x254) = hWnd;
  uVar1 = FUN_0043bc10(param_2,(undefined1 *)((int)&param_3->unused + 1),&DAT_00610388,4,0);
  *(undefined4 *)(param_1 + 600) = uVar1;
  FUN_00417720(param_1,0);
  return 1;
}


