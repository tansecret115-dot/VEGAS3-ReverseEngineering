/* Module: sfppack3.dll
   Function: FUN_5cc69150
   Address: 5cc69150
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc69150(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_8;
  
  uVar4 = param_1 >> 8 & 0xff;
  uVar7 = param_1 & 0xff;
  uVar1 = param_1 >> 0x10 & 0xff;
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar6 = uVar1;
  if ((uVar1 < uVar3) && (uVar6 = uVar4, uVar4 < uVar7)) {
    uVar6 = uVar7;
  }
  uVar3 = uVar7;
  if (uVar4 <= uVar7) {
    uVar3 = uVar4;
  }
  uVar8 = uVar1;
  if ((uVar3 < uVar1) && (uVar8 = uVar4, uVar7 < uVar4)) {
    uVar8 = uVar7;
  }
  uVar3 = uVar8 + uVar6;
  uVar2 = uVar3 * 0xf0 + 0x100 >> 9;
  uVar8 = uVar6 - uVar8;
  if (uVar8 == 0) {
    local_8 = 0;
    uVar8 = 0xa0;
  }
  else {
    if (0x78 < uVar2) {
      uVar3 = 0x200 - uVar3;
    }
    local_8 = (undefined1)((uVar8 * 0xf0 + (uVar3 >> 1)) / uVar3);
    uVar9 = uVar8 >> 1;
    iVar5 = uVar6 * 0xf0;
    uVar3 = ((iVar5 + uVar7 * -0xf0) / 6 + uVar9) / uVar8;
    uVar4 = ((iVar5 + uVar4 * -0xf0) / 6 + uVar9) / uVar8;
    uVar8 = ((iVar5 + uVar1 * -0xf0) / 6 + uVar9) / uVar8;
    if (uVar7 == uVar6) {
      uVar8 = uVar8 - uVar4;
    }
    else if (uVar6 == 0) {
      uVar8 = (uVar4 - uVar3) + 0xa0;
    }
    else {
      uVar8 = (uVar3 - uVar8) + 0x50;
    }
    if ((int)uVar8 < 0) {
      uVar8 = uVar8 + 0xf0;
    }
    if (0xf0 < uVar8) {
      uVar8 = uVar8 - 0xf0;
    }
  }
  return (uint)CONCAT11((char)uVar2,local_8) << 8 | uVar8 & 0xff;
}


