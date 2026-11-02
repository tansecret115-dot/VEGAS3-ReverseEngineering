/* Module: vegas30k.dll
   Function: FUN_010178c0
   Address: 010178c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010178c0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    uVar3 = *(uint *)(param_2 + 0x330);
    *(uint *)(param_1 + 0x18) = uVar2 - uVar3;
    *(int *)(param_1 + 0x1c) =
         (*(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x334)) - (uint)(uVar2 < uVar3);
    FUN_01016e80(param_1,param_2);
    return;
  }
  if (*(int **)(param_2 + 0x214) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_2 + 0x214);
  }
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(piVar1[2] + iVar7 * 4);
      }
      FUN_010178c0(param_1,uVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  if (*(int *)(param_2 + 0x21c) == 0) {
    _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x214),0,0xffffffff,0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    return;
  }
  _SfList_Destroy_4(*(undefined4 *)(param_2 + 0x214));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}


