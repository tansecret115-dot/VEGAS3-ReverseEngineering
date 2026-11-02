/* Module: rmto3260.dll
   Function: FUN_662c3570
   Address: 662c3570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3570(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar2 = FUN_662eda80(*(void **)(param_1 + 0x38),(uint)param_2);
  piVar3 = (int *)FUN_662ed950((int)puVar2);
  iVar1 = *piVar3;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (*(int *)(iVar1 + 0x12) == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + -0x10) + 0x8c))
                      (param_1 + -0x10,*(undefined4 *)(iVar1 + 8),param_3,param_4,&param_4);
    return uVar4;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + -0x10) + 0x88))(param_1 + -0x10,param_3,param_4);
  return uVar4;
}


