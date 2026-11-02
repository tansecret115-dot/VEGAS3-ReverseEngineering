/* Module: vidcap30.exe
   Function: FUN_004263b0
   Address: 004263b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004263b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,0);
    }
    iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x3c))((int *)param_1[0xf3],0x10c8);
    if (-1 < iVar2) {
      param_1[0x52] = param_1[0x52];
      param_1[0x53] = param_1[0x53] | 0x100;
    }
  }
  return;
}


