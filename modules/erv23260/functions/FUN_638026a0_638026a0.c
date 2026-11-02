/* Module: erv23260.dll
   Function: FUN_638026a0
   Address: 638026a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638026a0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x5c))
                    (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (*(int *)((int)this + 0x808) != 0) {
    iVar2 = FUN_637ffff0(iVar1);
    iVar1 = iVar1 + iVar2;
  }
  if (*(int *)((int)this + 0x800) == 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    if (iVar2 == 0) {
      iVar1 = iVar1 * *(int *)((int)this + 0x80);
    }
  }
  return iVar1;
}


