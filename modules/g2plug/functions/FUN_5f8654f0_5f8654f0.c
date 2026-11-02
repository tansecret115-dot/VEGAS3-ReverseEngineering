/* Module: g2plug.dll
   Function: FUN_5f8654f0
   Address: 5f8654f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8654f0(int param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  LRESULT LVar2;
  int iVar3;
  WCHAR aWStack_21c [270];
  
  hWnd = *(HWND *)(param_1 + 0xd8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0xc4),0x147,0,0);
  if (LVar2 == -1) {
    SetWindowTextA(hWnd,"");
    EnableWindow(hWnd,0);
    return;
  }
  EnableWindow(hWnd,1);
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x84))
                    (*(int **)(param_1 + 8),uVar1,*(undefined4 *)(param_1 + 0x24));
  if ((-1 < iVar3) && ((&stack0x00000000 == (undefined1 *)0x21c || (aWStack_21c[0] != L'\0')))) {
    WideCharToMultiByte(0,0,aWStack_21c,-1,&stack0xfffffce0,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  SetWindowTextA(hWnd,&stack0xfffffce0);
  return;
}


