/* Module: 50comupd.exe
   Function: FUN_010046fa
   Address: 010046fa
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_010046fa(void)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  WPARAM wParam;
  UINT UVar4;
  int iVar5;
  
  bVar1 = FUN_01004839();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  if (DAT_0100aa78 != (HWND)0x0) {
    iVar5 = 0;
    pHVar2 = GetDlgItem(DAT_0100aa78,0x842);
    ShowWindow(pHVar2,iVar5);
    iVar5 = 5;
    pHVar2 = GetDlgItem(DAT_0100aa78,0x841);
    ShowWindow(pHVar2,iVar5);
  }
  bVar1 = FUN_01004647();
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    UVar4 = 0x4ba;
  }
  else {
    puVar3 = FUN_01005bc8(&LAB_01004472,&LAB_0100447f,FUN_01004148,FUN_0100420d,FUN_01004293,
                          FUN_01004322,FUN_01004375,1,&DAT_0100ade8);
    if (puVar3 != (undefined4 *)0x0) {
      wParam = FUN_01005d3f(puVar3,s__MEMCAB_0100a230,"",0,FUN_0100448e,0,&DAT_0100ade0);
      if (wParam == 0) goto LAB_010047dc;
      iVar5 = FUN_01005c58(puVar3);
      if (iVar5 != 0) goto LAB_010047dc;
    }
    UVar4 = DAT_0100ade8 + 0x514;
  }
  FUN_01003ce8(DAT_0100aa78,UVar4,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  wParam = 0;
LAB_010047dc:
  if (DAT_0100ade0 != (HGLOBAL)0x0) {
    FreeResource(DAT_0100ade0);
    DAT_0100ade0 = (HGLOBAL)0x0;
  }
  if ((wParam == 0) && (DAT_0100ae78 == 0)) {
    FUN_01003ce8((HWND)0x0,0x4f8,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  if ((((byte)DAT_0100aab8 & 1) == 0) && ((DAT_0100b6d4 & 1) == 0)) {
    SendMessageA(DAT_0100aa78,0xfa1,wParam,0);
  }
  return wParam;
}


