/* Module: vegas30.exe
   Function: FUN_00569920
   Address: 00569920
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00569920(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = **(int **)(param_1 + 0x2b0);
  iVar2 = -1;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int **)(param_1 + 0x2b0))[2];
    iVar2 = 0;
    while ((*(uint *)(*piVar3 + 0xc) & 0x400) == 0) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        return -1;
      }
    }
  }
  return iVar2;
}


