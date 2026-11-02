/* Module: vegas30.exe
   Function: FUN_004e4e90
   Address: 004e4e90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004e4e90(LPCSTR param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_0064762c + 0x70) == 0) {
    return false;
  }
  iVar1 = *(int *)(*(int *)(DAT_0064762c + 0x70) + 0xdd0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = lstrcmpiA((LPCSTR)(iVar1 + 0x170),param_1);
  return iVar1 == 0;
}


