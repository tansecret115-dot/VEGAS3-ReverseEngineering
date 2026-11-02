/* Module: erv23260.dll
   Function: FUN_637f9750
   Address: 637f9750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f9750(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)((int)this + param_2 * 4 + 0x300);
  iVar1 = ((param_1 - *(int *)((int)this + param_2 * 4 + 0x308)) - iVar1) % iVar1;
  if ((-*(int *)((int)this + param_2 * 4 + 0x324) < iVar1) &&
     (iVar2 = *(int *)((int)this + param_2 * 4 + 0x31c), iVar1 < 0)) {
    iVar1 = -iVar1;
    do {
      iVar2 = *(int *)(iVar2 + 0x8c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar2;
}


