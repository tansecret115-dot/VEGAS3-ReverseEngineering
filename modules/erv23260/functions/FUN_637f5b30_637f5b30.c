/* Module: erv23260.dll
   Function: FUN_637f5b30
   Address: 637f5b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5b30(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + iVar1 * 8 + 0x40) = param_1;
  *(undefined4 *)((int)this + iVar1 * 8 + 0x44) = param_2;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + 1;
  return;
}


