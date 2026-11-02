/* Module: vegas30.exe
   Function: FUN_005624d0
   Address: 005624d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005624d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  piVar1 = (int *)*param_1;
  if (((*piVar1 != 0) && (iVar2 = param_1[2], -1 < iVar2)) && (iVar2 <= *piVar1 + -1)) {
    iVar3 = piVar1[1] * iVar2 + piVar1[2];
    if ((*(uint *)(piVar1[1] * iVar2 + piVar1[2]) & 0x200) == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
      return 0;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
  return 0;
}


