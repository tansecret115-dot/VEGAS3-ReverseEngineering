/* Module: pngu3266.dll
   Function: FUN_60622aa0
   Address: 60622aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_60622aa0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = GetThreadPriority(*(HANDLE *)((int)this + 0x10));
  *param_1 = iVar1;
  return (iVar1 != 0x7fffffff) - 1 & 0x80004005;
}


