/* Module: vegas30k.dll
   Function: _FaderInst_GetMinSize@8
   Address: 010ad920
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_GetMinSize_8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0xad920  654  _FaderInst_GetMinSize@8 */
  uVar1 = param_1[3];
  if ((uVar1 & 0x800) == 0) {
    puVar2 = (uint *)((-(uint)(((byte)*param_1 & 0x30) != 0x10) & 10) + 10);
    if ((*param_1 & 0xf00) == 0x100) {
      iVar4 = 1;
      uVar3 = 10;
    }
    else {
      iVar4 = 2;
      uVar3 = 8;
    }
  }
  else {
    param_1[0x20] = 0x12;
    iVar4 = 1;
    uVar3 = 5;
    puVar2 = param_2;
  }
  iVar4 = ((uint)puVar2 >> 1) - iVar4;
  if ((uVar1 & 8) == 0) {
    if (((uVar1 & 0x10) != 0) && (uVar3 < 0x1d)) {
      uVar3 = 0x1c;
    }
    *param_2 = (int)puVar2 + iVar4 * 2;
    param_2[1] = uVar3;
    return;
  }
  if (((uVar1 & 0x10) != 0) && (uVar3 < 0x1d)) {
    uVar3 = 0x1c;
  }
  *param_2 = uVar3;
  param_2[1] = (int)puVar2 + iVar4 * 2;
  return;
}


