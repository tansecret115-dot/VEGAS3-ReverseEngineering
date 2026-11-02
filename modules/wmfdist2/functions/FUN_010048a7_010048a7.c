/* Module: wmfdist2.exe
   Function: FUN_010048a7
   Address: 010048a7
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_010048a7(void)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  WPARAM wParam;
  UINT UVar4;
  int iVar5;
  
  bVar1 = FUN_010049e6();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  if (DAT_0100aa88 != (HWND)0x0) {
    iVar5 = 0;
    pHVar2 = GetDlgItem(DAT_0100aa88,0x842);
    ShowWindow(pHVar2,iVar5);
    iVar5 = 5;
    pHVar2 = GetDlgItem(DAT_0100aa88,0x841);
    ShowWindow(pHVar2,iVar5);
  }
  bVar1 = FUN_010047f4();
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    UVar4 = 0x4ba;
  }
  else {
    puVar3 = FUN_01005f78(&LAB_0100461f,&LAB_0100462c,FUN_010042f5,FUN_010043ba,FUN_01004440,
                          FUN_010044cf,FUN_01004522,1,&DAT_0100ade8);
    if (puVar3 != (undefined4 *)0x0) {
      wParam = FUN_010060ef(puVar3,s__MEMCAB_0100a230,"",0,FUN_0100463b,0,&DAT_0100ade0);
      if (wParam == 0) goto LAB_01004989;
      iVar5 = FUN_01006008(puVar3);
      if (iVar5 != 0) goto LAB_01004989;
    }
    UVar4 = DAT_0100ade8 + 0x514;
  }
  FUN_01003e44(DAT_0100aa88,UVar4,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  wParam = 0;
LAB_01004989:
  if (DAT_0100ade0 != (HGLOBAL)0x0) {
    FreeResource(DAT_0100ade0);
    DAT_0100ade0 = (HGLOBAL)0x0;
  }
  if ((wParam == 0) && (DAT_0100ae78 == 0)) {
    FUN_01003e44((HWND)0x0,0x4f8,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  if ((((byte)DAT_0100aab8 & 1) == 0) && ((DAT_0100b6d4 & 1) == 0)) {
    SendMessageA(DAT_0100aa88,0xfa1,wParam,0);
  }
  return wParam;
}


