/* Module: encn3260.dll
   Function: FUN_6648d180
   Address: 6648d180
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6648d180(void *this,uint param_1)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_664bbdc0(*(void **)((int)this + 8),param_1 & 0xffff,&local_8);
  return -(uint)(iVar1 != 0) & local_8;
}


