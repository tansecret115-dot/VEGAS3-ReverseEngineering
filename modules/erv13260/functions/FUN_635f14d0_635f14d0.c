/* Module: erv13260.dll
   Function: FUN_635f14d0
   Address: 635f14d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f14d0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar17;
  ushort uVar18;
  undefined8 uVar16;
  ushort uVar19;
  
  iVar9 = 8;
  uVar16 = 0;
  do {
    uVar10 = psubusb(*param_2,*param_1);
    uVar11 = psubusb(*param_1,*param_2);
    uVar10 = uVar10 | uVar11;
    uVar13 = psubusb(param_2[1],param_1[1]);
    uVar8 = (ushort)(((uint7)(byte)(uVar10 >> 0x18) << 0x30) >> 0x28);
    uVar11 = psubusb(param_1[1],param_2[1]);
    uVar13 = uVar13 | uVar11;
    uVar4 = (ushort)(((uint7)(byte)(uVar10 >> 0x38) << 0x30) >> 0x28);
    uVar19 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
    uVar5 = (ushort)(((uint7)(byte)(uVar13 >> 0x38) << 0x30) >> 0x28);
    uVar11 = psubusb(param_2[2],*(undefined8 *)((int)param_1 + param_3));
    uVar1 = *(undefined8 *)((int)param_1 + param_3 + 8);
    uVar12 = psubusb(*(undefined8 *)((int)param_1 + param_3),param_2[2]);
    uVar11 = uVar11 | uVar12;
    uVar12 = psubusb(param_2[3],uVar1);
    uVar2 = (ushort)(((uint7)(byte)(uVar11 >> 0x18) << 0x30) >> 0x28);
    uVar14 = psubusb(uVar1,param_2[3]);
    uVar12 = uVar12 | uVar14;
    uVar6 = (ushort)(((uint7)(byte)(uVar11 >> 0x38) << 0x30) >> 0x28);
    uVar3 = (ushort)(((uint7)(byte)(uVar12 >> 0x18) << 0x30) >> 0x28);
    uVar7 = (ushort)(((uint7)(byte)(uVar12 >> 0x38) << 0x30) >> 0x28);
    param_2 = param_2 + 4;
    uVar15 = (short)uVar16 + (ushort)(byte)uVar10 + ((ushort)(uVar10 >> 0x20) & 0xff) +
             (ushort)(byte)uVar13 + ((ushort)(uVar13 >> 0x20) & 0xff) + ((ushort)uVar11 & 0xff) +
             ((ushort)(uVar11 >> 0x20) & 0xff) + ((ushort)uVar12 & 0xff) +
             ((ushort)(uVar12 >> 0x20) & 0xff);
    uVar17 = (short)((ulonglong)uVar16 >> 0x10) + (ushort)(byte)(uVar10 >> 8) +
             (ushort)(byte)(uVar10 >> 0x28) + (ushort)(byte)(uVar13 >> 8) +
             (ushort)(byte)(uVar13 >> 0x28) + (ushort)(byte)(uVar11 >> 8) +
             (ushort)(byte)(uVar11 >> 0x28) + (ushort)(byte)(uVar12 >> 8) +
             (ushort)(byte)(uVar12 >> 0x28);
    uVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)CONCAT21(uVar8,(char)(uVar10 >> 0x10)) +
             (short)CONCAT21(uVar4,(char)(uVar10 >> 0x30)) +
             (short)CONCAT21(uVar19,(char)(uVar13 >> 0x10)) +
             (short)CONCAT21(uVar5,(char)(uVar13 >> 0x30)) +
             (short)CONCAT21(uVar2,(char)(uVar11 >> 0x10)) +
             (short)CONCAT21(uVar6,(char)(uVar11 >> 0x30)) +
             (short)CONCAT21(uVar3,(char)(uVar12 >> 0x10)) +
             (short)CONCAT21(uVar7,(char)(uVar12 >> 0x30));
    uVar19 = (short)((ulonglong)uVar16 >> 0x30) + (uVar8 >> 8) + (uVar4 >> 8) + (uVar19 >> 8) +
             (uVar5 >> 8) + (uVar2 >> 8) + (uVar6 >> 8) + (uVar3 >> 8) + (uVar7 >> 8);
    uVar16 = CONCAT26(uVar19,CONCAT24(uVar18,CONCAT22(uVar17,uVar15)));
    param_1 = (undefined8 *)((int)param_1 + param_3 * 2);
    if (param_4 < (int)((uint)uVar18 + (uint)uVar15 + (uint)uVar19 + (uint)uVar17)) {
      return;
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}


