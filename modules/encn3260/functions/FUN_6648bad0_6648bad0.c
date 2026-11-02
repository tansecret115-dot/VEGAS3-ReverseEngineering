/* Module: encn3260.dll
   Function: FUN_6648bad0
   Address: 6648bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648bad0(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)((int)this + 0x6e) + 4))();
  iVar1 = *(int *)((int)this + 0x58) + 1;
  *(int *)((int)this + 0x58) = iVar1;
  FUN_6648bd90(this,param_1,iVar1);
  (**(code **)(**(int **)((int)this + 0x6e) + 8))();
  return iVar1;
}


