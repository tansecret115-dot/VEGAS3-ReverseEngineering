/* Module: g2plug.dll
   Function: FUN_5f85abc0
   Address: 5f85abc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f85abc0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = (uint)*(ushort *)(param_2 + 0x40) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar7 = (int)uVar4 >> 0x1f;
  iVar3 = *(int *)(param_2 + 0xa4);
  uVar5 = (uint)*(ushort *)(param_2 + 0x3e) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar8 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(ushort *)(param_2 + 0x3c) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar9 = (int)uVar6 >> 0x1f;
  if (iVar3 < (int)(((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8) +
                   ((uVar6 ^ uVar9) - uVar9))) {
    uVar4 = (uint)*(ushort *)(param_2 + 0xa8);
    *(ushort *)(param_1 + 0x40) =
         (short)(((uint)*(ushort *)(param_2 + 0x40) - (uint)*(ushort *)(param_1 + 0x40)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x40);
    uVar1 = *(ushort *)(param_2 + 0x3c);
    *(ushort *)(param_1 + 0x3e) =
         (short)(((uint)*(ushort *)(param_2 + 0x3e) - (uint)*(ushort *)(param_1 + 0x3e)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x3e);
    uVar2 = *(ushort *)(param_2 + 0x42);
    *(ushort *)(param_1 + 0x3c) =
         (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x3c)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x3c);
    *(ushort *)(param_1 + 0x42) =
         (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x42)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x42);
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x48) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x46) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar8 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(ushort *)(param_2 + 0x44) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar9 = (int)uVar6 >> 0x1f;
  if (iVar3 < (int)(((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8) +
                   ((uVar6 ^ uVar9) - uVar9))) {
    uVar4 = (uint)*(ushort *)(param_2 + 0xa8);
    *(ushort *)(param_1 + 0x48) =
         (short)(((uint)*(ushort *)(param_2 + 0x48) - (uint)*(ushort *)(param_1 + 0x48)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x48);
    uVar1 = *(ushort *)(param_2 + 0x44);
    *(ushort *)(param_1 + 0x46) =
         (short)(((uint)*(ushort *)(param_2 + 0x46) - (uint)*(ushort *)(param_1 + 0x46)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x46);
    uVar2 = *(ushort *)(param_2 + 0x4a);
    *(ushort *)(param_1 + 0x44) =
         (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x44)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x4a) =
         (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x4a)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x4a);
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x4e) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar8 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(ushort *)(param_2 + 0x4c) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar9 = (int)uVar6 >> 0x1f;
  if (iVar3 < (int)(((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8) +
                   ((uVar6 ^ uVar9) - uVar9))) {
    uVar4 = (uint)*(ushort *)(param_2 + 0xa8);
    *(ushort *)(param_1 + 0x50) =
         (short)(((uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_1 + 0x50)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x50);
    uVar1 = *(ushort *)(param_2 + 0x4c);
    *(ushort *)(param_1 + 0x4e) =
         (short)(((uint)*(ushort *)(param_2 + 0x4e) - (uint)*(ushort *)(param_1 + 0x4e)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x4e);
    uVar2 = *(ushort *)(param_2 + 0x52);
    *(ushort *)(param_1 + 0x4c) =
         (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x4c)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x4c);
    *(ushort *)(param_1 + 0x52) =
         (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x52)) * uVar4 >> 0x10) +
         *(ushort *)(param_1 + 0x52);
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x58) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x56) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar8 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(ushort *)(param_2 + 0x54) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar9 = (int)uVar6 >> 0x1f;
  if (iVar3 < (int)(((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8) +
                   ((uVar6 ^ uVar9) - uVar9))) {
    uVar4 = (uint)*(ushort *)(param_2 + 0xa8);
    *(ushort *)(param_1 + 0x58) =
         (short)(((uint)*(ushort *)(param_2 + 0x58) - (uint)*(ushort *)(param_1 + 0x58)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x58);
    *(ushort *)(param_1 + 0x56) =
         (short)(((uint)*(ushort *)(param_2 + 0x56) - (uint)*(ushort *)(param_1 + 0x56)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x56);
    *(ushort *)(param_1 + 0x54) =
         (short)(((uint)*(ushort *)(param_2 + 0x54) - (uint)*(ushort *)(param_1 + 0x54)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x54);
    *(ushort *)(param_1 + 0x5a) =
         (short)(((uint)*(ushort *)(param_2 + 0x5a) - (uint)*(ushort *)(param_1 + 0x5a)) * uVar4 >>
                0x10) + *(ushort *)(param_1 + 0x5a);
  }
  return;
}


