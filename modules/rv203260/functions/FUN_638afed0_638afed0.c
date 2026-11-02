/* Module: rv203260.dll
   Function: FUN_638afed0
   Address: 638afed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_638afed0(void *this,byte *param_1)

{
  byte *pbVar1;
  int *piVar2;
  
  pbVar1 = param_1;
  piVar2 = FUN_638afdf0(this,param_1,(uint *)&param_1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)this == 0) {
      FUN_638afca0(this,*(uint *)((int)this + 4),1);
    }
    piVar2 = (int *)FUN_638afd70((int)this);
    piVar2[1] = (int)param_1;
    FUN_638af980(piVar2 + 2,(char *)pbVar1);
    *piVar2 = *(int *)(*(int *)this + (int)param_1 * 4);
    *(int **)(*(int *)this + (int)param_1 * 4) = piVar2;
  }
  return piVar2 + 5;
}


