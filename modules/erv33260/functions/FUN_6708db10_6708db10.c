/* Module: erv33260.dll
   Function: FUN_6708db10
   Address: 6708db10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708db10(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    *param_4 = (uint)*param_2 - (uint)*param_1;
    param_4[1] = (uint)param_2[1] - (uint)param_1[1];
    param_4[2] = (uint)param_2[2] - (uint)param_1[2];
    param_4[3] = (uint)param_2[3] - (uint)param_1[3];
    param_2 = param_2 + param_3;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x10;
    param_4 = param_4 + 4;
  } while (iVar1 != 0);
  return;
}


