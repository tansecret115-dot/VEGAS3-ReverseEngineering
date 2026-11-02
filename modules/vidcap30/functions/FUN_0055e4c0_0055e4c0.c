/* Module: vidcap30.exe
   Function: FUN_0055e4c0
   Address: 0055e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055e4c0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1693) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1697) + uVar3 * 2);
      uVar10 = (uint)*(byte *)(uVar3 + *(int *)(param_1 + 0x168b));
      uVar3 = uVar3 + 1;
      if (uVar8 == 0) {
        uVar8 = (uint)*(ushort *)(param_2 + 2 + uVar10 * 4);
        iVar4 = *(int *)(param_1 + 0x16ad);
        if ((int)(0x10 - uVar8) < iVar4) {
          uVar1 = *(ushort *)(param_2 + uVar10 * 4);
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) | uVar1 << ((byte)iVar4 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16ab);
          iVar5 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar5;
          *(undefined1 *)(iVar5 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16ac);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          iVar4 = *(int *)(param_1 + 0x16ad) + -0x10 + uVar8;
          *(ushort *)(param_1 + 0x16ab) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16ad) & 0x1f)
          ;
        }
        else {
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) |
               *(short *)(param_2 + uVar10 * 4) << ((byte)iVar4 & 0x1f);
          iVar4 = iVar4 + uVar8;
        }
LAB_0055e837:
        *(int *)(param_1 + 0x16ad) = iVar4;
      }
      else {
        uVar7 = (uint)(byte)(&DAT_005a0734)[uVar10];
        uVar9 = (uint)*(ushort *)(param_2 + 0x406 + uVar7 * 4);
        bVar2 = (byte)*(int *)(param_1 + 0x16ad);
        if ((int)(0x10 - uVar9) < *(int *)(param_1 + 0x16ad)) {
          uVar1 = *(ushort *)(param_2 + 0x404 + uVar7 * 4);
          *(ushort *)(param_1 + 0x16ab) = *(ushort *)(param_1 + 0x16ab) | uVar1 << (bVar2 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16ab);
          iVar5 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar5;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16ac);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16ab) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16ad) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + -0x10 + uVar9;
        }
        else {
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) |
               *(short *)(param_2 + 0x404 + uVar7 * 4) << (bVar2 & 0x1f);
          *(uint *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + uVar9;
        }
        iVar5 = *(int *)(&DAT_0059fef0 + uVar7 * 4);
        if (iVar5 != 0) {
          iVar6 = uVar10 - *(int *)(&DAT_005a0834 + uVar7 * 4);
          iVar4 = *(int *)(param_1 + 0x16ad);
          if (0x10 - iVar5 < iVar4) {
            *(ushort *)(param_1 + 0x16ab) =
                 *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16ab);
            iVar4 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar4;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16ac);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16ab) =
                 (ushort)iVar6 >> (0x10U - (char)*(int *)(param_1 + 0x16ad) & 0x1f);
            *(int *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + -0x10 + iVar5;
          }
          else {
            *(ushort *)(param_1 + 0x16ab) =
                 *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            *(int *)(param_1 + 0x16ad) = iVar4 + iVar5;
          }
        }
        uVar10 = uVar8 - 1;
        if (uVar10 < 0x100) {
          bVar2 = (&DAT_005a0533)[uVar8];
        }
        else {
          bVar2 = (&DAT_005a0634)[uVar10 >> 7];
        }
        uVar8 = (uint)bVar2;
        iVar5 = *(int *)(param_1 + 0x16ad);
        uVar7 = (uint)*(ushort *)(param_3 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_3 + uVar8 * 4);
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) | uVar1 << ((byte)iVar5 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16ab);
          iVar5 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar5;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16ac);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16ab) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16ad) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + -0x10 + uVar7;
        }
        else {
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) |
               *(short *)(param_3 + uVar8 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(param_1 + 0x16ad) = iVar5 + uVar7;
        }
        iVar5 = *(int *)(&DAT_0059ff64 + uVar8 * 4);
        if (iVar5 != 0) {
          iVar6 = uVar10 - *(int *)(&DAT_005a08a8 + uVar8 * 4);
          iVar4 = *(int *)(param_1 + 0x16ad);
          if (iVar4 <= 0x10 - iVar5) {
            *(ushort *)(param_1 + 0x16ab) =
                 *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            iVar4 = iVar4 + iVar5;
            goto LAB_0055e837;
          }
          *(ushort *)(param_1 + 0x16ab) =
               *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16ab);
          iVar4 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16ac);
          iVar4 = *(int *)(param_1 + 0x16ad);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x16ad) = iVar4 + -0x10 + iVar5;
          *(ushort *)(param_1 + 0x16ab) = (ushort)iVar6 >> (0x10U - (char)iVar4 & 0x1f);
        }
      }
    } while (uVar3 < *(uint *)(param_1 + 0x1693));
  }
  iVar5 = *(int *)(param_1 + 0x16ad);
  uVar3 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar3) < iVar5) {
    uVar1 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16ab) = *(ushort *)(param_1 + 0x16ab) | uVar1 << ((byte)iVar5 & 0x1f);
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    iVar5 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar5;
    *(undefined1 *)(iVar5 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16ac);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16ab) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16ad) & 0x1f);
    *(uint *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + -0x10 + uVar3;
  }
  else {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | *(short *)(param_2 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(param_1 + 0x16ad) = iVar5 + uVar3;
  }
  *(uint *)(param_1 + 0x16a7) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}


