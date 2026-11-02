/* Module: hhupd.exe
   Function: FUN_0100463e
   Address: 0100463e
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_0100463e(void)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  WPARAM wParam;
  UINT UVar4;
  int iVar5;
  
  bVar1 = FUN_0100477d();
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
  bVar1 = FUN_0100458b();
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    UVar4 = 0x4ba;
  }
  else {
    puVar3 = FUN_01005a90(&LAB_010043b6,&LAB_010043c3,FUN_0100408c,FUN_01004151,FUN_010041d7,
                          FUN_01004266,FUN_010042b9,1,&DAT_0100ade8);
    if (puVar3 != (undefined4 *)0x0) {
      wParam = FUN_01005c70(puVar3,s__MEMCAB_0100a230,"",0,FUN_010043d2,0,&DAT_0100ade0);
      if (wParam == 0) goto LAB_01004720;
      iVar5 = FUN_01005b30(puVar3);
      if (iVar5 != 0) goto LAB_01004720;
    }
    UVar4 = DAT_0100ade8 + 0x514;
  }
  FUN_01003c23(DAT_0100aa78,UVar4,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  wParam = 0;
LAB_01004720:
  if (DAT_0100ade0 != (HGLOBAL)0x0) {
    FreeResource(DAT_0100ade0);
    DAT_0100ade0 = (HGLOBAL)0x0;
  }
  if ((wParam == 0) && (DAT_0100ae78 == 0)) {
    FUN_01003c23((HWND)0x0,0x4f8,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  if ((((byte)DAT_0100aab8 & 1) == 0) && ((DAT_0100b6d4 & 1) == 0)) {
    SendMessageA(DAT_0100aa78,0xfa1,wParam,0);
  }
  return wParam;
}


