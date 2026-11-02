/* Module: vfplugs.dll
   Function: FUN_004240d0
   Address: 004240d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004240d0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  DWORD DVar7;
  HDC hdc;
  HBITMAP pHVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DVar4 = GetSysColor(0x12);
  DVar5 = GetSysColor(0xf);
  DVar6 = GetSysColor(0x10);
  DVar7 = GetSysColor(0x14);
  local_4._2_1_ = (undefined1)(DVar4 >> 0x10);
  uVar3 = local_4._2_1_;
  local_10._2_1_ = (undefined1)(DVar5 >> 0x10);
  uVar2 = local_10._2_1_;
  local_4._0_1_ = (undefined1)DVar4;
  uVar1 = (undefined1)local_4;
  local_4._3_1_ = (undefined1)(DVar4 >> 0x18);
  local_4._0_3_ = CONCAT12(uVar1,(short)DVar4);
  local_10._0_1_ = (undefined1)DVar5;
  uVar1 = (undefined1)local_10;
  local_10._3_1_ = (undefined1)(DVar5 >> 0x18);
  local_10._0_3_ = CONCAT12(uVar1,(short)DVar5);
  local_c._0_1_ = (undefined1)DVar6;
  uVar1 = (undefined1)local_c;
  local_4 = CONCAT31(local_4._1_3_,uVar3);
  local_c._2_1_ = (undefined1)(DVar6 >> 0x10);
  uVar3 = local_c._2_1_;
  local_c._3_1_ = (undefined1)(DVar6 >> 0x18);
  local_c._0_3_ = CONCAT12(uVar1,(short)DVar6);
  local_8._0_1_ = (undefined1)DVar7;
  uVar1 = (undefined1)local_8;
  local_10 = CONCAT31(local_10._1_3_,uVar2);
  local_8._2_1_ = (undefined1)(DVar7 >> 0x10);
  uVar2 = local_8._2_1_;
  local_8._3_1_ = (undefined1)(DVar7 >> 0x18);
  local_8._0_3_ = CONCAT12(uVar1,(short)DVar7);
  local_c = CONCAT31(local_c._1_3_,uVar3);
  local_8 = CONCAT31(local_8._1_3_,uVar2);
  if ((((DAT_00494d34 == (HBITMAP)0x0) || (local_4 != DAT_00493b38)) || (local_10 != DAT_00493b54))
     || ((local_c != DAT_00493b58 || (local_8 != DAT_00493b74)))) {
    DAT_00493b38 = local_4;
    DAT_00493b54 = local_10;
    DAT_00493b58 = local_c;
    DAT_00493b74 = local_8;
    if (DAT_00494d34 != (HBITMAP)0x0) {
      DeleteObject(DAT_00494d34);
    }
    DAT_00494d34 = (HBITMAP)0x0;
    hdc = GetDC((HWND)0x0);
    pHVar8 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)&DAT_00493b10,4,&DAT_0048c5a0,
                            (BITMAPINFO *)&DAT_00493b10,0);
    ReleaseDC((HWND)0x0,hdc);
    DAT_00494d34 = pHVar8;
  }
  return;
}


