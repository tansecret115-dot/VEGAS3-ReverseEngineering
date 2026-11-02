/* Module: erv33260.dll
   Function: FUN_670711c0
   Address: 670711c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_670711c0(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  FUN_670710a0(this);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 3;
  *(undefined4 *)((int)this + 0x54) = 2;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined ***)this = &PTR_FUN_67090058;
  if (*param_2 == 0) {
    puVar1 = FUN_67072a40(param_1,this,param_2);
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


