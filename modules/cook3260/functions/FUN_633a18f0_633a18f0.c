/* Module: cook3260.dll
   Function: FUN_633a18f0
   Address: 633a18f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a18f0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0x28) == 1) && (*(int *)this != 0)) &&
     (iVar1 = 0, 0 < *(int *)((int)this + 0x14))) {
    do {
      (**(code **)(**(int **)this + 0xc))
                (param_1 + iVar1 * *(int *)((int)this + 0xc) * 2,
                 iVar1 * *(int *)((int)this + 0x10) + param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x14));
  }
  return;
}


