/* Module: rmme3260.dll
   Function: FUN_6622a940
   Address: 6622a940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622a940(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 0x13e) != 0) {
    return 0x80040086;
  }
  if (*(short *)((int)this + 0x38) != 0) {
    if ((*(int *)((int)this + 400) == 0) && (*(int *)((int)this + 0x194) == 0)) {
      *(undefined4 *)((int)this + 400) = 1;
      *(int *)((int)this + 0x180) = param_2;
      iVar1 = FUN_66228c30((int)this);
      if (iVar1 == 0) {
        if (*(int *)((int)this + 0x1a) < (int)(uint)*(ushort *)((int)this + 0x14)) {
          iVar1 = -0x7fffbffb;
        }
        else if (*(int *)((int)this + 0x40) < (int)(uint)*(ushort *)((int)this + 0x38)) {
          iVar1 = -0x7fffbffb;
        }
        else {
          *(int **)((int)this + 0x184) = param_1;
          (**(code **)(*param_1 + 4))(param_1);
          this_00 = operator_new(0xc);
          if (this_00 == (void *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = (int *)FUN_6622cdd0(this_00,this);
          }
          *(int **)((int)this + 0x188) = piVar2;
          (**(code **)(*piVar2 + 4))(piVar2);
          FUN_6622aa50(this);
        }
      }
      if (iVar1 < 0) {
        FUN_66217370(*(void **)((int)this + 0x180),iVar1);
      }
      return 0;
    }
    return 0x80040009;
  }
  return 0x40042;
}


