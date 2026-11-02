/* Module: mp3plug.dll
   Function: FUN_5f6d3630
   Address: 5f6d3630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f6d3630(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)((int)*(void **)this + 0x4c0) == 0) {
    FUN_5f6e4df0(*(void **)this,param_1);
  }
  iVar1 = FUN_5f6d39d0((int)this);
  FUN_5f6e4df0(*(void **)this,param_1 + iVar1);
  *(undefined4 *)((int)this + 0x24) = param_2;
  return;
}


