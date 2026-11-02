/* Module: vegas30.exe
   Function: FUN_00569a40
   Address: 00569a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00569a40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = **(int **)(param_1 + 0x2b0);
  iVar3 = 0;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)(*(int **)(param_1 + 0x2b0))[2];
    while (iVar2 = *piVar4, (*(uint *)(iVar2 + 0xc) & 0x800) == 0) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
  }
  return iVar2;
}


