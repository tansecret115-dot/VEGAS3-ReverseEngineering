/* Module: sftrans1.dll
   Function: FUN_004874c0
   Address: 004874c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004874c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  tagPOINT local_48;
  undefined1 local_40 [12];
  int local_34;
  undefined4 ****local_30;
  HINSTANCE local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  char *local_c;
  char *local_8;
  undefined4 local_4;
  
  if (param_2 == 0) {
    ReleaseCapture();
    DestroyWindow(*(HWND *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 0x118) = 0;
    if ((-1 < *(int *)(param_1 + 0x124)) &&
       (*(int *)(param_1 + 0x124) < **(int **)(param_1 + 0xac) + 3)) {
      iVar4 = 0;
      iVar1 = **(int **)(param_1 + 0xb0);
      if (0 < iVar1) {
        do {
          uVar3 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb0) + 8) + iVar4 * 4));
          FUN_0048c380(uVar3,*(undefined4 *)(param_1 + 0x124));
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
  }
  else {
    if ((param_3 < 0) || (**(int **)(param_1 + 0xa4) <= param_3)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x114) != 0) {
      FUN_004874c0(0,0xffffffff);
    }
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    local_40._8_4_ = **(int **)(param_1 + 0xa8) * (*(int *)(param_1 + 0x3c) + 1);
    local_34 = *(int *)(param_1 + 0x38);
    local_48.y = FUN_004864f0(param_3);
    local_48.x = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x3c);
    ClientToScreen(*(HWND *)(param_1 + 4),&local_48);
    OffsetRect((LPRECT)local_40,local_48.x,local_48.y);
    SetCapture(*(HWND *)(param_1 + 4));
    local_28 = 0;
    local_24 = 0;
    local_30 = &local_30;
    local_20 = local_34 - local_40._4_4_;
    local_1c = local_40._8_4_ - local_40._0_4_;
    local_2c = DAT_0057b880;
    local_18 = local_40._4_4_;
    local_14 = local_40._0_4_;
    local_10 = 0x80800000;
    local_c = "SF CreditTxtCtl Style popup";
    local_8 = "SFCTEC_STYLES";
    local_4 = 0x88;
    pHVar2 = CreateWindowExA(0x88,"SFCTEC_STYLES","SF CreditTxtCtl Style popup",0x80800000,
                             local_40._0_4_,local_40._4_4_,local_1c,local_20,(HWND)0x0,(HMENU)0x0,
                             DAT_0057b880,&local_30);
    *(HWND *)(param_1 + 0x118) = pHVar2;
    GetLastError();
    SetWindowLongA(*(HWND *)(param_1 + 0x118),-0x15,param_1);
    ScreenToClient(*(HWND *)(param_1 + 4),(LPPOINT)local_40);
    ScreenToClient(*(HWND *)(param_1 + 4),(LPPOINT)(local_40 + 8));
    *(undefined4 *)(param_1 + 0x74) = local_40._0_4_;
    *(undefined4 *)(param_1 + 0x78) = local_40._4_4_;
    *(undefined4 *)(param_1 + 0x7c) = local_40._8_4_;
    *(int *)(param_1 + 0x80) = local_34;
    SetWindowPos(*(HWND *)(param_1 + 0x118),(HWND)0xffffffff,0,0,0,0,0x53);
  }
  *(int *)(param_1 + 0x114) = param_2;
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  return 1;
}


