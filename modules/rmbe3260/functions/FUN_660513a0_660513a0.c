/* Module: rmbe3260.dll
   Function: FUN_660513a0
   Address: 660513a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660513a0(void *this,long param_1,uint param_2)

{
  long lVar1;
  
  if (*(int *)((int)this + 8) < 0) {
    return 0x80040081;
  }
  *(undefined4 *)((int)this + 4) = 0;
  lVar1 = _lseek(*(int *)((int)this + 8),param_1,param_2 & 0xffff);
  if (lVar1 < 0) {
    *(undefined4 *)((int)this + 4) = 0x80040081;
    return 0x80040081;
  }
  return 0;
}


