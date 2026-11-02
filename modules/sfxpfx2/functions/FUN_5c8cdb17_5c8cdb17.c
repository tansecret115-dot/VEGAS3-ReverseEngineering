/* Module: sfxpfx2.dll
   Function: FUN_5c8cdb17
   Address: 5c8cdb17
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8cdb17(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    FUN_5c8cda53(this,param_2);
  }
  else if (param_1 == *(int *)((int)this + 4)) {
    FUN_5c8cda10(this,param_2);
  }
  else {
    piVar2 = (int *)FUN_5c8cdd9d((int)this + 0xc);
    if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_5c892940(0xc), piVar2 == (int *)0x0)) {
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


