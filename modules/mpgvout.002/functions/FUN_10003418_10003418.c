/* Module: mpgvout.002
   Function: FUN_10003418
   Address: 10003418
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10003418(undefined8 *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined5 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar10;
  short sVar14;
  short sVar16;
  short sVar17;
  undefined8 uVar15;
  short sVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar9;
  
  uVar15 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar5 = 7;
  do {
    uVar7 = *param_1;
    uVar2 = (ushort)(((uint7)(byte)((ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar3 = CONCAT21(uVar2,(char)((ulonglong)uVar7 >> 0x10));
    uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar7 >> 8));
    uVar6 = (ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar7);
    uVar8 = (ushort)(byte)((ulonglong)uVar7 >> 0x20);
    bVar11 = (byte)((ulonglong)uVar7 >> 0x28);
    bVar12 = (byte)((ulonglong)uVar7 >> 0x30);
    bVar13 = (byte)((ulonglong)uVar7 >> 0x38);
    uVar9 = (ulonglong)CONCAT16(bVar13,(uint6)CONCAT14(bVar12,(uint)CONCAT12(bVar11,uVar8)));
    sVar14 = (short)uVar15 + (ushort)(byte)uVar7 + uVar8;
    sVar16 = (short)((ulonglong)uVar15 >> 0x10) + (short)uVar4 + (ushort)bVar11;
    sVar17 = (short)((ulonglong)uVar15 >> 0x20) + (short)uVar3 + (ushort)bVar12;
    sVar18 = (short)((ulonglong)uVar15 >> 0x30) + (uVar2 >> 8) + (ushort)bVar13;
    uVar15 = CONCAT26(sVar18,CONCAT24(sVar17,CONCAT22(sVar16,sVar14)));
    uVar7 = pmaddwd(uVar6,uVar6);
    uVar10 = pmaddwd(uVar9,uVar9);
    iVar19 = iVar19 + (int)uVar7 + (int)uVar10;
    iVar20 = iVar20 + (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20);
    param_1 = (undefined8 *)((int)param_1 + param_2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  uVar1 = (uint)(ushort)(sVar17 + sVar14 + sVar18 + sVar16);
  return (iVar19 + iVar20) * 0x40 - uVar1 * uVar1;
}


