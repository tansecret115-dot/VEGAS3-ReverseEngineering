/* Module: sftrkfx1.dll
   Function: FUN_5cbc63f0
   Address: 5cbc63f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbc63f0(int param_1,double param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(double *)(param_1 + 0x88)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  log2((float10)param_2);
  iVar1 = ftol();
  iVar2 = iVar2 - iVar1;
  if (iVar2 < 3) {
    iVar2 = 2;
  }
  return iVar2;
}


