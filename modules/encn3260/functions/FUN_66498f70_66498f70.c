/* Module: encn3260.dll
   Function: FUN_66498f70
   Address: 66498f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66498f70(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  
  if ((((*(int *)((int)this + 4) != 0) && (param_1 != 0)) && (param_1 == 5)) && (param_2 != 0)) {
    this_00 = operator_new(0x78);
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66497920(this_00,*(undefined4 **)(*(int *)((int)this + 4) + 0x10),
                            *(int **)(*(int *)((int)this + 4) + 0xc));
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,param_3);
      if (-1 < iVar3) {
        piVar1 = *(int **)(*(int *)((int)this + 4) + 8);
        (**(code **)(*piVar1 + 0xc))(piVar1,0,piVar2);
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return;
}


