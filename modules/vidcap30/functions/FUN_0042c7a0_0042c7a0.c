/* Module: vidcap30.exe
   Function: FUN_0042c7a0
   Address: 0042c7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042c7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  int *piStack_10;
  int local_8 [2];
  
  piStack_10 = local_8;
  local_8[0] = 0;
  uStack_18 = *(undefined4 *)(param_1 + 0x360);
  puStack_14 = &DAT_005a1968;
  puStack_1c = &DAT_005a35a8;
  piStack_20 = (int *)&DAT_005a2438;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))(*(int **)(param_1 + 0x3b4));
  if (iVar1 < 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))
                      (*(int **)(param_1 + 0x3b4),&DAT_005a2438,&DAT_005a35f8,
                       *(undefined4 *)(param_1 + 0x360),&DAT_005a1968,&piStack_20);
    if (iVar1 < 0) {
      return 0x800404b0;
    }
  }
  puStack_1c = (undefined4 *)0x0;
  puStack_14 = (undefined *)0x0;
  piVar3 = piStack_10;
  uVar2 = (**(code **)(*piStack_20 + 0x10))(piStack_20,piStack_10,&puStack_1c,&puStack_14);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return uVar2;
}


