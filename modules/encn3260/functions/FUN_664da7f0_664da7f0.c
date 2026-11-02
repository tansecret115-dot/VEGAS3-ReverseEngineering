/* Module: encn3260.dll
   Function: FUN_664da7f0
   Address: 664da7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664da7f0(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x10) == 0) {
    return 0x80004005;
  }
  iVar1 = FUN_664ba9f0(this);
  *param_1 = iVar1;
  return 0;
}


