/* Module: vegas30.exe
   Function: FUN_00562990
   Address: 00562990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562990(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_005624d0(param_1);
  if (iVar2 != 0) {
    if ((param_2 == 0) && (*(int *)(iVar2 + 0x168) != 0)) {
      *(undefined4 *)(iVar2 + 0x16c) = 0;
    }
    *(int *)(iVar2 + 0x168) = param_2;
    FUN_00562540(param_1,iVar2);
  }
  if ((param_2 == 0) && (*param_1 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
    piVar1 = (int *)*param_1;
    if ((*piVar1 != 0) && ((iVar2 = param_1[2], -1 < iVar2 && (iVar2 <= *piVar1 + -1)))) {
      *(undefined4 *)(piVar1[1] * iVar2 + 0x168 + piVar1[2]) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  }
  return;
}


