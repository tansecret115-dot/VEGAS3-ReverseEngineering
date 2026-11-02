/* Module: pncrt.dll
   Function: FUN_78033380
   Address: 78033380
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_78033380(double param_1,double *param_2,int param_3,double *param_4,int param_5)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  double local_18;
  double local_10;
  
  local_18 = param_2[param_3] * param_1;
  iVar3 = param_3 + -1;
  if (0 < iVar3) {
    pdVar2 = param_2 + iVar3;
    do {
      dVar1 = *pdVar2;
      pdVar2 = pdVar2 + -1;
      iVar3 = iVar3 + -1;
      local_18 = (dVar1 + local_18) * param_1;
    } while (iVar3 != 0);
  }
  local_10 = param_4[param_5] * param_1;
  iVar3 = param_5 + -1;
  if (0 < iVar3) {
    pdVar2 = param_4 + iVar3;
    do {
      dVar1 = *pdVar2;
      pdVar2 = pdVar2 + -1;
      iVar3 = iVar3 + -1;
      local_10 = (local_10 + dVar1) * param_1;
    } while (iVar3 != 0);
  }
  return (float10)(local_18 + *param_2) / ((float10)local_10 + (float10)*param_4);
}


