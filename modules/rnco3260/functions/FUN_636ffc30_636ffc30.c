/* Module: rnco3260.dll
   Function: FUN_636ffc30
   Address: 636ffc30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ffc30(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  iVar7 = param_2 >> 1;
  uVar3 = (param_2 * 2 - iVar7) / (param_4 * 2);
  if (param_2 != 0) {
    uVar4 = (uint)(byte)(&DAT_63795aa0)
                        [(uint)(*param_3 >> 4) | param_3[1] & 0xf0 | (param_3[2] & 0xf0) << 4];
    uVar6 = uVar4;
    pbVar8 = param_3 + 3;
    pbVar9 = param_1;
    param_1 = (byte *)(param_2 - uVar3);
    if ((byte *)(param_2 - uVar3) != (byte *)0x0) {
      while( true ) {
        *pbVar9 = (byte)uVar4;
        pbVar9 = pbVar9 + 1;
        param_1 = param_1 + -1;
        uVar6 = uVar4;
        if (param_1 == (byte *)0x0) break;
        iVar7 = iVar7 + param_4 * -2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + param_2;
          bVar2 = (&DAT_63795aa0)[(uint)(*pbVar8 >> 4) | pbVar8[1] & 0xf0 | (pbVar8[2] & 0xf0) << 4]
          ;
          uVar5 = (uint)bVar2;
          bVar1 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5)
                   & 0x1e0) << 3];
          do {
            *pbVar9 = bVar1;
            pbVar9 = pbVar9 + 1;
            param_1 = param_1 + -1;
            uVar6 = (uint)bVar1;
            if (param_1 == (byte *)0x0) goto LAB_636ffe3a;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          do {
            *pbVar9 = bVar2;
            pbVar9 = pbVar9 + 1;
            param_1 = param_1 + -1;
            uVar6 = uVar5;
            if (param_1 == (byte *)0x0) goto LAB_636ffe3a;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          uVar4 = (uint)(byte)(&DAT_63795aa0)
                              [pbVar8[4] & 0xf0 | (uint)(pbVar8[3] >> 4) | (pbVar8[5] & 0xf0) << 4];
          bVar2 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5)
                   & 0x1e0) << 3];
          uVar6 = (uint)bVar2;
          do {
            *pbVar9 = bVar2;
            pbVar9 = pbVar9 + 1;
            param_1 = param_1 + -1;
            if (param_1 == (byte *)0x0) goto LAB_636ffe3a;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          pbVar8 = pbVar8 + 6;
        }
      }
    }
LAB_636ffe3a:
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


