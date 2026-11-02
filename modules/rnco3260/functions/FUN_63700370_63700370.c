/* Module: rnco3260.dll
   Function: FUN_63700370
   Address: 63700370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63700370(byte *param_1,int param_2,ushort *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_2 >> 1;
  uVar4 = (param_2 * 2 - iVar9) / (param_4 * 2);
  if (param_2 != 0) {
    uVar2 = *param_3;
    uVar5 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar2 >> 2 & 0x1e0 | uVar2 & 0x1e) >> 1 | ((uVar2 & 0xf000) >> 8) << 4];
    param_3 = param_3 + 1;
    iVar8 = param_2 - uVar4;
    uVar7 = uVar5;
    if (iVar8 != 0) {
      while( true ) {
        *param_1 = (byte)uVar5;
        param_1 = param_1 + 1;
        iVar8 = iVar8 + -1;
        uVar7 = uVar5;
        if (iVar8 == 0) break;
        iVar9 = iVar9 + param_4 * -2;
        if (iVar9 < 0) {
          iVar9 = iVar9 + param_2;
          uVar2 = *param_3;
          bVar3 = (&DAT_63795aa0)
                  [(uVar2 & 0x1e | uVar2 >> 2 & 0x1e0) >> 1 | ((uVar2 & 0xf000) >> 8) << 4];
          uVar6 = (uint)bVar3;
          bVar1 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6)
                   & 0x1e0) << 3];
          do {
            *param_1 = bVar1;
            param_1 = param_1 + 1;
            iVar8 = iVar8 + -1;
            uVar7 = (uint)bVar1;
            if (iVar8 == 0) goto LAB_63700576;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          iVar9 = iVar9 + param_2;
          do {
            *param_1 = bVar3;
            param_1 = param_1 + 1;
            iVar8 = iVar8 + -1;
            uVar7 = uVar6;
            if (iVar8 == 0) goto LAB_63700576;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          iVar9 = iVar9 + param_2;
          uVar2 = param_3[1];
          param_3 = param_3 + 2;
          uVar5 = (uint)(byte)(&DAT_63795aa0)
                              [(uVar2 & 0x1e | uVar2 >> 2 & 0x1e0) >> 1 |
                               ((uVar2 & 0xf000) >> 8) << 4];
          bVar3 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6)
                   & 0x1e0) << 3];
          uVar7 = (uint)bVar3;
          do {
            *param_1 = bVar3;
            param_1 = param_1 + 1;
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) goto LAB_63700576;
            iVar9 = iVar9 + param_4 * -2;
          } while (-1 < iVar9);
          iVar9 = iVar9 + param_2;
        }
      }
    }
LAB_63700576:
    if (uVar4 != 0) {
      bVar3 = (byte)uVar7;
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)param_1 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3));
        param_1 = param_1 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_1 = bVar3;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


