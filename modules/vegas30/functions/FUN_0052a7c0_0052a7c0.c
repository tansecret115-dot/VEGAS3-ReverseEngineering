/* Module: vegas30.exe
   Function: FUN_0052a7c0
   Address: 0052a7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052a7c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *param_2;
  if (-1 < iVar3 + -1) {
    piVar2 = (int *)(param_2[2] + (iVar3 + -1) * 4);
    do {
      if (((**(byte **)(*piVar2 + 0x20c) & 1) != 0) ||
         (*(int *)(*(byte **)(*piVar2 + 0x20c) + 4) != 0)) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


