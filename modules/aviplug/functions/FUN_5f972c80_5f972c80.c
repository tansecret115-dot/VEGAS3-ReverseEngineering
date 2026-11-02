/* Module: aviplug.dll
   Function: FUN_5f972c80
   Address: 5f972c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972c80(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined8 uVar15;
  
  uVar1 = DAT_5f9dc478;
  iVar6 = 5;
  do {
    uVar5 = 0;
    uVar2 = 5;
    do {
      piVar7 = param_2;
      uVar15 = 0;
      puVar4 = (undefined8 *)((int)&DAT_5f9dc480 + uVar5);
      iVar3 = 8;
      do {
        uVar8 = pmaddwd(*param_1,*puVar4);
        uVar9 = pmaddwd(param_1[1],puVar4[1]);
        uVar10 = pmaddwd(param_1[2],puVar4[2]);
        iVar12 = (int)uVar1;
        iVar13 = (int)((ulonglong)uVar1 >> 0x20);
        uVar11 = pmaddwd(param_1[3],puVar4[3]);
        uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20) + iVar13 >> 0x12,
                         (int)uVar8 + iVar12 >> 0x12);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + iVar13 >> 0x12,
                         (int)uVar9 + iVar12 >> 0x12);
        *param_1 = uVar8;
        uVar8 = packssdw(uVar8,uVar9);
        param_1[1] = uVar9;
        uVar9 = CONCAT44((int)((ulonglong)uVar10 >> 0x20) + iVar13 >> 0x12,
                         (int)uVar10 + iVar12 >> 0x12);
        uVar10 = CONCAT44((int)((ulonglong)uVar11 >> 0x20) + iVar13 >> 0x12,
                          (int)uVar11 + iVar12 >> 0x12);
        param_1[2] = uVar9;
        uVar9 = packssdw(uVar9,uVar10);
        param_1[3] = uVar10;
        param_1 = param_1 + 4;
        puVar4 = puVar4 + 4;
        uVar14 = (short)uVar15 + (ushort)((short)uVar8 == 0) + (ushort)((short)uVar9 == 0);
        uVar16 = (short)((ulonglong)uVar15 >> 0x10) +
                 (ushort)((short)((ulonglong)uVar8 >> 0x10) == 0) +
                 (ushort)((short)((ulonglong)uVar9 >> 0x10) == 0);
        uVar17 = (short)((ulonglong)uVar15 >> 0x20) +
                 (ushort)((short)((ulonglong)uVar8 >> 0x20) == 0) +
                 (ushort)((short)((ulonglong)uVar9 >> 0x20) == 0);
        uVar18 = (short)((ulonglong)uVar15 >> 0x30) +
                 (ushort)((short)((ulonglong)uVar8 >> 0x30) == 0) +
                 (ushort)((short)((ulonglong)uVar9 >> 0x30) == 0);
        uVar15 = CONCAT26(uVar18,CONCAT24(uVar17,CONCAT22(uVar16,uVar14)));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      param_2 = piVar7 + 1;
      uVar2 = uVar2 - 1;
      uVar5 = uVar2 & 0x100;
      *piVar7 = (uint)uVar16 + (uint)uVar18 + (uint)uVar14 + (uint)uVar17;
    } while (-7 < (int)uVar2);
    uVar15 = *(undefined8 *)(piVar7 + -3);
    uVar8 = *(undefined8 *)(piVar7 + -1);
    uVar9 = *(undefined8 *)(piVar7 + -9);
    uVar10 = *(undefined8 *)(piVar7 + -7);
    *param_3 = CONCAT44(-(uint)((int)((ulonglong)*(undefined8 *)(piVar7 + -0xb) >> 0x20) <
                               (int)((ulonglong)*(undefined8 *)(piVar7 + -5) >> 0x20)),
                        -(uint)((int)*(undefined8 *)(piVar7 + -0xb) <
                               (int)*(undefined8 *)(piVar7 + -5)));
    param_3[1] = CONCAT44(-(uint)((int)((ulonglong)uVar9 >> 0x20) < (int)((ulonglong)uVar15 >> 0x20)
                                 ),-(uint)((int)uVar9 < (int)uVar15));
    param_3[2] = CONCAT44(-(uint)((int)((ulonglong)uVar10 >> 0x20) < (int)((ulonglong)uVar8 >> 0x20)
                                 ),-(uint)((int)uVar10 < (int)uVar8));
    param_3 = param_3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


