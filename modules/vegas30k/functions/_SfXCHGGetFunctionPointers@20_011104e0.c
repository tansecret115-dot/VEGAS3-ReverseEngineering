/* Module: vegas30k.dll
   Function: _SfXCHGGetFunctionPointers@20
   Address: 011104e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfXCHGGetFunctionPointers_20(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = param_4;
                    /* 0x1104e0  1305  _SfXCHGGetFunctionPointers@20 */
  for (iVar4 = 0x2f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (((int)param_2 < 0x10) || (0x16 < (int)param_2)) {
    if (((int)param_2 < 0x17) || (0x20 < (int)param_2)) goto LAB_011107b2;
    bVar1 = false;
    iVar4 = param_2 - 0x17;
  }
  else {
    bVar1 = true;
    iVar4 = param_2 - 0x10;
  }
  if (((int)param_1 < 0x10) || (0x16 < (int)param_1)) {
    if (((int)param_1 < 0x17) || (0x20 < (int)param_1)) {
LAB_011107b2:
      return &DAT_80070057;
    }
    bVar2 = false;
    iVar6 = param_1 - 0x17;
  }
  else {
    bVar2 = true;
    iVar6 = param_2 - 0x10;
  }
  if (bVar1) {
    iVar4 = *(int *)(&DAT_011e3754 + iVar4 * 4);
  }
  else {
    iVar4 = *(int *)(&DAT_011e3aec + iVar4 * 4);
  }
  if (bVar2) {
    iVar6 = *(int *)(&DAT_011e3754 + iVar6 * 4);
  }
  else {
    iVar6 = *(int *)(&DAT_011e3aec + iVar6 * 4);
  }
  uVar7 = param_3 & 0x7fff1f0;
  switch(param_3 & 0xf) {
  case 4:
    uVar7 = uVar7 | 0x10;
  case 3:
    uVar7 = uVar7 | 0x20;
  case 2:
    uVar7 = uVar7 | 0x40;
  case 1:
    param_3 = uVar7 | 0x180;
  }
  if (iVar6 == 0 || iVar4 == 0) {
    param_3 = param_3 | 0x10;
  }
  iVar6 = 0;
  iVar4 = 0;
  *param_4 = param_3;
  if ((param_3 & 0x10) == 0) {
    iVar6 = 2;
    iVar4 = 2;
  }
  if ((param_3 & 0x20) != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((param_3 & 0x40) != 0) {
    iVar4 = iVar4 + 1;
  }
  param_4[2] = param_1;
  param_4[1] = param_2;
  param_4[0x22] = param_3 >> 0x10 & 0xff;
  if (param_5 != (uint *)0x0) {
    uVar7 = *param_5;
    puVar8 = param_4 + 0x26;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *param_5;
      param_5 = param_5 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = uVar7 + iVar4 * 0x14;
    iVar5 = iVar4 * 4;
    param_4[10] = (uint)(&PTR_LAB_011e45dc)[iVar4];
    param_4[0xb] = (uint)(&PTR_LAB_011e485c)[iVar4];
    param_4[0xc] = *(uint *)(&DAT_011e40dc + iVar5);
    param_4[0xd] = *(uint *)(&DAT_011e435c + iVar5);
    if ((param_3 & 0x80) != 0) {
      param_4[10] = (uint)(&PTR_LAB_011e449c)[iVar4];
      param_4[0xb] = (uint)(&PTR_LAB_011e471c)[iVar4];
      uVar7 = *(uint *)(&DAT_011e421c + iVar5);
      param_4[0xc] = *(uint *)(&DAT_011e3f9c + iVar5);
      param_4[0xd] = uVar7;
    }
    if (param_4[10] == 0) {
      return (undefined1 *)0x80004001;
    }
  }
  if (bVar1) {
    iVar4 = iVar6 * 7 + (param_2 - 0x10);
    param_4[3] = (uint)(&PTR_LAB_011e378c)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_011e38dc)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_011e37fc)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_011e394c)[iVar4];
    puVar3 = (&PTR_LAB_011e386c)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_011e39bc)[iVar4];
  }
  else {
    iVar4 = (param_2 - 0x17) + iVar6 * 10;
    param_4[3] = (uint)(&PTR_LAB_011e3b3c)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_011e3d1c)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_011e3bdc)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_011e3dbc)[iVar4];
    puVar3 = (&PTR_LAB_011e3c7c)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_011e3e5c)[iVar4];
  }
  param_4[0xe] = (uint)puVar3;
  if (bVar2) {
    iVar4 = iVar6 * 7 + (param_1 - 0x10);
    puVar3 = (&PTR_LAB_011e371c)[iVar4];
    param_4[8] = (uint)(&PTR_FUN_011e3a2c)[iVar4];
    param_4[4] = (uint)puVar3;
    return (undefined1 *)0x0;
  }
  iVar4 = (param_1 - 0x17) + iVar6 * 10;
  puVar3 = (&PTR_LAB_011e3a9c)[iVar4];
  param_4[8] = (uint)(&PTR_LAB_011e3efc)[iVar4];
  param_4[4] = (uint)puVar3;
  return (undefined1 *)0x0;
}


