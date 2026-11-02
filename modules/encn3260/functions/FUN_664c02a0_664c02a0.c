/* Module: encn3260.dll
   Function: FUN_664c02a0
   Address: 664c02a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c02a0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(param_1 + -4 + iVar1 * 4) = *(undefined4 *)(*(int *)this + -4 + iVar1 * 4);
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return;
}


