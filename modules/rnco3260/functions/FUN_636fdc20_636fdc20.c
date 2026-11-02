/* Module: rnco3260.dll
   Function: FUN_636fdc20
   Address: 636fdc20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fdc20(ushort *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  byte *pbVar10;
  ushort *puVar11;
  
  iVar9 = param_2 >> 1;
  uVar5 = (param_2 * 2 - iVar9) / (param_4 * 2);
  if (param_2 != 0) {
    pbVar10 = param_3 + 3;
    uVar6 = (param_3[1] & 0xf8 | (param_3[2] & 0xf8) << 5) << 2 | (uint)(*param_3 >> 3);
    puVar11 = param_1;
    uVar8 = (ushort)uVar6;
    param_1 = (ushort *)(param_2 - uVar5);
    if ((ushort *)(param_2 - uVar5) != (ushort *)0x0) {
      while( true ) {
        uVar8 = (ushort)uVar6;
        *puVar11 = uVar8;
        puVar11 = puVar11 + 1;
        param_1 = (ushort *)((int)param_1 + -1);
        if (param_1 == (ushort *)0x0) break;
        iVar9 = iVar9 + param_4 * -2;
        if (iVar9 < 0) {
          iVar9 = iVar9 + param_2;
          uVar7 = ((pbVar10[2] & 0xf8) << 5 | pbVar10[1] & 0xf8) << 2 | (uint)(*pbVar10 >> 3);
          uVar4 = (ushort)uVar7;
          uVar8 = ((ushort)((uVar7 ^ uVar6) >> 1) & 0x3def) + (uVar4 & uVar8);
          do {
            *puVar11 = uVar8;
            puVar11 = puVar11 + 1;
            param_1 = (ushort *)((int)param_1 + -1);
            if (param_1 == (ushort *)0x0) goto LAB_636fdd79;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          iVar9 = iVar9 + param_2;
          do {
            *puVar11 = uVar4;
            puVar11 = puVar11 + 1;
            param_1 = (ushort *)((int)param_1 + -1);
            uVar8 = uVar4;
            if (param_1 == (ushort *)0x0) goto LAB_636fdd79;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          pbVar1 = pbVar10 + 5;
          iVar9 = iVar9 + param_2;
          pbVar2 = pbVar10 + 3;
          pbVar3 = pbVar10 + 4;
          pbVar10 = pbVar10 + 6;
          uVar6 = (*pbVar3 & 0xf8 | (*pbVar1 & 0xf8) << 5) << 2 | (uint)(*pbVar2 >> 3);
          uVar8 = (uVar4 & (ushort)uVar6) + ((ushort)((uVar7 ^ uVar6) >> 1) & 0x3def);
          do {
            *puVar11 = uVar8;
            puVar11 = puVar11 + 1;
            param_1 = (ushort *)((int)param_1 + -1);
            if (param_1 == (ushort *)0x0) goto LAB_636fdd79;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          iVar9 = iVar9 + param_2;
        }
      }
    }
LAB_636fdd79:
    if (uVar5 != 0) {
      for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)puVar11 = CONCAT22(uVar8,uVar8);
        puVar11 = puVar11 + 2;
      }
      for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = uVar8;
        puVar11 = puVar11 + 1;
      }
    }
  }
  return;
}


