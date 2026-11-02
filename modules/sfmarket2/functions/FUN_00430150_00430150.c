/* Module: sfmarket2.dll
   Function: FUN_00430150
   Address: 00430150
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00430150(void *this,uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = -0x7fffbffb;
  if (*(int *)((int)this + 0x68) != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      if ((param_1 == (uchar *)0x0) || (param_2 == (uchar *)0x0)) {
        LeaveCriticalSection(lpCriticalSection);
        return -0x7ff8ffa9;
      }
      iVar1 = FUN_0042fe40(this,param_1,param_2,param_3,param_4);
      if (-1 < iVar1) {
        FUN_0042e650(this,300);
        LeaveCriticalSection(lpCriticalSection);
        return 0x4e011;
      }
    }
    else {
      iVar1 = -0x7ffb1f54;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


