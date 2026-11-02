/* Module: erv13260.dll
   Function: FUN_635fa1c0
   Address: 635fa1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_635fa1c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int local_8;
  
  iVar17 = param_5;
  iVar20 = 0;
  pbVar18 = (byte *)(param_5 * param_3 + param_2 + param_1);
  local_8 = 0;
  iVar37 = 0x10;
  pbVar19 = pbVar18;
  do {
    pbVar1 = pbVar19 + 1;
    pbVar2 = pbVar19 + 3;
    pbVar3 = pbVar19 + 2;
    pbVar4 = pbVar19 + 5;
    pbVar5 = pbVar19 + 4;
    pbVar6 = pbVar19 + 7;
    pbVar7 = pbVar19 + 6;
    pbVar8 = pbVar19 + 9;
    pbVar9 = pbVar19 + 8;
    pbVar10 = pbVar19 + 0xb;
    pbVar11 = pbVar19 + 10;
    pbVar12 = pbVar19 + 0xd;
    pbVar13 = pbVar19 + 0xc;
    pbVar14 = pbVar19 + 0xf;
    pbVar15 = pbVar19 + 0xe;
    bVar16 = *pbVar19;
    pbVar19 = pbVar19 + param_5;
    iVar37 = iVar37 + -1;
    iVar20 = (uint)bVar16 + iVar20 +
             (uint)*pbVar1 + (uint)*pbVar2 + (uint)*pbVar3 + (uint)*pbVar4 + (uint)*pbVar5 +
             (uint)*pbVar6 + (uint)*pbVar7 + (uint)*pbVar8 + (uint)*pbVar9 + (uint)*pbVar10 +
             (uint)*pbVar11 + (uint)*pbVar12 + (uint)*pbVar13 + (uint)*pbVar14 + (uint)*pbVar15;
  } while (iVar37 != 0);
  param_5 = 0x10;
  iVar20 = iVar20 >> 8;
  do {
    pbVar19 = pbVar18 + 4;
    uVar21 = (int)(iVar20 - (uint)*pbVar19) >> 0x1f;
    pbVar1 = pbVar18 + 5;
    uVar22 = (int)(iVar20 - (uint)*pbVar1) >> 0x1f;
    pbVar2 = pbVar18 + 6;
    uVar23 = (int)(iVar20 - (uint)*pbVar2) >> 0x1f;
    pbVar3 = pbVar18 + 7;
    uVar24 = (int)(iVar20 - (uint)*pbVar3) >> 0x1f;
    pbVar4 = pbVar18 + 1;
    uVar25 = (int)(iVar20 - (uint)*pbVar4) >> 0x1f;
    pbVar5 = pbVar18 + 2;
    uVar26 = (int)(iVar20 - (uint)*pbVar5) >> 0x1f;
    pbVar6 = pbVar18 + 3;
    uVar27 = (int)(iVar20 - (uint)*pbVar6) >> 0x1f;
    pbVar7 = pbVar18 + 0xc;
    uVar28 = (int)(iVar20 - (uint)*pbVar7) >> 0x1f;
    pbVar8 = pbVar18 + 0xd;
    uVar29 = (int)(iVar20 - (uint)*pbVar8) >> 0x1f;
    pbVar9 = pbVar18 + 0xe;
    uVar30 = (int)(iVar20 - (uint)*pbVar9) >> 0x1f;
    pbVar10 = pbVar18 + 0xf;
    uVar31 = (int)(iVar20 - (uint)*pbVar10) >> 0x1f;
    pbVar11 = pbVar18 + 8;
    uVar32 = (int)(iVar20 - (uint)*pbVar11) >> 0x1f;
    pbVar12 = pbVar18 + 9;
    uVar33 = (int)(iVar20 - (uint)*pbVar12) >> 0x1f;
    pbVar13 = pbVar18 + 10;
    uVar34 = (int)(iVar20 - (uint)*pbVar13) >> 0x1f;
    pbVar14 = pbVar18 + 0xb;
    uVar35 = (int)(iVar20 - (uint)*pbVar14) >> 0x1f;
    bVar16 = *pbVar18;
    pbVar18 = pbVar18 + iVar17;
    uVar36 = (int)(iVar20 - (uint)bVar16) >> 0x1f;
    local_8 = ((iVar20 - (uint)bVar16 ^ uVar36) - uVar36) + local_8 +
              ((iVar20 - (uint)*pbVar19 ^ uVar21) - uVar21) +
              ((iVar20 - (uint)*pbVar1 ^ uVar22) - uVar22) +
              ((iVar20 - (uint)*pbVar2 ^ uVar23) - uVar23) +
              ((iVar20 - (uint)*pbVar3 ^ uVar24) - uVar24) +
              ((iVar20 - (uint)*pbVar4 ^ uVar25) - uVar25) +
              ((iVar20 - (uint)*pbVar5 ^ uVar26) - uVar26) +
              ((iVar20 - (uint)*pbVar6 ^ uVar27) - uVar27) +
              ((iVar20 - (uint)*pbVar7 ^ uVar28) - uVar28) +
              ((iVar20 - (uint)*pbVar8 ^ uVar29) - uVar29) +
              ((iVar20 - (uint)*pbVar9 ^ uVar30) - uVar30) +
              ((iVar20 - (uint)*pbVar10 ^ uVar31) - uVar31) +
              ((iVar20 - (uint)*pbVar11 ^ uVar32) - uVar32) +
              ((iVar20 - (uint)*pbVar12 ^ uVar33) - uVar33) +
              ((iVar20 - (uint)*pbVar13 ^ uVar34) - uVar34) +
              ((iVar20 - (uint)*pbVar14 ^ uVar35) - uVar35);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return (param_4 + -500 <= local_8) - 1U & 3;
}


