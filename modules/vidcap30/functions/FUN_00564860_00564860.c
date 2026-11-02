/* Module: vidcap30.exe
   Function: FUN_00564860
   Address: 00564860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00564860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c9);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0xd) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x11) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x15) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x19) = uVar2;
  iVar3 = 0;
  puVar7 = &DAT_005b6900;
  iVar6 = -0xe25100;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(iVar3 + *(int *)(iVar1 + 0xd)) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x11)) = iVar6 >> 0x10;
    iVar6 = iVar6 + 0x1c5a2;
    *(undefined **)(iVar3 + *(int *)(iVar1 + 0x15)) = puVar7;
    puVar7 = puVar7 + -0xb6d2;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x19)) = iVar4;
    iVar4 = iVar4 + -0x581a;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}


