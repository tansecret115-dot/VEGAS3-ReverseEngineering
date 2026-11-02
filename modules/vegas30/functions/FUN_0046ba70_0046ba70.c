/* Module: vegas30.exe
   Function: FUN_0046ba70
   Address: 0046ba70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ba70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0xbc8) == 0) {
    piVar2 = (int *)0x0;
    iVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_005b87b0(*(int *)(param_2 + 0xbc8));
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(piVar2[2] + iVar4 * 4);
      if ((*(uint *)(iVar1 + 0x10) & 0x100000) != 0) {
        FUN_005410b0(param_1,iVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}


