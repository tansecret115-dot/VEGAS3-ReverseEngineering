/* Module: erv13260.dll
   Function: FUN_635f10b0
   Address: 635f10b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635f10b0(byte *param_1,byte *param_2,int param_3,int param_4)

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
  int local_4;
  
  local_4 = 0x10;
  iVar17 = 0;
  do {
    bVar16 = *param_2;
    pbVar1 = param_2 + 1;
    pbVar2 = param_2 + 2;
    pbVar3 = param_2 + 3;
    pbVar4 = param_2 + 4;
    pbVar5 = param_2 + 5;
    pbVar6 = param_2 + 6;
    pbVar7 = param_2 + 7;
    pbVar8 = param_2 + 8;
    pbVar9 = param_2 + 9;
    pbVar10 = param_2 + 10;
    pbVar11 = param_2 + 0xb;
    pbVar12 = param_2 + 0xc;
    pbVar13 = param_2 + 0xd;
    pbVar14 = param_2 + 0xe;
    pbVar15 = param_2 + 0xf;
    param_2 = param_2 + 0x10;
    iVar17 = iVar17 + (uint)(byte)(&DAT_63605020)[(uint)bVar16 + (uint)*param_1] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar1 + (uint)param_1[1]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar2 + (uint)param_1[2]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar3 + (uint)param_1[3]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar4 + (uint)param_1[4]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar5 + (uint)param_1[5]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar6 + (uint)param_1[6]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar7 + (uint)param_1[7]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar8 + (uint)param_1[8]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar9 + (uint)param_1[9]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar10 + (uint)param_1[10]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar11 + (uint)param_1[0xb]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar12 + (uint)param_1[0xc]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar13 + (uint)param_1[0xd]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar14 + (uint)param_1[0xe]] +
             (uint)(byte)(&DAT_63605020)[(uint)*pbVar15 + (uint)param_1[0xf]];
    if (param_4 < iVar17) {
      return iVar17;
    }
    param_1 = param_1 + param_3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return iVar17;
}


