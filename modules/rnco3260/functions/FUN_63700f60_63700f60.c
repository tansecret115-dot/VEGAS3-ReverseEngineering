/* Module: rnco3260.dll
   Function: FUN_63700f60
   Address: 63700f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63700f60(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar8 = param_2 >> 1;
  uVar3 = (param_2 * 2 - iVar8) / (param_4 * 2);
  if (param_2 != 0) {
    uVar4 = (uint)*param_3;
    iVar7 = param_2 - uVar3;
    uVar6 = uVar4;
    pbVar9 = param_1;
    param_1 = param_3 + 1;
    if (iVar7 != 0) {
      while( true ) {
        *pbVar9 = (byte)uVar4;
        pbVar9 = pbVar9 + 1;
        iVar7 = iVar7 + -1;
        uVar6 = uVar4;
        if (iVar7 == 0) break;
        iVar8 = iVar8 + param_4 * -2;
        if (iVar8 < 0) {
          iVar8 = iVar8 + param_2;
          bVar2 = *param_1;
          uVar5 = (uint)bVar2;
          bVar1 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5)
                   & 0x1e0) << 3];
          do {
            *pbVar9 = bVar1;
            pbVar9 = pbVar9 + 1;
            iVar7 = iVar7 + -1;
            uVar6 = (uint)bVar1;
            if (iVar7 == 0) goto LAB_637010dd;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          do {
            *pbVar9 = bVar2;
            pbVar9 = pbVar9 + 1;
            iVar7 = iVar7 + -1;
            uVar6 = uVar5;
            if (iVar7 == 0) goto LAB_637010dd;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          uVar4 = (uint)param_1[1];
          param_1 = param_1 + 2;
          bVar2 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5)
                   & 0x1e0) << 3];
          uVar6 = (uint)bVar2;
          do {
            *pbVar9 = bVar2;
            pbVar9 = pbVar9 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) goto LAB_637010dd;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
        }
      }
    }
LAB_637010dd:
    if (uVar3 != 0) {
      bVar2 = (byte)uVar6;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
        pbVar9 = pbVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar9 = bVar2;
        pbVar9 = pbVar9 + 1;
      }
    }
  }
  return;
}


