/* Module: Setup.exe
   Function: _SfHSLtoRGB@4
   Address: 00414740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfHSLtoRGB_4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
                    /* 0x14740  190  _SfHSLtoRGB@4 */
  uVar6 = param_1 >> 8 & 0xff;
  uVar5 = param_1 & 0xff;
  uVar3 = param_1 >> 0x10 & 0xff;
  if (uVar6 == 0) {
    uVar3 = (uVar3 * 0xff) / 0xf0;
    uVar4 = (undefined1)uVar3;
    param_1._0_1_ = uVar4;
  }
  else {
    if (uVar3 < 0x79) {
      uVar6 = ((uVar6 + 0xf0) * uVar3 + 0x78) / 0xf0;
    }
    else {
      uVar6 = (uVar3 - (uVar3 * uVar6 + 0x78) / 0xf0) + uVar6;
    }
    iVar7 = uVar3 * 2 - uVar6;
    iVar1 = FUN_00414840(iVar7,uVar6,uVar5 + 0x50);
    iVar2 = FUN_00414840(iVar7,uVar6,uVar5);
    uVar3 = (iVar1 * 0xff + 0x78U) / 0xf0;
    iVar1 = FUN_00414840(iVar7,uVar6,uVar5 - 0x50);
    param_1._0_1_ = (undefined1)((iVar2 * 0xff + 0x78U) / 0xf0);
    uVar4 = (undefined1)((iVar1 * 0xff + 0x78U) / 0xf0);
  }
  return (uint)CONCAT11(uVar4,(undefined1)param_1) << 8 | uVar3 & 0xff;
}


