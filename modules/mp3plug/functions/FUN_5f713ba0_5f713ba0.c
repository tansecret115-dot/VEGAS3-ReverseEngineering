/* Module: mp3plug.dll
   Function: FUN_5f713ba0
   Address: 5f713ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


SIZE_T * __thiscall FUN_5f713ba0(void *this,SIZE_T param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(SIZE_T *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (0 < (int)param_1) {
    uVar1 = FUN_5f681b80(param_1);
    *(undefined4 *)((int)this + 8) = uVar1;
    uVar1 = FUN_5f681b80(*(int *)this * 4);
    *(undefined4 *)((int)this + 0xc) = uVar1;
    param_1 = *(SIZE_T *)this;
  }
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      *(undefined1 *)(iVar2 + *(int *)((int)this + 8)) = 0;
      *(undefined4 *)(*(int *)((int)this + 0xc) + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


