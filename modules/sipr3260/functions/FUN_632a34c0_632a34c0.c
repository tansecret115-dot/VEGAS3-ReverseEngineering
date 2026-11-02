/* Module: sipr3260.dll
   Function: FUN_632a34c0
   Address: 632a34c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_632a34c0(void *this,byte *param_1)

{
  byte *pbVar1;
  int *piVar2;
  
  pbVar1 = param_1;
  piVar2 = FUN_632a33e0(this,param_1,(uint *)&param_1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)this == 0) {
      FUN_632a3290(this,*(uint *)((int)this + 4),1);
    }
    piVar2 = (int *)FUN_632a3360((int)this);
    piVar2[1] = (int)param_1;
    FUN_632a2f70(piVar2 + 2,(char *)pbVar1);
    *piVar2 = *(int *)(*(int *)this + (int)param_1 * 4);
    *(int **)(*(int *)this + (int)param_1 * 4) = piVar2;
  }
  return piVar2 + 5;
}


