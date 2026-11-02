/* Module: vegas30.exe
   Function: FUN_00541bb0
   Address: 00541bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541bb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(param_2[2] + iVar5 * 4);
        iVar3 = FUN_0057c190(*param_1,iVar4 + 0x7c,4);
        iVar2 = *param_1;
        *param_1 = iVar2 + iVar3;
        iVar4 = FUN_0057c190(iVar2 + iVar3,iVar4,0x10);
        iVar5 = iVar5 + 1;
        *param_1 = *param_1 + iVar4;
      } while (iVar5 < iVar1);
    }
  }
  return;
}


