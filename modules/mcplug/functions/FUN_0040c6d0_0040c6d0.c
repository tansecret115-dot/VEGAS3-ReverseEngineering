/* Module: mcplug.dll
   Function: FUN_0040c6d0
   Address: 0040c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040c6d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_0040c720((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_00475b60,(int)this + 0x40);
  if (iVar1 < 0) {
    return 0x80004002;
  }
  uVar2 = (**(code **)(*(int *)this + 0x3c))(this);
  return uVar2;
}


