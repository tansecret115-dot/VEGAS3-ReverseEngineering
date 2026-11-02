/* Module: pngu3266.dll
   Function: FUN_60622a70
   Address: 60622a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_60622a70(void *this,int param_1)

{
  BOOL BVar1;
  
  BVar1 = SetThreadPriority(*(HANDLE *)((int)this + 0x10),param_1);
  return (-(uint)(BVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


