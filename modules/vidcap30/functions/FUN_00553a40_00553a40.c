/* Module: vidcap30.exe
   Function: FUN_00553a40
   Address: 00553a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553a40(int param_1,undefined4 param_2)

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
  puVar1[2] = &LAB_00553ab0;
  puVar1[3] = FUN_00553ac0;
  puVar1[4] = FUN_00553b30;
  puVar1[5] = FUN_00550f60;
  puVar1[6] = &DAT_00553b70;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


