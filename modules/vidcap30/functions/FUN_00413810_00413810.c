/* Module: vidcap30.exe
   Function: FUN_00413810
   Address: 00413810
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00413810(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  DVar1 = GetSysColor(0x10);
  DVar2 = GetSysColor(0xd);
  uVar3 = DVar1 >> 8 & 0xff;
  uVar8 = DVar1 >> 0x10 & 0xff;
  uVar4 = ((DVar2 >> 0x10 & 0xff) + uVar8) / 2;
  uVar6 = (uint)CONCAT11((char)uVar4,(char)(((DVar2 >> 8 & 0xff) + uVar3) / 2));
  uVar5 = ((DVar2 & 0xff) + (DVar1 & 0xff)) / 2;
  uVar7 = uVar6 << 8 | uVar5;
  uVar3 = (uVar3 + (DVar1 & 0xff) + uVar8) / 3;
  uVar6 = uVar6 & 0xff;
  uVar8 = (uVar5 + uVar4 + uVar6) / 3;
  if (((int)uVar8 < (int)(uVar3 - 0x14)) || (uVar3 + 0x14 < uVar8)) {
    uVar7 = (uVar5 * uVar3) / uVar8;
    uVar5 = 0xff;
    if (uVar7 < 0x100) {
      uVar5 = uVar7;
    }
    uVar6 = (uVar6 * uVar3) / uVar8;
    uVar7 = 0xff;
    if (uVar6 < 0x100) {
      uVar7 = uVar6;
    }
    uVar8 = (uVar4 * uVar3) / uVar8;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    uVar7 = (uint)CONCAT11((char)uVar8,(char)uVar7) << 8 | uVar5 & 0xff;
  }
  uVar8 = ((uVar7 & 0xff) * 3) / 2;
  uVar3 = 0xff;
  if (uVar8 < 0x100) {
    uVar3 = uVar8;
  }
  uVar4 = ((uVar7 >> 8 & 0xff) * 3) / 2;
  uVar8 = 0xff;
  if (uVar4 < 0x100) {
    uVar8 = uVar4;
  }
  uVar4 = ((uVar7 >> 0x10) * 3) / 2;
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  return (uint)CONCAT11((char)uVar4,(char)uVar8) << 8 | uVar3 & 0xff;
}


