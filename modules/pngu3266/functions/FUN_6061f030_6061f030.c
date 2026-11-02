/* Module: pngu3266.dll
   Function: FUN_6061f030
   Address: 6061f030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f030(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x68) == (void *)0x0) {
    return 0x80070057;
  }
  uVar1 = FUN_6061f6d0(*(void **)((int)this + 0x68),param_1);
  return uVar1;
}


