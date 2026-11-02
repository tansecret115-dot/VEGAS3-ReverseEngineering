/* Module: wmfplug2.dll
   Function: FUN_0040a460
   Address: 0040a460
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040a460(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_stack_0000001c;
  
  uVar2 = param_1;
  if (*(uint *)((int)this + 0x30) <= param_1) {
    return -0x7fff0001;
  }
  if (in_stack_0000001c == (int *)0x0) {
    in_stack_0000001c = (int *)0x0;
    param_1 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*in_stack_0000001c + 0x1c))();
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  this_00 = *(void **)(uVar2 * 0x20 + 0x18 + *(int *)((int)this + 0x5c));
  if (this_00 != (void *)0x0) {
    iVar1 = *(int *)(uVar2 * 0x20 + *(int *)((int)this + 0x5c));
    if (iVar1 == 1) {
      iVar3 = FUN_0040ac60(this_00,param_2,param_3,in_stack_0000001c,param_1);
    }
    else if (iVar1 == 2) {
      iVar3 = FUN_0040a860(this_00,param_2,param_3,in_stack_0000001c,param_1);
      return iVar3;
    }
  }
  return iVar3;
}


