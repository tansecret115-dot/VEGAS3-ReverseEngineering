/* Module: vegas30k.dll
   Function: FUN_0116c3d0
   Address: 0116c3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116c3d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char unaff_SI;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1b5) = puVar2;
  *puVar2 = &LAB_0116c470;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(char *)(param_1 + 0x81) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x13d);
    puVar2[4] = uVar4;
    if (unaff_SI != '\0') {
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = FUN_01167880(*(undefined4 *)(param_1 + 0x92),uVar4);
      uVar4 = (**(code **)(iVar1 + 0x10))
                        (param_1,1,0,*(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e),uVar3,uVar4
                        );
      puVar2[2] = uVar4;
      return;
    }
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                      (param_1,1,*(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e),uVar4);
    puVar2[3] = uVar4;
  }
  return;
}


