/* Module: vegas30.exe
   Function: FUN_005b0fb0
   Address: 005b0fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005b0fb0(int *param_1)

{
  ushort uVar1;
  
  if (param_1[4] == 0) {
    if (((param_1[8] == 0) && (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 != 0)) && (uVar1 < 9))
    {
      return (int *)(*param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)param_1);
    }
  }
  else if (param_1[4] == 3) {
    return param_1 + 0xd;
  }
  return (int *)(*param_1 + param_1[8] * 4 + (int)param_1);
}


