/* Module: oggplug.dll
   Function: FUN_00406970
   Address: 00406970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00406970(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  piVar1 = (int *)((int)this + 0x28);
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_00406a30((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_00446a80);
  if (iVar2 < 0) {
    return 0x80004002;
  }
  iVar2 = (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,&stack0xfffffff8);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_00446be0,(int)this + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (-1 < iVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x3c))(this);
      return uVar3;
    }
  }
  (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
  *piVar1 = 0;
  return 0x80004002;
}


