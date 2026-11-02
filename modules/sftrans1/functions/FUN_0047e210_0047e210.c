/* Module: sftrans1.dll
   Function: FUN_0047e210
   Address: 0047e210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047e210(int param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_178 [6];
  undefined1 local_160;
  WCHAR local_15e [31];
  undefined2 local_120;
  CHAR local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x645);
  GetWindowTextA(hWnd,local_104,0x104);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendMessageA(hWnd,0x150,wParam,0);
    puVar3 = local_178;
    for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_178[0] = 0x74;
    local_178[1] = 0x28000000;
    local_160 = (char)LVar1;
    MultiByteToWideChar(0,1,local_104,-1,local_15e,0x20);
    local_120 = 0;
    FUN_0047e000(local_178,1);
  }
  return;
}


