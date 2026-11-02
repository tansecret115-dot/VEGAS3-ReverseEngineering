/* Module: sfmarket2.dll
   Function: FUN_0045c0b0
   Address: 0045c0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045c0b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x51) == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x25);
    *(int *)(param_1 + 0x51) = iVar2;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x51);
  puVar1[2] = &LAB_0045c120;
  puVar1[3] = FUN_0045c130;
  puVar1[4] = FUN_0045c1a0;
  puVar1[5] = FUN_004595d0;
  puVar1[6] = &DAT_0045c1e0;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


