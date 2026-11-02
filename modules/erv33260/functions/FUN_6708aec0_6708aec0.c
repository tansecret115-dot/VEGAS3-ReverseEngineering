/* Module: erv33260.dll
   Function: FUN_6708aec0
   Address: 6708aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708aec0(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = param_4;
  iVar7 = iVar5;
  if (0 < param_4) {
    do {
      do {
        pbVar1 = param_1 + 1;
        bVar4 = *param_1;
        pbVar2 = param_1 + 2;
        pbVar3 = param_1 + -1;
        param_1 = param_1 + 1;
        puVar6 = param_2 + 1;
        iVar7 = iVar7 + -1;
        *param_2 = (&DAT_67091508)
                   [(int)(((((uint)bVar4 + (uint)*pbVar1 * 2) * 6 - (uint)*pbVar2) - (uint)*pbVar3)
                         + 8) >> 4];
        param_2 = puVar6;
      } while (iVar7 != 0);
      param_2 = puVar6 + (0x10 - iVar5);
      param_1 = param_1 + (param_3 - iVar5);
      param_4 = param_4 + -1;
      iVar7 = iVar5;
    } while (param_4 != 0);
  }
  return;
}


