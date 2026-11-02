/* Module: erv23260.dll
   Function: FUN_637f8590
   Address: 637f8590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f8590(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_8;
  
  iVar1 = param_1;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 5) {
    local_8 = this;
    FUN_637f8470(this,param_1,*(byte *)(param_1 + 0x8d) + 1,&param_1,&local_8);
    if ((param_1 != *(int *)((int)this + (uint)*(byte *)(iVar1 + 0x8e) * 0x144 + 0x280)) ||
       (local_8 != *(void **)((int)this + (uint)*(byte *)(iVar1 + 0x8e) * 0x144 + 0x284))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


