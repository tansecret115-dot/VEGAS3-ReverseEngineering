/* Module: erv33260.dll
   Function: FUN_6707f380
   Address: 6707f380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707f380(void *this,int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  byte *local_20;
  uint local_1c;
  byte *local_10;
  byte local_a [3];
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_a[0] = 0;
  iVar1 = *(int *)((int)this + 0x8c) + param_1 * 0xc;
  local_a[1] = 0;
  bVar2 = ~*(byte *)(iVar1 + 5);
  local_5 = bVar2 >> 1 & 1;
  local_7 = bVar2 & 1;
  bVar2 = bVar2 >> 2 & 1;
  pcVar3 = (char *)(*(int *)((int)this + 0x78) +
                   *(int *)(*(int *)((int)this + 0x90) + 8 + param_1 * 0x10) * 2);
  switch(*(undefined1 *)(iVar1 + 6)) {
  case 2:
  case 5:
  case 6:
    pbVar6 = (byte *)(pcVar3 + -2);
    if (local_7 != 0) {
      pbVar6 = local_a;
    }
    pbVar9 = (byte *)(pcVar3 + *(int *)((int)this + 0xa8) * -2);
    local_10 = (byte *)(pcVar3 + (4 - *(int *)((int)this + 0xa8)) * 2);
    if (bVar2 != 0) {
      pbVar9 = pbVar6;
      local_10 = pbVar6;
    }
    if ((local_5 != 0) && (bVar2 == 0)) {
      local_10 = pbVar9 + -2;
    }
    bVar2 = *pbVar6;
    bVar8 = *pbVar9;
    bVar7 = bVar2;
    if ((char)bVar8 <= (char)bVar2) {
      bVar7 = bVar8;
    }
    bVar4 = *local_10;
    if ((char)bVar4 <= (char)bVar8) {
      bVar8 = bVar4;
    }
    if ((char)bVar2 <= (char)bVar4) {
      bVar4 = bVar2;
    }
    bVar7 = bVar4 ^ bVar8 ^ bVar7;
    *param_2 = bVar7;
    bVar2 = pbVar6[1];
    bVar4 = pbVar9[1];
    bVar8 = bVar2;
    if ((char)bVar4 <= (char)bVar2) {
      bVar8 = bVar4;
    }
    bVar5 = local_10[1];
    if ((char)bVar5 <= (char)bVar4) {
      bVar4 = bVar5;
    }
    if ((char)bVar2 <= (char)bVar5) {
      bVar5 = bVar2;
    }
    param_2[1] = bVar5 ^ bVar4 ^ bVar8;
    *(int *)param_3 = (int)*pcVar3 - (int)(char)bVar7;
    *(int *)(param_3 + 4) = (int)pcVar3[1] - (int)(char)param_2[1];
    return;
  case 3:
    local_20 = param_3;
    param_1 = (uint)bVar2 << 0x18;
    bVar8 = 0;
    local_1c = 0;
    param_3 = param_2;
    bVar2 = local_7;
    do {
      pbVar6 = (byte *)(pcVar3 + -2);
      if (bVar2 != 0) {
        pbVar6 = local_a;
      }
      pbVar9 = (byte *)(pcVar3 + *(int *)((int)this + 0xa8) * -2);
      local_10 = (byte *)(pcVar3 + (2 - *(int *)((int)this + 0xa8)) * 2);
      if (param_1._3_1_ != '\0') {
        pbVar9 = pbVar6;
        local_10 = pbVar6;
      }
      if ((bVar8 != 0) && (param_1._3_1_ == '\0')) {
        local_10 = pbVar9 + -2;
      }
      bVar2 = *pbVar6;
      bVar8 = *pbVar9;
      bVar7 = bVar2;
      if ((char)bVar8 <= (char)bVar2) {
        bVar7 = bVar8;
      }
      bVar4 = *local_10;
      if ((char)bVar4 <= (char)bVar8) {
        bVar8 = bVar4;
      }
      if ((char)bVar2 <= (char)bVar4) {
        bVar4 = bVar2;
      }
      *param_3 = bVar4 ^ bVar8 ^ bVar7;
      bVar2 = pbVar9[1];
      bVar8 = pbVar6[1];
      bVar7 = bVar8;
      if ((char)bVar2 <= (char)bVar8) {
        bVar7 = bVar2;
      }
      bVar4 = local_10[1];
      if ((char)bVar4 <= (char)bVar2) {
        bVar2 = bVar4;
      }
      if ((char)bVar4 < (char)bVar8) {
        bVar8 = bVar4;
      }
      param_3[1] = bVar8 ^ bVar2 ^ bVar7;
      *(int *)local_20 = (int)*pcVar3 - (int)(char)*param_3;
      *(int *)(local_20 + 4) = (int)pcVar3[1] - (int)(char)param_3[1];
      if ((local_1c & 1) == 0) {
        pcVar3 = pcVar3 + 4;
        bVar8 = (byte)(local_1c >> 1) & 1 | local_5;
        bVar2 = 0;
      }
      else {
        bVar8 = 0;
        param_1 = 0;
        pcVar3 = pcVar3 + *(int *)((int)this + 0xa8) * 4 + -4;
        bVar2 = local_7;
      }
      param_3 = param_3 + 2;
      local_1c = local_1c + 1;
      local_20 = local_20 + 8;
    } while (local_1c < 4);
    return;
  case 4:
    bVar8 = 0;
    param_1 = (uint)bVar2 << 0x18;
    uVar10 = 0;
    bVar2 = local_7;
    do {
      pbVar6 = (byte *)(pcVar3 + -2);
      if (bVar2 != 0) {
        pbVar6 = local_a;
      }
      pbVar9 = (byte *)(pcVar3 + *(int *)((int)this + 0xa8) * -2);
      local_10 = (byte *)(pcVar3 + *(int *)((int)this + 0xa8) * -2 + 2);
      if (param_1._3_1_ != '\0') {
        pbVar9 = pbVar6;
        local_10 = pbVar6;
      }
      if ((bVar8 != 0) && (param_1._3_1_ == '\0')) {
        local_10 = pbVar9 + -2;
      }
      bVar2 = *pbVar6;
      bVar8 = *pbVar9;
      local_6 = bVar2;
      if ((char)bVar8 <= (char)bVar2) {
        local_6 = bVar8;
      }
      bVar7 = *local_10;
      if ((char)bVar7 <= (char)bVar8) {
        bVar8 = bVar7;
      }
      if ((char)bVar2 <= (char)bVar7) {
        bVar7 = bVar2;
      }
      param_2[uVar10 * 2] = bVar7 ^ bVar8 ^ local_6;
      bVar2 = pbVar6[1];
      local_6 = bVar2;
      bVar8 = pbVar9[1];
      if ((char)bVar8 <= (char)bVar2) {
        local_6 = bVar8;
      }
      bVar7 = local_10[1];
      if ((char)bVar7 <= (char)bVar8) {
        bVar8 = bVar7;
      }
      if ((char)bVar7 < (char)bVar2) {
        bVar2 = bVar7;
      }
      param_2[uVar10 * 2 + 1] = bVar2 ^ bVar8 ^ local_6;
      *(int *)(param_3 + uVar10 * 8) = (int)*pcVar3 - (int)(char)param_2[uVar10 * 2];
      *(int *)(param_3 + uVar10 * 8 + 4) = (int)pcVar3[1] - (int)(char)param_2[uVar10 * 2 + 1];
      if (((byte)uVar10 & 3) == 3) {
        param_1 = 0;
        pcVar3 = pcVar3 + *(int *)((int)this + 0xa8) * 2 + -6;
        bVar2 = local_7;
        bVar8 = 0;
      }
      else {
        pcVar3 = pcVar3 + 2;
        bVar2 = 0;
        bVar8 = local_5;
        if (uVar10 != 2) {
          bVar8 = (byte)(uVar10 >> 1) & 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x10);
  }
  return;
}


