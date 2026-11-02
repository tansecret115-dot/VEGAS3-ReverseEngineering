/* Module: vegas30k.dll
   Function: FUN_0113bd30
   Address: 0113bd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113bd30(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  int local_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    piStack_14 = param_2;
    puStack_18 = (undefined4 *)0x113bd66;
    (**(code **)(*param_2 + 4))();
  }
  else {
    piStack_14 = *(int **)(param_1 + 0x120);
    puStack_18 = (undefined4 *)0x0;
    piStack_1c = param_2;
    param_2 = (int *)FUN_0113b500();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puStack_18 = (undefined4 *)0x113bd79;
    piStack_14 = param_2;
    FUN_0113d6b0();
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    piStack_14 = &local_8;
    puStack_18 = &DAT_011d9c40;
    piStack_1c = param_2;
    iStack_4 = (**(code **)*param_2)();
    if (iStack_4 == 0) {
      piVar4 = &local_8;
      piVar5 = &iStack_4;
      iVar1 = (**(code **)(*piStack_14 + 0x54))(piStack_14);
      if (iVar1 == 0) {
        if (piStack_14 < (int *)0x2) {
          piVar4 = (int *)*unaff_EDI;
          (**(code **)(**(int **)(param_1 + 0x160) + 0x18))(*(int **)(param_1 + 0x160));
          (**(code **)(*(int *)*puStack_18 + 8))((int *)*puStack_18);
          (**(code **)(*piVar4 + 8))(piVar4);
          (**(code **)(*param_2 + 8))(param_2);
          return 0;
        }
        piStack_1c = (int *)0x0;
        piVar3 = piStack_14;
        (**(code **)(**(int **)(param_1 + 0x160) + 0x1c))
                  (*(int **)(param_1 + 0x160),unaff_EDI,piStack_14,&piStack_1c);
        piVar2 = (int *)0x0;
        if (piVar5 != (int *)0x0) {
          do {
            (**(code **)(*(int *)piVar4[(int)piVar2] + 8))((int *)piVar4[(int)piVar2]);
            piVar2 = (int *)((int)piVar2 + 1);
          } while (piVar2 < piVar5);
          (**(code **)(*piVar3 + 8))(piVar3);
          (**(code **)(*param_2 + 8))(param_2);
          return 0;
        }
      }
      else {
        piVar3 = *(int **)(param_1 + 0x160);
        (**(code **)(*piVar3 + 0x18))(piVar3,param_2);
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      (**(code **)(*param_2 + 8))(param_2);
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 0x160) + 0x18))(*(int **)(param_1 + 0x160),param_2);
  }
  puStack_18 = (undefined4 *)0x113be91;
  piStack_14 = param_2;
  (**(code **)(*param_2 + 8))();
  return 0;
}


