/* Module: vidcap30.exe
   Function: FUN_00426360
   Address: 00426360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426360(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0xf3] + 0x3c))((int *)param_1[0xf3],0x10c9);
    if (-1 < iVar1) {
      param_1[0x52] = param_1[0x52];
      param_1[0x53] = param_1[0x53] & 0xfffffeff;
    }
  }
  return iVar1;
}


