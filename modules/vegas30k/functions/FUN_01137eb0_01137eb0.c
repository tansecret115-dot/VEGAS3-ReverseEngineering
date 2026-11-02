/* Module: vegas30k.dll
   Function: FUN_01137eb0
   Address: 01137eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01137eb0(HWND param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  LPCSTR lpString;
  WCHAR aWStack_20c [262];
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  (**(code **)(*(int *)*puVar1 + 0x70))((int *)*puVar1);
  if ((&stack0x00000000 == (undefined1 *)0x20c) || (aWStack_20c[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_20c,-1,&stack0xfffffcf4,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  lpString = &stack0xfffffcf4;
  hWnd = GetDlgItem(param_1,0x424);
  SetWindowTextA(hWnd,lpString);
  return;
}


