/* Module: mpgmux.dll
   Function: FUN_100100d4
   Address: 100100d4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100100d4(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1001b640) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_1001b540)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_1001af90 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001012d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1001012d:
      *(HANDLE *)((&DAT_1001b540)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1000ff9f();
  *pDVar1 = 9;
  pDVar1 = FUN_1000ffa8();
  *pDVar1 = 0;
  return 0xffffffff;
}


