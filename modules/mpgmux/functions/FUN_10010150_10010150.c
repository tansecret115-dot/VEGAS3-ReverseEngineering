/* Module: mpgmux.dll
   Function: FUN_10010150
   Address: 10010150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10010150(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1001b640) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1001b540)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1001af90 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100101ac;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100101ac:
      *(undefined4 *)((&DAT_1001b540)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000ff9f();
  *pDVar2 = 9;
  pDVar2 = FUN_1000ffa8();
  *pDVar2 = 0;
  return 0xffffffff;
}


