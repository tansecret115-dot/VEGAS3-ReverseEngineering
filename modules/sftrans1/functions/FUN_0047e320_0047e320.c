/* Module: sftrans1.dll
   Function: FUN_0047e320
   Address: 0047e320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047e320(int param_1)

{
  HWND hWnd;
  WPARAM wParam;
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_178 [29];
  undefined1 local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x646);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam == 0xffffffff) {
    SendMessageA(hWnd,0x14e,0,0);
    wParam = 0;
  }
  SendMessageA(hWnd,0x148,wParam,(LPARAM)local_104);
  iVar1 = FUN_004d6350(local_104,0);
  if (iVar1 < 4) {
    iVar1 = 4;
  }
  else if (800 < iVar1) {
    iVar1 = 800;
  }
  piVar3 = local_178;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_178[3] = iVar1 * 0x14;
  local_178[0] = 0x74;
  local_178[1] = 0x80000000;
  FUN_0047e000(local_178,1);
  return;
}


