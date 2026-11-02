/* Module: aviplug.dll
   Function: FUN_5f967240
   Address: 5f967240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f967240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 5;
  iVar2 = param_1 + 0xa48;
  piVar4 = (int *)(param_1 + 0x708);
  do {
    iVar3 = 6;
    piVar1 = piVar4;
    do {
      *piVar1 = iVar2;
      iVar2 = iVar2 + 0x208;
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = piVar4 + 0x12;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


