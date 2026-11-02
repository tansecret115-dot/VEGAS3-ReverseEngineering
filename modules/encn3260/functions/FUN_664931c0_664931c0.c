/* Module: encn3260.dll
   Function: FUN_664931c0
   Address: 664931c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664931c0(void *this,uint param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x30) != 0) {
    iVar1 = 5;
    do {
      FUN_66491f50(this,param_1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x20))(*(int **)((int)this + 0x14),0,param_1);
  return;
}


