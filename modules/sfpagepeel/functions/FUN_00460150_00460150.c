/* Module: sfpagepeel.dll
   Function: FUN_00460150
   Address: 00460150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00460150(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

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
  for (iVar4 = 0x2f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (((int)param_2 < 0x10) || (0x16 < (int)param_2)) {
    if ((int)param_2 < 0x17) {
      return 0x80070057;
    }
    if (0x20 < (int)param_2) {
      return 0x80070057;
    }
    bVar1 = false;
    iVar4 = param_2 - 0x17;
  }
  else {
    bVar1 = true;
    iVar4 = param_2 - 0x10;
  }
  if (((int)param_1 < 0x10) || (0x16 < (int)param_1)) {
    if (((int)param_1 < 0x17) || (0x20 < (int)param_1)) {
      return 0x80070057;
    }
    bVar2 = false;
    iVar6 = param_1 - 0x17;
  }
  else {
    bVar2 = true;
    iVar6 = param_2 - 0x10;
  }
  if (bVar1) {
    iVar4 = *(int *)(&DAT_00475f84 + iVar4 * 4);
  }
  else {
    iVar4 = *(int *)(&DAT_0047631c + iVar4 * 4);
  }
  if (bVar2) {
    iVar6 = *(int *)(&DAT_00475f84 + iVar6 * 4);
  }
  else {
    iVar6 = *(int *)(&DAT_0047631c + iVar6 * 4);
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
    param_4[10] = (uint)(&PTR_LAB_00476e0c)[iVar4];
    param_4[0xb] = (uint)(&PTR_LAB_0047708c)[iVar4];
    param_4[0xc] = *(uint *)(&DAT_0047690c + iVar5);
    param_4[0xd] = *(uint *)(&DAT_00476b8c + iVar5);
    if ((param_3 & 0x80) != 0) {
      param_4[10] = (uint)(&PTR_LAB_00476ccc)[iVar4];
      param_4[0xb] = (uint)(&PTR_LAB_00476f4c)[iVar4];
      uVar7 = *(uint *)(&DAT_00476a4c + iVar5);
      param_4[0xc] = *(uint *)(&DAT_004767cc + iVar5);
      param_4[0xd] = uVar7;
    }
    if (param_4[10] == 0) {
      return 0x80004001;
    }
  }
  if (bVar1) {
    iVar4 = iVar6 * 7 + (param_2 - 0x10);
    param_4[3] = (uint)(&PTR_LAB_00475fbc)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_0047610c)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_0047602c)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_0047617c)[iVar4];
    puVar3 = (&PTR_LAB_0047609c)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_004761ec)[iVar4];
  }
  else {
    iVar4 = (param_2 - 0x17) + iVar6 * 10;
    param_4[3] = (uint)(&PTR_LAB_0047636c)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_0047654c)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_0047640c)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_004765ec)[iVar4];
    puVar3 = (&PTR_LAB_004764ac)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_0047668c)[iVar4];
  }
  param_4[0xe] = (uint)puVar3;
  if (!bVar2) {
    iVar4 = (param_1 - 0x17) + iVar6 * 10;
    puVar3 = (&PTR_LAB_004762cc)[iVar4];
    param_4[8] = (uint)(&PTR_LAB_0047672c)[iVar4];
    param_4[4] = (uint)puVar3;
    return 0;
  }
  iVar4 = iVar6 * 7 + (param_1 - 0x10);
  puVar3 = (&PTR_LAB_00475f4c)[iVar4];
  param_4[8] = (uint)(&PTR_FUN_0047625c)[iVar4];
  param_4[4] = (uint)puVar3;
  return 0;
}


