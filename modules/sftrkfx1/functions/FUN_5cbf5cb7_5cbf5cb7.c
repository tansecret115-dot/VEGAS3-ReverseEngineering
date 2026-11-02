/* Module: sftrkfx1.dll
   Function: FUN_5cbf5cb7
   Address: 5cbf5cb7
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbf5cb7(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    FUN_5cbf5bf3(this,param_2);
  }
  else if (param_1 == *(int *)((int)this + 4)) {
    FUN_5cbf5bb0(this,param_2);
  }
  else {
    piVar2 = (int *)FUN_5cbf5f3d((int)this + 0xc);
    if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_5cba1a90(0xc), piVar2 == (int *)0x0)) {
      return;
    }
    piVar2[2] = param_2;
    piVar1 = *(int **)(param_1 + 4);
    *piVar2 = param_1;
    piVar2[1] = (int)piVar1;
    *piVar1 = (int)piVar2;
    *(int **)(param_1 + 4) = piVar2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return;
}


