/* Module: vidcap30.exe
   Function: FUN_00421b90
   Address: 00421b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421b90(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_1 == 8) && ((param_1[0x52] & 0x8000000U) != 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0xd6] + 0x24))((int *)param_1[0xd6]);
    if (-1 < iVar1) {
      param_1[0x52] = param_1[0x52] & 0xffff7fff;
      param_1[0x53] = param_1[0x53];
    }
  }
  return iVar1;
}


