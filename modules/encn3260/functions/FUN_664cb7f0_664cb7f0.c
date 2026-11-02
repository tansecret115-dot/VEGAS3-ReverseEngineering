/* Module: encn3260.dll
   Function: FUN_664cb7f0
   Address: 664cb7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cb7f0(void *this,uint param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    iVar1 = FUN_664c3eb0(*(void **)((int)this + 0x14),param_1,&local_8);
    if (iVar1 != 0) {
      FUN_664c9420(local_8);
    }
  }
  return 1;
}


