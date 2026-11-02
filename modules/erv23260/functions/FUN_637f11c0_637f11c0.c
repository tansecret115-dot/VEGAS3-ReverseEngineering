/* Module: erv23260.dll
   Function: FUN_637f11c0
   Address: 637f11c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_637f11c0(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  FUN_637f10a0(this);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined ***)this = &PTR_FUN_63829060;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  if (*param_2 == 0) {
    puVar1 = FUN_63802770(param_1,this,param_2);
    *(undefined4 **)((int)this + 0x40) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = 2;
      return this;
    }
    if (*param_2 != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
  }
  return this;
}


