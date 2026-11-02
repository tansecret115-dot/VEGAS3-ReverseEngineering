/* Module: vidcap30.exe
   Function: FUN_00424bb0
   Address: 00424bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424bb0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_1 == 7) && ((param_1[0x52] & 4U) != 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0xd6] + 0x24))((int *)param_1[0xd6]);
    if (-1 < iVar1) {
      param_1[0x52] = param_1[0x52] & 0xffff7fff;
      param_1[0x53] = param_1[0x53];
    }
  }
  return iVar1;
}


