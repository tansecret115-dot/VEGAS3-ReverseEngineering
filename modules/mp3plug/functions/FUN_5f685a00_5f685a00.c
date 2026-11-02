/* Module: mp3plug.dll
   Function: FUN_5f685a00
   Address: 5f685a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f685a00(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HFONT h;
  HWND hWnd;
  uint uVar3;
  HGDIOBJ h_00;
  tagRECT *ptVar4;
  int nDenominator;
  UINT UVar5;
  BOOL bEnable;
  tagRECT local_410;
  CHAR local_400 [512];
  CHAR local_200 [512];
  
  iVar1 = FUN_5f685d80();
  GetClientRect(*(HWND *)(param_2 + 0x14),&local_410);
  nDenominator = 0x48;
  iVar2 = GetDeviceCaps(*(HDC *)(param_2 + 0x18),0x5a);
  iVar2 = MulDiv(10,iVar2,nDenominator);
  h = CreateFontA(-iVar2,0,0,0,600,0,0,0,0,0,0,0,0,(LPCSTR)0x0);
  h_00 = (HGDIOBJ)0x0;
  if (h != (HFONT)0x0) {
    h_00 = SelectObject(*(HDC *)(param_2 + 0x18),h);
  }
  if (DAT_5f74d334 != 0) {
    if (DAT_5f74d338 == 0xc9) {
      if (0 < iVar1) {
        uVar3 = 0x87;
        if ((DAT_5f74d33c != 0) && (299 < DAT_5f74d340)) {
          if (DAT_5f74d340 < 0x12e) {
            uVar3 = 0xbc1;
          }
          else if (DAT_5f74d340 == 0x12e) {
            uVar3 = 0xbc2;
          }
        }
        FUN_5f69dd80(DAT_5f74d2f4,uVar3,local_400,0x200);
        wsprintfA(local_200,local_400,iVar1);
        SetTextColor(*(HDC *)(param_2 + 0x18),0x8f0d14);
      }
    }
    else {
      local_200[0] = '\0';
    }
    ptVar4 = &local_410;
    UVar5 = 0x10;
    iVar1 = lstrlenA(local_200);
    DrawTextA(*(HDC *)(param_2 + 0x18),local_200,iVar1,ptVar4,UVar5);
    goto LAB_5f685d33;
  }
  switch(DAT_5f74d338) {
  case -200:
  case -199:
    FUN_5f69dd80(DAT_5f74d2f4,0xbc0,local_400,0x200);
    break;
  case -0xc6:
  case -0xc4:
  case -0xc3:
    if (DAT_5f74d310 == 0) {
      if (DAT_5f74d340 == -0x124) goto switchD_5f685a9b_caseD_ffffff3e;
      if (DAT_5f74d340 == -0x123) {
        FUN_5f69dd80(DAT_5f74d2f4,0xbcb,local_400,0x200);
      }
      else {
        FUN_5f69dd80(DAT_5f74d2f4,0xbbe,local_400,0x200);
      }
    }
    else {
      FUN_5f69dd80(DAT_5f74d2f4,0xbbc,local_400,0x200);
    }
    break;
  case -0xc5:
    if (DAT_5f74d310 == 0) {
      if (DAT_5f74d33c == 0) {
        if (DAT_5f74d340 != -0x12a) goto LAB_5f685c1f;
        FUN_5f69dd80(DAT_5f74d2f4,0xbbe,local_400,0x200);
      }
      else if (DAT_5f74d340 < 300) {
LAB_5f685c1f:
        local_400[0] = '\0';
      }
      else if (DAT_5f74d340 < 0x12e) {
        FUN_5f69dd80(DAT_5f74d2f4,0xbbd,local_400,0x200);
      }
      else {
        if (DAT_5f74d340 != 0x12e) goto LAB_5f685c1f;
        FUN_5f69dd80(DAT_5f74d2f4,0x88,local_400,0x200);
      }
    }
    else {
      FUN_5f69dd80(DAT_5f74d2f4,0xbbc,local_400,0x200);
    }
    break;
  case -0xc2:
switchD_5f685a9b_caseD_ffffff3e:
    FUN_5f69dd80(DAT_5f74d2f4,0xbca,local_400,0x200);
    break;
  case -0xc1:
    FUN_5f69dd80(DAT_5f74d2f4,0xbcb,local_400,0x200);
  }
  SetTextColor(*(HDC *)(param_2 + 0x18),0xb14ce);
  ptVar4 = &local_410;
  UVar5 = 0x10;
  iVar1 = lstrlenA(local_400);
  DrawTextA(*(HDC *)(param_2 + 0x18),local_400,iVar1,ptVar4,UVar5);
  bEnable = 0;
  hWnd = GetDlgItem(param_1,1);
  EnableWindow(hWnd,bEnable);
LAB_5f685d33:
  if (h_00 != (HGDIOBJ)0x0) {
    SelectObject(*(HDC *)(param_2 + 0x18),h_00);
  }
  DeleteObject(h);
  return 1;
}


