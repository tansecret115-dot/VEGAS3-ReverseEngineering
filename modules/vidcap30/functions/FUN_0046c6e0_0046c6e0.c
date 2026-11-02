/* Module: vidcap30.exe
   Function: FUN_0046c6e0
   Address: 0046c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0046c6e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = 4;
  bVar3 = true;
  piVar2 = (int *)(param_1 + 0x168);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *piVar2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  return (uint)!bVar3;
}


