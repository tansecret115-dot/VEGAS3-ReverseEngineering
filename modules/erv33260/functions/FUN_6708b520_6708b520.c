/* Module: erv33260.dll
   Function: FUN_6708b520
   Address: 6708b520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b520(byte *param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    *param_2 = (char)((int)((uint)*param_1 * 3 + 4 + (uint)param_1[1] * 5) >> 3);
    param_2[1] = (char)((int)((uint)param_1[2] * 5 + 4 + (uint)param_1[1] * 3) >> 3);
    param_2[2] = (char)((int)((uint)param_1[2] * 3 + 4 + (uint)param_1[3] * 5) >> 3);
    pbVar1 = param_1 + 4;
    pbVar2 = param_1 + 3;
    param_1 = param_1 + param_3;
    param_2[3] = (char)((int)((uint)*pbVar1 * 5 + 4 + (uint)*pbVar2 * 3) >> 3);
    iVar3 = iVar3 + -1;
    param_2 = param_2 + 0x10;
  } while (iVar3 != 0);
  return;
}


