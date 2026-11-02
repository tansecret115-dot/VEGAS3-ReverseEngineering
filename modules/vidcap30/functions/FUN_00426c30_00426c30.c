/* Module: vidcap30.exe
   Function: FUN_00426c30
   Address: 00426c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426c30(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x3c))((int *)param_1[0xf3],0x10ca);
    if (-1 < iVar2) {
      param_1[0x52] = param_1[0x52];
      param_1[0x53] = param_1[0x53] & 0xfffffeff;
    }
  }
  return;
}


