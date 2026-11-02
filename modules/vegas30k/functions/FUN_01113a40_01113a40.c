/* Module: vegas30k.dll
   Function: FUN_01113a40
   Address: 01113a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01113a40(void)

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
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  DVar4 = GetSysColor(0x12);
  DVar5 = GetSysColor(0xf);
  DVar6 = GetSysColor(0x10);
  DVar7 = GetSysColor(0x14);
  uStack_4._2_1_ = (undefined1)(DVar4 >> 0x10);
  uVar3 = uStack_4._2_1_;
  uStack_10._2_1_ = (undefined1)(DVar5 >> 0x10);
  uVar2 = uStack_10._2_1_;
  uStack_4._0_1_ = (undefined1)DVar4;
  uVar1 = (undefined1)uStack_4;
  uStack_4._3_1_ = (undefined1)(DVar4 >> 0x18);
  uStack_4._0_3_ = CONCAT12(uVar1,(short)DVar4);
  uStack_10._0_1_ = (undefined1)DVar5;
  uVar1 = (undefined1)uStack_10;
  uStack_10._3_1_ = (undefined1)(DVar5 >> 0x18);
  uStack_10._0_3_ = CONCAT12(uVar1,(short)DVar5);
  uStack_c._0_1_ = (undefined1)DVar6;
  uVar1 = (undefined1)uStack_c;
  uStack_4 = CONCAT31(uStack_4._1_3_,uVar3);
  uStack_c._2_1_ = (undefined1)(DVar6 >> 0x10);
  uVar3 = uStack_c._2_1_;
  uStack_c._3_1_ = (undefined1)(DVar6 >> 0x18);
  uStack_c._0_3_ = CONCAT12(uVar1,(short)DVar6);
  uStack_8._0_1_ = (undefined1)DVar7;
  uVar1 = (undefined1)uStack_8;
  uStack_10 = CONCAT31(uStack_10._1_3_,uVar2);
  uStack_8._2_1_ = (undefined1)(DVar7 >> 0x10);
  uVar2 = uStack_8._2_1_;
  uStack_8._3_1_ = (undefined1)(DVar7 >> 0x18);
  uStack_8._0_3_ = CONCAT12(uVar1,(short)DVar7);
  uStack_c = CONCAT31(uStack_c._1_3_,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,uVar2);
  if ((((DAT_012af718 == (HBITMAP)0x0) || (uStack_4 != DAT_01206b58)) || (uStack_10 != DAT_01206b74)
      ) || ((uStack_c != DAT_01206b78 || (uStack_8 != DAT_01206b94)))) {
    DAT_01206b58 = uStack_4;
    DAT_01206b74 = uStack_10;
    DAT_01206b78 = uStack_c;
    DAT_01206b94 = uStack_8;
    if (DAT_012af718 != (HBITMAP)0x0) {
      DeleteObject(DAT_012af718);
    }
    DAT_012af718 = (HBITMAP)0x0;
    hdc = GetDC((HWND)0x0);
    pHVar8 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)&DAT_01206b30,4,&DAT_011e49a0,
                            (BITMAPINFO *)&DAT_01206b30,0);
    ReleaseDC((HWND)0x0,hdc);
    DAT_012af718 = pHVar8;
  }
  return;
}


