/* Module: sfxpfx1.dll
   Function: FUN_5c949510
   Address: 5c949510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c949510(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    (**(code **)(*(int *)this + 0x3c))();
  }
  *(undefined4 **)((int)this + 0x30) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_5c98ba90,(undefined4 *)((int)this + 0x2c));
  if (iVar2 < 0) {
    return 0x80004002;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar1 = *(int **)((int)this + 0x2c);
    (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x14),0x7fbc);
    (**(code **)(*(int *)this + 0x54))(0);
  }
  return 0;
}


