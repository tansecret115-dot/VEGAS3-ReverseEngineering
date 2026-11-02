/* Module: mp3rw.dll
   Function: FUN_004538c0
   Address: 004538c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004538c0(int param_1,undefined4 param_2)

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
  puVar1[2] = &LAB_00453930;
  puVar1[3] = FUN_00453940;
  puVar1[4] = FUN_004539b0;
  puVar1[5] = FUN_00450de0;
  puVar1[6] = &DAT_004539f0;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


