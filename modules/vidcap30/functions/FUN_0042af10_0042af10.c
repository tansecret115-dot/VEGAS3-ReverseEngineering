/* Module: vidcap30.exe
   Function: FUN_0042af10
   Address: 0042af10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042af10(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_1 == 8) && ((param_1[0x52] & 0x8000000U) != 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0xd6] + 0x1c))((int *)param_1[0xd6]);
    if (-1 < iVar1) {
      param_1[0x52] = param_1[0x52] | 0x8000;
      param_1[0x53] = param_1[0x53];
    }
  }
  return iVar1;
}


