/* Module: rmme3260.dll
   Function: FUN_6621a170
   Address: 6621a170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621a170(void *this,int *param_1,undefined4 param_2,void *param_3)

{
  if ((param_1 != (int *)0x0) && (param_3 != (void *)0x0)) {
    if (*(int *)((int)this + 0x30) == 0) {
      FUN_6622b1a0(param_3,-0x7ffbf036,0);
      return 0;
    }
    if (*(int *)((int)this + 0x34) == 0) {
      *(int **)((int)this + 0x3c) = param_1;
      (**(code **)(*param_1 + 4))(param_1);
      *(void **)((int)this + 0x40) = param_3;
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = param_2;
    FUN_6621a1e0((int)this);
    return 0;
  }
  return 0x80004005;
}


