/* Module: enlv3260.dll
   Function: FUN_661d1790
   Address: 661d1790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d1790(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 8);
  if ((((piVar1 == (int *)0x0) || (iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1), -1 < iVar3)) &&
      (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0)) &&
     (DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),0), DVar2 == 0)) {
    return -0x7fffbffb;
  }
  return iVar3;
}


