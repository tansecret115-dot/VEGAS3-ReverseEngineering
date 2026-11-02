/* Module: encn3260.dll
   Function: FUN_6648d2d0
   Address: 6648d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648d2d0(void *this,uint param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_664bbdc0(*(void **)((int)this + 8),param_1 & 0xffff,&local_8);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(local_8 + 0x1a);
}


