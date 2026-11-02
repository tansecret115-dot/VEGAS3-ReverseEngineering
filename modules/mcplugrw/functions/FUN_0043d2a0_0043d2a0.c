/* Module: mcplugrw.dll
   Function: FUN_0043d2a0
   Address: 0043d2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d2a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) == 3) {
    piVar1 = *(int **)(param_1 + 0x10);
    iVar5 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) {
        return 0;
      }
      piVar2 = *(int **)(piVar1[2] + iVar5 * 4);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) break;
      iVar5 = iVar5 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


