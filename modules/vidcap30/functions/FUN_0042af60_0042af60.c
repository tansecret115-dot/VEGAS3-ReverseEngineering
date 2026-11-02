/* Module: vidcap30.exe
   Function: FUN_0042af60
   Address: 0042af60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042af60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  piStack_30 = *(int **)(param_1 + 0x3f0);
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  local_14 = 0;
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  (**(code **)(*piStack_30 + 0x24))();
  if (*(int **)(param_1 + 0x3f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                    (*(int **)(param_1 + 0x350),L"Color Space Converter",&local_18);
  if (iVar2 < 0) {
    iVar2 = FUN_00420930(param_1,0,*(undefined4 *)(param_1 + 0x3ec),0,0,&piStack_30,&piStack_28);
    if ((iVar2 < 0) ||
       (iVar2 = FUN_00420930(param_1,0,*(undefined4 *)(param_1 + 0x3ec),0,1,&stack0xffffffe0,
                             &piStack_2c), iVar2 < 0)) goto LAB_0042b0d5;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))
                      (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x3ec));
  }
  else {
    iVar2 = FUN_00420930(param_1,0,*(undefined4 *)(param_1 + 0x3ec),0,0,&piStack_30,&piStack_28);
    if (((iVar2 < 0) ||
        (iVar2 = FUN_00420930(param_1,0,unaff_EDI,0,1,&stack0xffffffe4,&piStack_2c), iVar2 < 0)) ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))
                          (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x3ec)), iVar2 < 0))
    goto LAB_0042b0d5;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))(*(int **)(param_1 + 0x350),unaff_EDI);
  }
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                        (*(int **)(param_1 + 0x350),piStack_30,piStack_2c), -1 < iVar2)) {
    piVar1 = *(int **)(param_1 + 0x3f0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x3ec);
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x3ec) = 0;
  }
LAB_0042b0d5:
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  piStack_30 = (int *)0x0;
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 8))(piStack_28);
  }
  piStack_28 = (int *)0x0;
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 8))(piStack_2c);
  }
  piStack_2c = (int *)0x0;
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return iVar2;
}


