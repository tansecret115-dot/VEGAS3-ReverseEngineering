/* Module: wmfdist2.exe
   Function: FUN_01002dfb
   Address: 01002dfb
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002dfb(HWND param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  UINT UVar4;
  DWORD DVar5;
  undefined3 extraout_var_00;
  HWND pHVar6;
  uint uVar7;
  LPCSTR pCVar8;
  
  if (param_2 != 0x10) {
    if (param_2 == 0x110) {
      pHVar6 = GetDesktopWindow();
      FUN_01003d79(param_1,pHVar6);
      SetWindowTextA(param_1,&DAT_0100adf4);
      SendDlgItemMessageA(param_1,0x835,0xc5,0x103,0);
      if (DAT_0100bc04 != 1) {
        return 1;
      }
      BVar3 = 0;
      pHVar6 = GetDlgItem(param_1,0x836);
      EnableWindow(pHVar6,BVar3);
      return 1;
    }
    if (param_2 != 0x111) {
      return 0;
    }
    if (param_3 == 1) {
      UVar4 = GetDlgItemTextA(param_1,0x835,&DAT_0100ae84,0x104);
      if ((UVar4 == 0) || (iVar2 = FUN_01002dcb(&DAT_0100ae84), iVar2 == 0)) {
        pCVar8 = (LPCSTR)0x0;
        UVar4 = 0x4bf;
      }
      else {
        DVar5 = GetFileAttributesA(&DAT_0100ae84);
        if (DVar5 == 0xffffffff) {
          iVar2 = FUN_01003e44(param_1,0x54a,&DAT_0100ae84,(LPCSTR)0x0,0x20,4);
          if (iVar2 != 6) {
            return 1;
          }
          BVar3 = CreateDirectoryA(&DAT_0100ae84,(LPSECURITY_ATTRIBUTES)0x0);
          if (BVar3 == 0) {
            pCVar8 = &DAT_0100ae84;
            UVar4 = 0x4cb;
            goto LAB_01002fa4;
          }
        }
        FUN_01005c31(&DAT_0100ae84,"");
        iVar2 = FUN_010050c7(&DAT_0100ae84);
        if (iVar2 != 0) {
          if ((DAT_0100ae84 != '\\') || (uVar7 = 0, DAT_0100ae85 != '\\')) {
            uVar7 = 1;
          }
          bVar1 = FUN_01005166(&DAT_0100ae84,uVar7,1);
          if (CONCAT31(extraout_var_00,bVar1) != 0) {
            EndDialog(param_1,1);
          }
          return 1;
        }
        pCVar8 = (LPCSTR)0x0;
        UVar4 = 0x4be;
      }
LAB_01002fa4:
      FUN_01003e44(param_1,UVar4,pCVar8,(LPCSTR)0x0,0x10,0);
      return 1;
    }
    if (param_3 == 2) {
      EndDialog(param_1,0);
      DAT_0100b704 = 0x800704c7;
      return 1;
    }
    if (param_3 != 0x836) {
      return 1;
    }
    iVar2 = LoadStringA(DAT_0100b6dc,1000,&DAT_0100a680,0x200);
    if (iVar2 == 0) {
      FUN_01003e44(param_1,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    }
    else {
      bVar1 = FUN_01003c44(param_1,&DAT_0100a680,&DAT_0100a370);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 1;
      }
      BVar3 = SetDlgItemTextA(param_1,0x835,&DAT_0100a370);
      if (BVar3 != 0) {
        return 1;
      }
      FUN_01003e44(param_1,0x4c0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    }
  }
  EndDialog(param_1,0);
  return 1;
}


