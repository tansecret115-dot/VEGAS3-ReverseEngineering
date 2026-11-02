/* Module: erv33260.dll
   Function: FUN_6707b7e0
   Address: 6707b7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6707b7e0(void *this,uint param_1,int param_2,int param_3,undefined4 param_4)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  int local_8;
  
  uVar2 = *(uint *)((int)this + 4);
  local_8 = 0;
  if (param_3 + uVar2 <= uVar2) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_3;
    return 0;
  }
  do {
    this_00 = (void *)FUN_67072130(0x2c);
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_6707b4a0(this_00,0,param_1,param_2,param_4,&local_8);
    }
    *(undefined4 **)(*(int *)this + uVar2 * 4) = puVar1;
    if (*(int *)(*(int *)this + uVar2 * 4) == 0) {
      return 2;
    }
    if (local_8 != 0) {
      puVar1 = *(undefined4 **)(*(int *)this + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_6707b5e0(puVar1);
        FUN_67072140(puVar1);
      }
      *(undefined4 *)(*(int *)this + uVar2 * 4) = 0;
      return local_8;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < (uint)(param_3 + *(int *)((int)this + 4)));
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_3;
  return 0;
}


