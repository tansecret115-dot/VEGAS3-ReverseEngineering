/* Module: vegas30k.dll
   Function: FUN_01139ac0
   Address: 01139ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139ac0(HWND param_1)

{
  LONG LVar1;
  WCHAR aWStack_20c [262];
  
  LVar1 = GetWindowLongA(param_1,8);
  (**(code **)(**(int **)(LVar1 + 4) + 0x70))(*(int **)(LVar1 + 4));
  if ((&stack0x00000000 == (undefined1 *)0x20c) || (aWStack_20c[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_20c,-1,&stack0xfffffcf4,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  SetWindowTextA(param_1,&stack0xfffffcf4);
  return;
}


