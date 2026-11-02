/* Module: pncrt.dll
   Function: FUN_78011960
   Address: 78011960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78011960(uint param_1)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_78042840) {
    iVar1 = (&__pioinfo)[(int)param_1 >> 5];
    iVar4 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) && (*(int *)(iVar1 + iVar4) != -1)) {
      if (DAT_78041e38 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_780119c7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_780119c7:
      *(undefined4 *)((&__pioinfo)[(int)param_1 >> 5] + iVar4) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return 0xffffffff;
}


