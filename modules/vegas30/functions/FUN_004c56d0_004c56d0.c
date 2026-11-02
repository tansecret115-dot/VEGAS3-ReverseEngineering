/* Module: vegas30.exe
   Function: FUN_004c56d0
   Address: 004c56d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c56d0(int param_1,HDC param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ h_00;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x5d0);
  if (iVar1 == 0) {
    return;
  }
  hdc = param_2;
  if (param_2 == (HDC)0x0) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
  }
  local_30 = *(int *)(iVar1 + 0x14);
  local_2c = *(int *)(iVar1 + 0x18);
  local_c = local_2c + -1;
  local_28 = *(int *)(iVar1 + 0x1c);
  local_24 = *(int *)(iVar1 + 0x20);
  local_8 = local_30 + 2;
  local_4 = local_24 + 1;
  local_10 = local_30;
  FUN_0044e9f0(hdc,&local_10,0,&DAT_0064b188);
  local_30 = local_30 + 10;
  if (local_28 != local_30 && -1 < local_28 - local_30) {
    bVar3 = false;
    uVar2 = *(undefined4 *)(DAT_0064762c + 0xac);
    if (((DAT_006487c4 != 0) && (param_2 == (HDC)0x0)) && (0x18 < local_24 - local_2c)) {
      hdc_00 = CreateCompatibleDC(hdc);
      h = CreateCompatibleBitmap(hdc,local_28 - local_30,local_24 - local_2c);
      if (hdc_00 == (HDC)0x0) {
LAB_004c585f:
        if (h != (HBITMAP)0x0) {
          DeleteObject(h);
        }
      }
      else if (h != (HBITMAP)0x0) {
        local_20 = 0;
        local_1c = 0;
        local_18 = local_28 - local_30;
        local_14 = local_24 - local_2c;
        h_00 = SelectObject(hdc_00,h);
        FUN_004396c0(uVar2,&local_20);
        FUN_00439000(uVar2,hdc_00,&local_20);
        BitBlt(hdc,local_30,local_2c,local_28 - local_30,local_24 - local_2c,hdc_00,0,0,0xcc0020);
        h = SelectObject(hdc_00,h_00);
        bVar3 = true;
        goto LAB_004c585f;
      }
      if (hdc_00 != (HDC)0x0) {
        DeleteDC(hdc_00);
      }
      if (bVar3) goto LAB_004c5898;
    }
    FUN_004396c0(uVar2,&local_30);
    FUN_00439000(uVar2,hdc,&local_30);
  }
  if (param_2 != (HDC)0x0) {
    return;
  }
LAB_004c5898:
  ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  return;
}


