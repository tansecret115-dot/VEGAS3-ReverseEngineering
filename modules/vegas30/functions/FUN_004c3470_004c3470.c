/* Module: vegas30.exe
   Function: FUN_004c3470
   Address: 004c3470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18 + (param_3 + 0x1b) * 0x54);
  iVar1 = param_1 + (param_3 + 0x1b) * 0x54;
  if ((iVar2 != 0) && (param_2 != iVar2)) {
    FUN_005b89e0(iVar2);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(int *)(iVar1 + 0x18) = param_2;
  if (param_2 != 0) {
    _SfList_Sort_12(param_2,0,&LAB_004baab0);
    FUN_004ba9e0(param_1);
  }
  FUN_004530a0(param_1,0x3ff);
  return;
}


