/* Module: pngu3266.dll
   Function: FUN_6061d660
   Address: 6061d660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061d660(void *this,void *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (-1 < *(int *)((int)this + 8)) {
    *(undefined4 *)((int)this + 4) = 0;
    (**(code **)(*(int *)this + 0x24))();
    iVar1 = _read(*(int *)((int)this + 8),param_1,param_2);
    if (iVar1 == -1) {
      *(undefined4 *)((int)this + 4) = 0x80040081;
    }
  }
  return iVar1;
}


