/* Module: rmme3260.dll
   Function: FUN_66256a00
   Address: 66256a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66256a00(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(int **)((int)this + 0x14) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
    *(int *)((int)this + 0x18) = param_2;
    iVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x18))(*(int **)((int)this + 0x14));
    if ((uint)(iVar2 - param_2) < param_3) {
      iVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x18))(*(int **)((int)this + 0x14));
      *(int *)((int)this + 0x1c) = iVar2 - param_2;
      return (int)this;
    }
    *(uint *)((int)this + 0x1c) = param_3;
    return (int)this;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (int)this;
}


