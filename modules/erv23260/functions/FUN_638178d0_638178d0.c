/* Module: erv23260.dll
   Function: FUN_638178d0
   Address: 638178d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638178d0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    *param_1 = *param_1 + 0x80000 >> 0x14;
    param_1[1] = param_1[1] + 0x80000 >> 0x14;
    param_1[2] = param_1[2] + 0x80000 >> 0x14;
    param_1[3] = param_1[3] + 0x80000 >> 0x14;
    param_1[4] = param_1[4] + 0x80000 >> 0x14;
    param_1[5] = param_1[5] + 0x80000 >> 0x14;
    param_1[6] = param_1[6] + 0x80000 >> 0x14;
    param_1[7] = param_1[7] + 0x80000 >> 0x14;
    param_1 = param_1 + param_2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


