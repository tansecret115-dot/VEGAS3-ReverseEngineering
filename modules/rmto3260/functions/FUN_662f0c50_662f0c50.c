/* Module: rmto3260.dll
   Function: FUN_662f0c50
   Address: 662f0c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f0c50(void *this,byte param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_FUN_66307d20;
  if (-1 < *(int *)((int)this + 4)) {
    iVar1 = _close(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    if (iVar1 < 0) {
      piVar2 = _errno();
      *(int *)((int)this + 8) = *piVar2;
    }
  }
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_66307b18;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


