/* Module: aviplug.dll
   Function: FUN_5f935550
   Address: 5f935550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f935550(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar1 = param_1;
  puVar2 = FUN_5f936c60(param_1);
  *(undefined **)(iVar1 + 0x2c) = puVar2;
  if (puVar2 == (undefined *)0x0) {
    return -0x7ff8fff2;
  }
  iVar3 = FUN_5f936b10(iVar1);
  if ((-1 < iVar3) && (puVar5 = *(undefined4 **)(iVar1 + 0x1c), puVar5 != (undefined4 *)0x0)) {
    param_1 = 0;
    piVar8 = (int *)&DAT_5f9d9d60;
    iVar4 = (**(code **)*puVar5)(puVar5,&DAT_5f9d9d60,&param_1);
    if (-1 < iVar4) {
      puVar5 = (undefined4 *)(**(code **)(*unaff_EBP + 0x20))(unaff_EBP,0x42);
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = &DAT_5f9f1110;
        puVar7 = puVar5;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      **(undefined4 **)(*(int *)(iVar1 + 0x2c) + 0x428) = puVar5;
      puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x20))(piVar8,0x42,0x28);
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = &DAT_5f9f1110;
        puVar7 = puVar5;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      *(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x2c) + 0x428) + 0x48) = puVar5;
      (**(code **)(iRam00000028 + 8))(0x28);
      return iVar3;
    }
  }
  return iVar3;
}


