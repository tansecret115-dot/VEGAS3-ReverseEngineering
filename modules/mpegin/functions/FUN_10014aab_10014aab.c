/* Module: mpegin.dll
   Function: FUN_10014aab
   Address: 10014aab
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10014aab(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1001da60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1001d960)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1001c394 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10014b07;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10014b07:
      *(undefined4 *)((&DAT_1001d960)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10011c3e();
  *pDVar2 = 9;
  pDVar2 = FUN_10011c47();
  *pDVar2 = 0;
  return 0xffffffff;
}


