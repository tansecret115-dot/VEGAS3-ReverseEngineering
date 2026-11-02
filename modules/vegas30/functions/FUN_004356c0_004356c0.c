/* Module: vegas30.exe
   Function: FUN_004356c0
   Address: 004356c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004356c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = -(param_3 != 0) & 8;
  FUN_005cb070(param_2,bVar4,8);
  if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
    piVar2 = (int *)FUN_005b87b0(param_1);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(piVar2[2] + iVar5 * 4);
        if (((*(byte *)(iVar1 + 0x10) & 0x10) != 0) && (iVar1 != param_2)) {
          FUN_005cb070(iVar1,bVar4,8);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return;
}


