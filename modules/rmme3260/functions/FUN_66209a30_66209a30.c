/* Module: rmme3260.dll
   Function: FUN_66209a30
   Address: 66209a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66209a30(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    iVar1 = FUN_6620aff0(this);
  }
  if (((iVar1 == 0) && (*(int *)((int)this + 0x88) != 0)) && (*(int *)((int)this + 0x1c) != 0)) {
    *param_1 = **(undefined4 **)(**(int **)((int)this + 0xc) + *(int *)((int)this + 0x1c) * 4);
    return *(undefined4 *)
            (*(int *)(**(int **)((int)this + 0xc) + *(int *)((int)this + 0x1c) * 4) + 8);
  }
  return 0;
}


