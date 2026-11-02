/* Module: encn3260.dll
   Function: FUN_664d1200
   Address: 664d1200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d1200(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == (int *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    *(int **)this = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    *(int *)((int)this + 8) = param_3;
    iVar1 = (**(code **)(**(int **)this + 0x70))(*(int **)this,param_2);
    *(int *)((int)this + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 1;
      if (param_3 == 100) {
        uVar2 = (**(code **)(**(int **)this + 0x28))(*(int **)this,param_2,0);
        *(undefined4 *)((int)this + 4) = uVar2;
        return this;
      }
      if (param_3 == 0x65) {
        uVar2 = (**(code **)(**(int **)this + 0x14))(*(int **)this,param_2,0);
        *(undefined4 *)((int)this + 4) = uVar2;
        return this;
      }
      if (param_3 == 0x66) {
        uVar2 = (**(code **)(**(int **)this + 0x10))(*(int **)this,param_2);
        *(undefined4 *)((int)this + 4) = uVar2;
        return this;
      }
      *(undefined4 *)((int)this + 8) = 200;
      *(undefined4 *)((int)this + 4) = 0;
      return this;
    }
  }
  return this;
}


