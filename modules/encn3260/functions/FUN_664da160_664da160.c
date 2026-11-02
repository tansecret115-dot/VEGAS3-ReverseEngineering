/* Module: encn3260.dll
   Function: FUN_664da160
   Address: 664da160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664da160(void *this,byte *param_1,int *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  bVar4 = *param_1;
  *param_1 = bVar4 & 0x3f;
  cVar1 = *(char *)this;
  *param_1 = cVar1 << 6 | bVar4 & 0x1f;
  bVar4 = (*(byte *)((int)this + 1) & 1) << 5 | cVar1 << 6;
  *param_1 = bVar4;
  *param_1 = *(byte *)((int)this + 2) & 0x1f | bVar4;
  param_1[1] = *(byte *)((int)this + 3);
  param_1[2] = *(byte *)((int)this + 5);
  param_1[3] = *(byte *)((int)this + 4);
  pbVar2 = param_1 + 4;
  if (*(char *)((int)this + 3) == -0x38) {
    *pbVar2 = (byte)((uint)*(undefined4 *)((int)this + 6) >> 0x18);
    param_1[5] = (byte)((uint)*(undefined4 *)((int)this + 6) >> 0x10);
    param_1[6] = (byte)((uint)*(undefined4 *)((int)this + 6) >> 8);
    param_1[7] = *(byte *)((int)this + 6);
    param_1[8] = (byte)((uint)*(undefined4 *)((int)this + 10) >> 0x18);
    param_1[9] = (byte)((uint)*(undefined4 *)((int)this + 10) >> 0x10);
    param_1[10] = (byte)((uint)*(undefined4 *)((int)this + 10) >> 8);
    param_1[0xb] = *(byte *)((int)this + 10);
    param_1[0xc] = (byte)((uint)*(undefined4 *)((int)this + 0xe) >> 0x18);
    param_1[0xd] = (byte)((uint)*(undefined4 *)((int)this + 0xe) >> 0x10);
    param_1[0xe] = (byte)((uint)*(undefined4 *)((int)this + 0xe) >> 8);
    param_1[0xf] = *(byte *)((int)this + 0xe);
    param_1[0x10] = (byte)((uint)*(undefined4 *)((int)this + 0x12) >> 0x18);
    param_1[0x11] = (byte)((uint)*(undefined4 *)((int)this + 0x12) >> 0x10);
    param_1[0x12] = (byte)((uint)*(undefined4 *)((int)this + 0x12) >> 8);
    param_1[0x13] = *(byte *)((int)this + 0x12);
    param_1[0x14] = (byte)((uint)*(undefined4 *)((int)this + 0x16) >> 0x18);
    param_1[0x15] = (byte)((uint)*(undefined4 *)((int)this + 0x16) >> 0x10);
    param_1[0x16] = (byte)((uint)*(undefined4 *)((int)this + 0x16) >> 8);
    param_1[0x17] = *(byte *)((int)this + 0x16);
    param_1[0x18] = (byte)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x18);
    param_1[0x19] = (byte)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x10);
    iVar6 = 0;
    param_1[0x1a] = (byte)((uint)*(undefined4 *)((int)this + 0x1a) >> 8);
    param_1[0x1b] = *(byte *)((int)this + 0x1a);
    pbVar2 = param_1 + 0x1c;
    if (*(char *)((int)this + 2) != '\0') {
      iVar7 = 0;
      pbVar3 = pbVar2;
      do {
        pbVar2 = (byte *)(iVar7 + *(int *)((int)this + 0x1e));
        *pbVar3 = (byte)((uint)*(undefined4 *)pbVar2 >> 0x18);
        pbVar3[1] = (byte)((uint)*(undefined4 *)pbVar2 >> 0x10);
        pbVar3[2] = (byte)((uint)*(undefined4 *)pbVar2 >> 8);
        pbVar3[3] = *pbVar2;
        pbVar3[4] = pbVar2[4];
        pbVar3[5] = (byte)((uint)*(undefined4 *)(pbVar2 + 5) >> 0x10);
        pbVar3[6] = (byte)((uint)*(undefined4 *)(pbVar2 + 5) >> 8);
        pbVar3[7] = pbVar2[5];
        pbVar3[8] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 0x18);
        pbVar3[9] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 0x10);
        pbVar3[10] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 8);
        pbVar3[0xb] = pbVar2[9];
        pbVar3[0xc] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 0x18);
        pbVar3[0xd] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 0x10);
        pbVar3[0xe] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 8);
        pbVar3[0xf] = pbVar2[0xd];
        pbVar3[0x10] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 0x18);
        pbVar3[0x11] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 0x10);
        pbVar3[0x12] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 8);
        pbVar3[0x13] = pbVar2[0x11];
        pbVar3[0x14] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 0x18);
        iVar7 = iVar7 + 0x19;
        pbVar3[0x15] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 0x10);
        pbVar3[0x16] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 8);
        pbVar3[0x17] = pbVar2[0x15];
        pbVar2 = pbVar3 + 0x18;
        iVar6 = iVar6 + 1;
        *param_2 = (int)pbVar2 - (int)pbVar3;
        pbVar3 = pbVar2;
      } while (iVar6 < (int)(uint)*(byte *)((int)this + 2));
    }
  }
  if (*(char *)((int)this + 3) == -0x37) {
    iVar6 = 0;
    *pbVar2 = (byte)((uint)*(undefined4 *)((int)this + 0x22) >> 0x18);
    pbVar2[1] = (byte)((uint)*(undefined4 *)((int)this + 0x22) >> 0x10);
    pbVar2[2] = (byte)((uint)*(undefined4 *)((int)this + 0x22) >> 8);
    pbVar2[3] = *(byte *)((int)this + 0x22);
    pbVar2 = pbVar2 + 4;
    if (*(char *)((int)this + 2) != '\0') {
      iVar7 = 0;
      pbVar3 = pbVar2;
      do {
        pbVar2 = (byte *)(iVar7 + *(int *)((int)this + 0x26));
        *pbVar3 = (byte)((uint)*(undefined4 *)pbVar2 >> 0x18);
        pbVar3[1] = (byte)((uint)*(undefined4 *)pbVar2 >> 0x10);
        pbVar3[2] = (byte)((uint)*(undefined4 *)pbVar2 >> 8);
        pbVar3[3] = *pbVar2;
        pbVar3[4] = pbVar2[4];
        pbVar3[5] = (byte)((uint)*(undefined4 *)(pbVar2 + 5) >> 0x10);
        pbVar3[6] = (byte)((uint)*(undefined4 *)(pbVar2 + 5) >> 8);
        pbVar3[7] = pbVar2[5];
        pbVar3[8] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 0x18);
        pbVar3[9] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 0x10);
        pbVar3[10] = (byte)((uint)*(undefined4 *)(pbVar2 + 9) >> 8);
        pbVar3[0xb] = pbVar2[9];
        pbVar3[0xc] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 0x18);
        pbVar3[0xd] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 0x10);
        pbVar3[0xe] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xd) >> 8);
        pbVar3[0xf] = pbVar2[0xd];
        pbVar3[0x10] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 0x18);
        pbVar3[0x11] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 0x10);
        pbVar3[0x12] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x11) >> 8);
        pbVar3[0x13] = pbVar2[0x11];
        pbVar3[0x14] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 0x18);
        iVar7 = iVar7 + 0x19;
        pbVar3[0x15] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 0x10);
        pbVar3[0x16] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x15) >> 8);
        pbVar3[0x17] = pbVar2[0x15];
        pbVar2 = pbVar3 + 0x18;
        iVar6 = iVar6 + 1;
        *param_2 = (int)pbVar2 - (int)pbVar3;
        pbVar3 = pbVar2;
      } while (iVar6 < (int)(uint)*(byte *)((int)this + 2));
    }
  }
  if (*(char *)((int)this + 3) == -0x36) {
    pbVar3 = *(byte **)((int)this + 0x2a);
    pbVar8 = pbVar2;
    for (uVar5 = (uint)*(ushort *)((int)this + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar8 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar8 = pbVar8 + 1;
    }
    pbVar2 = pbVar2 + (uint)*(ushort *)((int)this + 4) * 4;
  }
  if ((*(char *)((int)this + 3) == -0x35) && (iVar6 = 0, *(char *)((int)this + 2) != '\0')) {
    do {
      *pbVar2 = (byte)((uint)*(undefined4 *)(*(int *)((int)this + 0x2e) + iVar6 * 4) >> 0x18);
      pbVar2[1] = (byte)((uint)*(undefined4 *)(*(int *)((int)this + 0x2e) + iVar6 * 4) >> 0x10);
      pbVar2[2] = (byte)((uint)*(undefined4 *)(*(int *)((int)this + 0x2e) + iVar6 * 4) >> 8);
      pbVar2[3] = *(byte *)(*(int *)((int)this + 0x2e) + iVar6 * 4);
      pbVar2 = pbVar2 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)((int)this + 2));
  }
  if (*(char *)((int)this + 3) == -0x34) {
    *pbVar2 = (byte)((uint)*(undefined4 *)((int)this + 0x32) >> 0x18);
    pbVar2[1] = (byte)((uint)*(undefined4 *)((int)this + 0x32) >> 0x10);
    pbVar2[2] = (byte)((uint)*(undefined4 *)((int)this + 0x32) >> 8);
    pbVar2[3] = *(byte *)((int)this + 0x32);
    *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)((int)this + 0x36);
    pbVar3 = *(byte **)((int)this + 0x3a);
    pbVar8 = pbVar2 + 8;
    for (uVar5 = (uint)*(ushort *)((int)this + 4) * 4 - 8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar8 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar8 = pbVar8 + 1;
    }
    pbVar2 = pbVar2 + (uint)*(ushort *)((int)this + 4) * 4;
  }
  *param_2 = (int)pbVar2 - (int)param_1;
  return;
}


