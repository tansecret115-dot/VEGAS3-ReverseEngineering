/* Module: g2plug.dll
   Function: FUN_5f80fc50
   Address: 5f80fc50
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5f80fc50(void)

{
  HWND hWnd;
  uint uVar1;
  long lVar2;
  LRESULT LVar3;
  BOOL BVar4;
  int in_stack_00000218;
  HWND in_stack_00001090;
  _GUID *p_Var5;
  LPCSTR lpString;
  
  FUN_5f8676b0();
  hWnd = GetDlgItem(in_stack_00001090,0xc9);
  p_Var5 = (_GUID *)register0x00000010;
  uVar1 = SendMessageA(hWnd,0x147,0,0);
  lVar2 = SfG2_GetTemplateGUID(hWnd,uVar1,p_Var5);
  if (-1 < lVar2) {
    lVar2 = G2LoadRegistryTemplate
                      ((_GUID *)&stack0x00000000,(SFG2_PARAMS *)&stack0x00000218,
                       (SFG2TEMPLATE_DESCRIPTION *)&stack0x00000010);
    if (-1 < lVar2) {
      MakeTextFromG2Parms((SFG2_PARAMS *)&stack0x00000218,&stack0x0000088c,0x800);
      SetDlgItemTextA(in_stack_00001090,0xcb,&stack0x0000088c);
      lpString = &stack0x00000114;
      goto LAB_5f80fcf1;
    }
  }
  lpString = "";
LAB_5f80fcf1:
  SetDlgItemTextA(in_stack_00001090,0x12e,lpString);
  LVar3 = SendMessageA(hWnd,0x146,0,0);
  if ((LVar3 == 0) || (in_stack_00000218 != 0)) {
    BVar4 = 0;
  }
  else {
    BVar4 = 1;
  }
  FUN_5f80fc10(in_stack_00001090,BVar4);
  return lVar2;
}


