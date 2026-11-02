/* Module: rmbe3260.dll
   Function: FUN_660559b0
   Address: 660559b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660559b0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = operator_new(0x6c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&PTR_LAB_66066da0;
    piVar2[1] = 0;
    FUN_6605c7f0(piVar2 + 2,10);
    FUN_6605c7f0(piVar2 + 9,10);
    FUN_6605c7f0(piVar2 + 0x10,10);
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    *piVar2 = (int)&PTR_FUN_66066d60;
  }
  *param_2 = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  for (puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x18))(puVar3)) {
    iVar1 = *(int *)*param_2;
    uVar4 = (**(code **)(*(int *)*puVar3 + 0x20))(puVar3[2]);
    (**(code **)(iVar1 + 0xc))(*param_2,uVar4);
  }
  return 0;
}


