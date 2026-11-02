/* Module: erv33260.dll
   Function: FUN_6708b640
   Address: 6708b640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b640(byte *param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = param_3;
  param_3 = 4;
  pbVar3 = param_1;
  do {
    pbVar3 = pbVar3 + iVar2;
    *param_2 = (char)((int)((uint)*param_1 * 3 + 4 + (uint)*pbVar3 * 5) >> 3);
    param_2[1] = (char)((int)((uint)param_1[1] * 3 + 4 + (uint)pbVar3[1] * 5) >> 3);
    param_2[2] = (char)((int)((uint)param_1[2] * 3 + 4 + (uint)pbVar3[2] * 5) >> 3);
    pbVar1 = param_1 + 3;
    param_1 = param_1 + iVar2;
    param_2[3] = (char)((int)((uint)*pbVar1 * 3 + 4 + (uint)pbVar3[3] * 5) >> 3);
    param_3 = param_3 + -1;
    param_2 = param_2 + 0x10;
  } while (param_3 != 0);
  return;
}


