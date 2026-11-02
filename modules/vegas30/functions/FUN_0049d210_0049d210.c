/* Module: vegas30.exe
   Function: FUN_0049d210
   Address: 0049d210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049d210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (piVar1 != (int *)0x0) {
      if ((param_2 < 0) || (*piVar1 + -1 < param_2)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + param_2 * 4);
      }
      if (iVar3 == 0) {
        return 0;
      }
      piVar1 = *(int **)(iVar3 + 0x24);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((param_3 < 0) || (iVar3 + -1 < param_3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + param_3 * 4);
      }
      if (iVar3 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar3 + 0x10) & 0x400) != 0) {
        return 0;
      }
      iVar2 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(param_1 + 0xcd0),0,0xffffffff,iVar3);
      if (iVar2 < 0) {
        FUN_0049ce10(param_1,iVar3);
      }
      else {
        FUN_0049d000(param_1,iVar3);
      }
      FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
      FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
      DAT_0064767c = DAT_0064767c | 4;
      return 1;
    }
  }
  return 0;
}


