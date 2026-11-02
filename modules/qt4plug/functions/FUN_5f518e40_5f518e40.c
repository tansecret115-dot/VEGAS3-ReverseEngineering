/* Module: qt4plug.dll
   Function: FUN_5f518e40
   Address: 5f518e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f518e40(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int in_stack_00000420;
  
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2,&param_2);
  if (-1 < iVar1) {
    if (*(int *)((int)this + 0x40) != 0x10) {
      return -0x7ff8ffa9;
    }
    iVar1 = (-(uint)(*(int *)(in_stack_00000420 + 0x3e) != 0) & 0xfff93ff3) + 0x8007000e;
  }
  return iVar1;
}


