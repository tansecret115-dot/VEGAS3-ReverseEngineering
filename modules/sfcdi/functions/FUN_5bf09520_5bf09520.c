/* Module: sfcdi.dll
   Function: FUN_5bf09520
   Address: 5bf09520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf09520(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrcmpA(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = lstrcmpA(param_1 + 10,param_2 + 10);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44))) &&
        (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
       (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) {
      return 1;
    }
  }
  return 0;
}


