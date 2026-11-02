/* Module: vegas30.exe
   Function: FUN_00562480
   Address: 00562480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00562480(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
    piVar1 = (int *)*param_1;
    if ((((*piVar1 != 0) && (iVar2 = param_1[2], -1 < iVar2)) && (iVar2 <= *piVar1 + -1)) &&
       (piVar1[1] * iVar2 + piVar1[2] != 0)) {
      uVar3 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
  }
  return uVar3;
}


