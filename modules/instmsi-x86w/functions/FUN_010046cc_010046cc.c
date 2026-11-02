/* Module: InstMsi-x86w.exe
   Function: FUN_010046cc
   Address: 010046cc
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_010046cc(void)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  WPARAM wParam;
  UINT UVar4;
  int iVar5;
  
  bVar1 = FUN_0100480b();
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
  bVar1 = FUN_01004619();
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    UVar4 = 0x4ba;
  }
  else {
    puVar3 = FUN_01005ba0(&LAB_01004444,&LAB_01004451,FUN_0100411a,FUN_010041df,FUN_01004265,
                          FUN_010042f4,FUN_01004347,1,&DAT_0100ade8);
    if (puVar3 != (undefined4 *)0x0) {
      wParam = FUN_01005d80(puVar3,s__MEMCAB_0100a230,"",0,FUN_01004460,0,&DAT_0100ade0);
      if (wParam == 0) goto LAB_010047ae;
      iVar5 = FUN_01005c40(puVar3);
      if (iVar5 != 0) goto LAB_010047ae;
    }
    UVar4 = DAT_0100ade8 + 0x514;
  }
  FUN_01003cb8(DAT_0100aa78,UVar4,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  wParam = 0;
LAB_010047ae:
  if (DAT_0100ade0 != (HGLOBAL)0x0) {
    FreeResource(DAT_0100ade0);
    DAT_0100ade0 = (HGLOBAL)0x0;
  }
  if ((wParam == 0) && (DAT_0100ae78 == 0)) {
    FUN_01003cb8((HWND)0x0,0x4f8,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  if ((((byte)DAT_0100aab8 & 1) == 0) && ((DAT_0100b6d4 & 1) == 0)) {
    SendMessageA(DAT_0100aa78,0xfa1,wParam,0);
  }
  return wParam;
}


