/* Module: erv13260.dll
   Function: FUN_635f11f0
   Address: 635f11f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635f11f0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int local_4;
  
  local_4 = 8;
  iVar9 = 0;
  do {
    bVar8 = *param_2;
    pbVar1 = param_2 + 1;
    pbVar2 = param_2 + 2;
    pbVar3 = param_2 + 3;
    pbVar4 = param_2 + 4;
    pbVar5 = param_2 + 5;
    pbVar6 = param_2 + 6;
    pbVar7 = param_2 + 7;
    param_2 = param_2 + 0x10;
    iVar9 = iVar9 + (uint)(byte)(&DAT_63605020)[(uint)bVar8 + (uint)*param_1] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar1 + (uint)param_1[1]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar2 + (uint)param_1[2]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar3 + (uint)param_1[3]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar4 + (uint)param_1[4]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar5 + (uint)param_1[5]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar6 + (uint)param_1[6]] +
            (uint)(byte)(&DAT_63605020)[(uint)*pbVar7 + (uint)param_1[7]];
    if (param_4 < iVar9) {
      return iVar9;
    }
    param_1 = param_1 + param_3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return iVar9;
}


