/* Module: rmme3260.dll
   Function: FUN_66213e60
   Address: 66213e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66213e60(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x3a0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3a0) = 0;
  }
  *(int **)((int)this + 0x3a0) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  *(undefined2 *)((int)this + 0x39e) = *(undefined2 *)((int)this + 0x3d4);
  *(undefined2 *)((int)this + 0x39a) = *(undefined2 *)((int)this + 0x3d6);
  *(undefined4 *)((int)this + 0x396) = *(undefined4 *)((int)this + 0x3d8);
  switch(*(undefined4 *)((int)this + 0x38a)) {
  case 2:
  case 3:
    *(undefined4 *)((int)this + 0x38a) = 3;
    FUN_662133e0(this);
    return 0;
  case 6:
  case 7:
    *(undefined4 *)((int)this + 0x38a) = 7;
    FUN_662133e0(this);
    return 0;
  case 9:
  case 10:
    *(undefined4 *)((int)this + 0x38a) = 10;
  }
  FUN_662133e0(this);
  return 0;
}


