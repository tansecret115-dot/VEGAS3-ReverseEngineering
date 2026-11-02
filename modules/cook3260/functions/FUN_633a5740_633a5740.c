/* Module: cook3260.dll
   Function: FUN_633a5740
   Address: 633a5740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a5740(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  iVar4 = *param_1;
  iVar2 = 7;
  piVar1 = (int *)(param_2 + 0x1c);
  piVar3 = param_1 + iVar4;
  do {
    if ((iVar4 == 0) || (iVar2 != *piVar3)) {
      iVar5 = piVar1[1];
    }
    else {
      iVar5 = piVar3[8];
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -1;
    }
    *piVar1 = iVar5;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}


