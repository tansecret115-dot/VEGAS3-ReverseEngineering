/* Module: pngu3266.dll
   Function: FUN_6061f6d0
   Address: 6061f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f6d0(void *this,uint param_1)

{
  void *pvVar1;
  
  if ((int)param_1 < 1) {
    return 0x80070057;
  }
  if (*(void **)((int)this + 0x1002c) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1002c));
    *(undefined4 *)((int)this + 0x1002c) = 0;
  }
  pvVar1 = operator_new(param_1);
  *(void **)((int)this + 0x1002c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0x8007000e;
  }
  *(uint *)((int)this + 0x10030) = param_1;
  *(undefined4 *)((int)this + 0x10034) = 0;
  *(void **)((int)this + 0x10038) = pvVar1;
  *(undefined4 *)((int)this + 0x10040) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1004c) = 0;
  *(undefined4 *)((int)this + 0x10048) = 1;
  return 0;
}


