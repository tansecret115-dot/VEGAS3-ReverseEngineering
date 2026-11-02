/* Module: vegas30.exe
   Function: FUN_004ca3b0
   Address: 004ca3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca3b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = Transport_IsRecording();
  if (((iVar2 == 0) && (iVar2 = Transport_IsPlaying(), iVar2 == 0)) && (*(int *)(param_2 + 4) == 2))
  {
    if ((*(byte *)(param_2 + 0x10) & 0x10) == 0) {
      FUN_004ca450(param_1,param_2,param_3);
      return;
    }
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar3 = (int *)0x0;
      iVar2 = 0;
    }
    else {
      piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(piVar3[2] + iVar4 * 4);
        if (((*(byte *)(iVar1 + 0x10) & 0x10) != 0) && (*(int *)(iVar1 + 4) == 2)) {
          FUN_004ca450(param_1,iVar1,param_3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return;
}


