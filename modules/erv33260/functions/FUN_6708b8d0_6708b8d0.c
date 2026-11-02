/* Module: erv33260.dll
   Function: FUN_6708b8d0
   Address: 6708b8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b8d0(byte *param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = param_3;
  param_3 = 4;
  pbVar4 = param_1;
  do {
    pbVar4 = pbVar4 + iVar3;
    *param_2 = (char)(((uint)*param_1 + (uint)pbVar4[1]) * 0xf + (uint)*pbVar4 * 0x19 + 0x20 +
                      (uint)param_1[1] * 9 >> 6);
    param_2[1] = (char)(((uint)pbVar4[2] + (uint)param_1[1]) * 0xf + (uint)pbVar4[1] * 0x19 + 0x20 +
                        (uint)param_1[2] * 9 >> 6);
    param_2[2] = (char)(((uint)pbVar4[3] + (uint)param_1[2]) * 0xf + (uint)param_1[3] * 9 + 0x20 +
                        (uint)pbVar4[2] * 0x19 >> 6);
    pbVar1 = param_1 + 3;
    pbVar2 = param_1 + 4;
    param_1 = param_1 + iVar3;
    param_2[3] = (char)(((uint)pbVar4[4] + (uint)*pbVar1) * 0xf + (uint)*pbVar2 * 9 + 0x20 +
                        (uint)pbVar4[3] * 0x19 >> 6);
    param_3 = param_3 + -1;
    param_2 = param_2 + 0x10;
  } while (param_3 != 0);
  return;
}


