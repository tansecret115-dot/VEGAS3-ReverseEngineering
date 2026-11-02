/* Module: vegas30.exe
   Function: FUN_004354b0
   Address: 004354b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004354b0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  bVar3 = -(param_3 != 0) & 2;
  FUN_005cb070(param_2,bVar3,3);
  bVar5 = *(int *)(param_2 + 4) == 3;
  if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
    piVar2 = (int *)FUN_005b87b0(param_1);
    if (piVar2 == (int *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = *piVar2;
    }
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(piVar2[2] + iVar4 * 4);
        if (((*(byte *)(iVar1 + 0x10) & 0x10) != 0) && (iVar1 != param_2)) {
          if (*(int *)(iVar1 + 4) == 3) {
            bVar5 = true;
          }
          FUN_005cb070(iVar1,bVar3,3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
  }
  if (bVar5) {
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  FUN_005b4010(param_1);
  return;
}


