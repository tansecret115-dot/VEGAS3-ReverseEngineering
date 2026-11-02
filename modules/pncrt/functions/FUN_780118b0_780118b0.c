/* Module: pncrt.dll
   Function: FUN_780118b0
   Address: 780118b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_780118b0(uint param_1,HANDLE param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  
  if (param_1 < DAT_78042840) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&__pioinfo)[(int)param_1 >> 5] + iVar3) == -1) {
      if (DAT_78041e38 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(__pioinfo + 0x24) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(__pioinfo + 0x48) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)((&__pioinfo)[(int)param_1 >> 5] + iVar3) = param_2;
      return 0;
    }
  }
  piVar1 = _errno();
  *piVar1 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}


