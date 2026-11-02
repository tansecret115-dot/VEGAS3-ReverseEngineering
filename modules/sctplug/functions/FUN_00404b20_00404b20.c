/* Module: sctplug.dll
   Function: FUN_00404b20
   Address: 00404b20
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_00404b20(int *param_1)

{
  LONG *lpAddend;
  int iVar1;
  
  iVar1 = param_1[0x86];
  lpAddend = param_1 + 0x88;
  if (param_1[0x88] != 0) {
    InterlockedDecrement(lpAddend);
    if (*lpAddend != 0) goto LAB_00404b76;
  }
  if (param_1[0x85] == -1) {
    if ((HANDLE)param_1[0x86] != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)param_1[0x86]);
      param_1[0x86] = -1;
    }
    param_1[0x87] = 0;
  }
LAB_00404b76:
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return *lpAddend;
}


