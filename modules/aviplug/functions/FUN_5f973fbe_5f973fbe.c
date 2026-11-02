/* Module: aviplug.dll
   Function: FUN_5f973fbe
   Address: 5f973fbe
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f973fbe(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  int unaff_EBP;
  uint *unaff_EDI;
  longlong in_MM0;
  ulonglong uVar7;
  ulonglong in_MM1;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar5 = DAT_5f9e5688;
  uVar1 = (uint)((ulonglong)in_MM0 >> 0x20);
  uVar7 = in_MM0 << 0xc | in_MM1 >> 0x34;
  *unaff_EDI = uVar1 >> 0x14 & 7;
  unaff_EDI[1] = uVar1 >> 0x17;
  iVar11 = 0xffff;
  lVar10 = 0;
  bVar4 = (byte)((ulonglong)(in_MM0 << 0xc) >> 0x38);
  uVar13 = in_MM1 << 0xc;
  do {
    uVar6 = (uint)bVar4;
    uVar1 = *(uint *)(&DAT_5f9e0990 + uVar6 * 8);
    uVar8 = (ulonglong)(uint)((int)((ulonglong)lVar10 >> 0x20) - iVar11);
    lVar10 = uVar8 << 0x20;
    param_1 = param_1 + -0x40 + *(int *)(&DAT_5f9e0990 + uVar6 * 8);
    if (param_1 < 0) {
      puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
      puVar3 = (undefined4 *)*puVar2;
      *(ulonglong *)(unaff_EDI + 2) =
           uVar7 >> 0x20 | uVar8 << 0x30 |
           (ulonglong)(uint)((param_1 + 0x40) - *(int *)(&DAT_5f9e0990 + uVar6 * 8)) << 0x20;
      *puVar3 = unaff_EDI + 2;
      *puVar2 = puVar3 + 1;
      return;
    }
    iVar9 = (int)(uVar7 >> (ulonglong)uVar1) + *(int *)(&DAT_5f9e0994 + uVar6 * 8);
    unaff_EDI = unaff_EDI + 2;
    lVar12 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),(int)uVar5 - uVar1);
    uVar8 = uVar13 << lVar12;
    iVar11 = -1;
    uVar7 = uVar13 >> (ulonglong)uVar1 | uVar7 << lVar12;
    *(undefined8 *)unaff_EDI = *(undefined8 *)(&DAT_5f9e1190 + iVar9 * 8);
    bVar4 = (byte)(uVar7 >> 0x38);
    uVar13 = uVar8;
  } while (iVar9 != 4);
  iVar11 = *(int *)(unaff_EBP + 0x10);
  uVar1 = *(uint *)(iVar11 + 4);
  iVar9 = *(int *)(iVar11 + 8);
  uVar13 = (ulonglong)uVar1 & 0x3f;
  *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + param_1;
  uVar14 = (ulonglong)(0x40 - (int)uVar13);
  uVar1 = uVar1 >> 6;
  *(ulonglong *)(iVar9 + 8 + uVar1 * 8) = uVar8 >> uVar13 | uVar7 << uVar14;
  *(ulonglong *)(iVar9 + 0x10 + uVar1 * 8) = uVar8 << uVar14;
  *(ulonglong *)(iVar9 + uVar1 * 8) =
       uVar7 >> uVar13 | *(ulonglong *)(iVar9 + uVar1 * 8) & -1L << uVar14;
  return;
}


