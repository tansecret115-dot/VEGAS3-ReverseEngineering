/* Module: sfpagepeel.dll
   Function: FUN_00468b00
   Address: 00468b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468b00(int param_1,uint param_2,uint *param_3)

{
  sbyte sVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_34 [6];
  uint local_1c [7];
  
  if (param_2 != 0xb3) {
    puVar4 = local_34;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = 0xc - (param_2 >> 5);
    if ((param_2 & 0x1f) == 0) {
      puVar4 = local_34 + iVar3;
      puVar2 = (uint *)(param_1 + -0x1c + ((param_2 >> 5) + iVar3) * 4);
      iVar7 = 6;
      do {
        uVar6 = *puVar2;
        puVar2 = puVar2 + -1;
        *puVar4 = *puVar4 | uVar6;
        puVar4 = puVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else {
      sVar1 = (sbyte)(param_2 & 0x1f);
      puVar4 = (uint *)(param_1 + 0x14);
      param_1 = 6;
      puVar2 = local_34 + iVar3;
      do {
        uVar6 = *puVar4;
        puVar5 = puVar2 + -1;
        puVar4 = puVar4 + -1;
        *puVar2 = *puVar2 | uVar6 << sVar1;
        param_1 = param_1 + -1;
        *puVar5 = *puVar5 | uVar6 >> (0x20U - sVar1 & 0x1f);
        puVar2 = puVar5;
      } while (param_1 != 0);
    }
    if (iVar3 < 0xd) {
      puVar4 = local_1c + 1;
      iVar3 = 0xd - iVar3;
      puVar2 = (uint *)register0x00000010;
      do {
        puVar2 = puVar2 + -1;
        uVar6 = *puVar2 | *puVar4 >> 0x13;
        puVar4 = puVar4 + -1;
        *puVar2 = uVar6;
        iVar3 = iVar3 + -1;
        *puVar2 = *puVar4 << 0xd | uVar6;
      } while (iVar3 != 0);
    }
    iVar3 = 6;
    puVar4 = param_3;
    do {
      iVar3 = iVar3 + -1;
      *puVar4 = *(uint *)((int)local_1c + (4 - (int)param_3) + (int)puVar4) ^
                -(uint)((local_1c[1] & 0x40000) != 0);
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0);
    *param_3 = *param_3 & 0x3ffff;
    return;
  }
  FUN_004687e0(param_1,param_3);
  return;
}


