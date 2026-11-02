/* Module: erv33260.dll
   Function: FUN_6707b620
   Address: 6707b620
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6707b620(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  iVar1 = FUN_67072130(0x40);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    *param_1 = 2;
    return this;
  }
  iVar1 = FUN_67072130(0x40);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_67072140(*(void **)this);
    *param_1 = 2;
    return this;
  }
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 4;
    *(undefined4 *)(*(int *)this + -4 + uVar2) = 0;
    *(undefined4 *)(*(int *)((int)this + 8) + -4 + uVar2) = 0;
  } while (uVar2 < 0x40);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


