/* Module: rv103260.dll
   Function: FUN_636a41c0
   Address: 636a41c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a41c0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(code **)((int)this + 0x58) == (code *)0x0) {
    return 0x6f;
  }
  iVar1 = (**(code **)((int)this + 0x58))(param_1,(undefined4 *)((int)this + 0x70));
  if (iVar1 == 0) {
    if (*(code **)((int)this + 0x5c) != (code *)0x0) {
      iVar1 = (**(code **)((int)this + 0x5c))
                        (*(undefined4 *)((int)this + 0x70),*(int *)((int)this + 0x6c) + 0x194);
      return iVar1;
    }
    iVar1 = 0x6f;
  }
  return iVar1;
}


