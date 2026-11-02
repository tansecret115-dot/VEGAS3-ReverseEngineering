/* Module: encn3260.dll
   Function: FUN_664c3ef0
   Address: 664c3ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c3ef0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_1;
  piVar2 = FUN_664c3de0(this,param_1,&param_1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_664c3cb0(this,*(uint *)((int)this + 8));
    }
    piVar2 = (int *)FUN_664c3d60((int)this);
    piVar2[2] = uVar1;
    piVar2[1] = param_1;
    *piVar2 = *(int *)(*(int *)((int)this + 4) + param_1 * 4);
    *(int **)(*(int *)((int)this + 4) + param_1 * 4) = piVar2;
  }
  return piVar2 + 3;
}


