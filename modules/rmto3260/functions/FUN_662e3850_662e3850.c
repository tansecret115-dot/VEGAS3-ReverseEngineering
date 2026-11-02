/* Module: rmto3260.dll
   Function: FUN_662e3850
   Address: 662e3850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e3850(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    iVar1 = FUN_662e4d90(this);
  }
  if (((iVar1 == 0) && (*(int *)((int)this + 0x88) != 0)) && (*(int *)((int)this + 0x20) != 0)) {
    *param_1 = **(undefined4 **)(**(int **)((int)this + 0xc) + *(int *)((int)this + 0x20) * 4);
    return *(undefined4 *)
            (*(int *)(**(int **)((int)this + 0xc) + *(int *)((int)this + 0x20) * 4) + 8);
  }
  return 0;
}


