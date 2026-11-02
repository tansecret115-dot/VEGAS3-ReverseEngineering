/* Module: rmme3260.dll
   Function: FUN_66216ad0
   Address: 66216ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66216ad0(void *this,undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  
  if ((param_2 == (int *)0x0) || (param_4 == (int *)0x0)) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 0x330) == 3) {
    *(undefined4 *)((int)this + 0x338) = 0;
    *(int *)((int)this + 0x33c) = param_3;
    FUN_66216ba0(this);
    return 0;
  }
  if ((*(int *)((int)this + 0x330) == 0) && (*(int *)((int)this + 0x334) == 0)) {
    *(undefined4 *)((int)this + 0x330) = 3;
    *(int **)((int)this + 0x328) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    piVar1 = *(int **)((int)this + 0x32c);
    *(undefined4 *)((int)this + 0x338) = 0;
    *(int *)((int)this + 0x33c) = param_3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x32c) = 0;
    }
    *(int **)((int)this + 0x32c) = param_4;
    (**(code **)(*param_4 + 4))(param_4);
    FUN_66216ba0(this);
    return 0;
  }
  return 0x80040009;
}


