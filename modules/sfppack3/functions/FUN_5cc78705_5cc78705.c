/* Module: sfppack3.dll
   Function: FUN_5cc78705
   Address: 5cc78705
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc78705(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_5cc78555(this,param_2);
  }
  else if (param_1 == *(int **)this) {
    FUN_5cc78598(this,param_2);
  }
  else {
    piVar2 = (int *)FUN_5cc788e2((int)this + 0xc);
    if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_5cc31fc0(0xc), piVar2 == (int *)0x0)) {
      return;
    }
    piVar2[2] = param_2;
    iVar1 = *param_1;
    *piVar2 = iVar1;
    piVar2[1] = (int)param_1;
    *param_1 = (int)piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return;
}


