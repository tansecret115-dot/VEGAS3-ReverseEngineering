/* Module: vegas30.exe
   Function: FUN_0041a890
   Address: 0041a890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a890(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00610450;
  puStack_10 = &DAT_0060ac70;
  pvStack_14 = ExceptionList;
  piVar1 = (int *)(param_1 + 0x1c0);
  piVar2 = (int *)*piVar1;
  ExceptionList = &pvStack_14;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &pvStack_14;
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *piVar1 = 0;
  piVar2 = *(int **)(param_1 + 0x1c4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if (*(void **)(param_1 + 0x220) != (void *)0x0) {
    free(*(void **)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  FUN_0041aa30(param_1,param_2,piVar1);
  if ((*piVar1 != 0) && (FUN_0041a6d0(param_1), *(int *)(param_1 + 0x220) == 0)) {
    local_8 = 0;
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    local_8 = 0xffffffff;
    FUN_0041a96b();
    piVar1 = *(int **)(param_1 + 0x1c4);
    if (piVar1 != param_2) {
      local_8 = 1;
      (**(code **)(*piVar1 + 8))(piVar1);
      local_8 = 0xffffffff;
      FUN_0041a977();
      FUN_0041a980(unaff_EDI,unaff_ESI);
      return;
    }
    FUN_0041aa30(param_1,0,param_1 + 0x1c0);
    FUN_0041a6d0(param_1);
  }
  *(int **)(param_1 + 0x1bc) = param_2;
  FUN_00417720(param_1,0);
  FUN_00419ac0(param_1,0);
  FUN_0041a280(param_1,0);
  FUN_00419ac0(param_1,0);
  FUN_005b8630(*(undefined4 *)(param_1 + 700));
  iVar3 = *(int *)(param_1 + 0x8c);
  if (iVar3 == 4) {
    uVar7 = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x1bc);
    uVar5 = *(undefined4 *)(param_1 + 0x88);
    uVar4 = 1;
  }
  else if (iVar3 == 3) {
    uVar7 = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x1bc);
    uVar5 = *(undefined4 *)(param_1 + 0x88);
    uVar4 = 4;
  }
  else {
    if (iVar3 != 2) {
      ExceptionList = pvStack_14;
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x94);
    uVar6 = *(undefined4 *)(param_1 + 0x1bc);
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  FUN_005b41d0(uVar4,uVar5,uVar6,uVar7);
  ExceptionList = pvStack_14;
  return;
}


