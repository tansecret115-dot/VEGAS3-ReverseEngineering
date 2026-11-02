/* Module: sfpagepeel.dll
   Function: FUN_0041f0b0
   Address: 0041f0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f0b0(void)

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
  if ((((DAT_0047dcac == (HBITMAP)0x0) || (local_4 != DAT_0047caf0)) || (local_10 != DAT_0047cb0c))
     || ((local_c != DAT_0047cb10 || (local_8 != DAT_0047cb2c)))) {
    DAT_0047caf0 = local_4;
    DAT_0047cb0c = local_10;
    DAT_0047cb10 = local_c;
    DAT_0047cb2c = local_8;
    if (DAT_0047dcac != (HBITMAP)0x0) {
      DeleteObject(DAT_0047dcac);
    }
    DAT_0047dcac = (HBITMAP)0x0;
    hdc = GetDC((HWND)0x0);
    pHVar8 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)&DAT_0047cac8,4,&DAT_004750b8,
                            (BITMAPINFO *)&DAT_0047cac8,0);
    ReleaseDC((HWND)0x0,hdc);
    DAT_0047dcac = pHVar8;
  }
  return;
}


