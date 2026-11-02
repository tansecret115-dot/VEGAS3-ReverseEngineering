/* Module: g2plug.dll
   Function: FUN_5f80fb10
   Address: 5f80fb10
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5f80fb10(HWND param_1)

{
  HWND hWnd;
  uint uVar1;
  long lVar2;
  WPARAM wParam;
  _GUID *p_Var3;
  _GUID local_10;
  
  hWnd = GetDlgItem(param_1,0xc9);
  p_Var3 = &local_10;
  uVar1 = SendMessageA(hWnd,0x147,0,0);
  lVar2 = SfG2_GetTemplateGUID(hWnd,uVar1,p_Var3);
  if ((-1 < lVar2) && (lVar2 = G2DeleteRegistryTemplate(&local_10), -1 < lVar2)) {
    wParam = SendMessageA(hWnd,0x147,0,0);
    FUN_5f80fa80(hWnd,wParam);
    SendMessageA(hWnd,0x144,wParam,0);
    SendMessageA(hWnd,0x14e,wParam - 1,0);
    return lVar2;
  }
  return lVar2;
}


