/* Module: vegas30.exe
   Function: FUN_004a4390
   Address: 004a4390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4390(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0xbc8) = param_2;
  *(undefined4 *)(param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  *(undefined4 *)(param_1 + 0xce0) = 0;
  *(undefined4 *)(param_1 + 0xce4) = 0;
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xcec) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  puVar3 = &DAT_0064b110;
  puVar4 = (undefined4 *)(param_1 + 0x20);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004a4020(param_1,DAT_006476c8,DAT_006476cc);
  FUN_00469280(param_1);
  uVar5 = 1;
  puVar3 = (undefined4 *)(param_1 + 0xbd8);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_005b8970(param_2);
  FUN_004c33d0(param_1,uVar1,uVar5);
  uVar1 = 0;
  uVar5 = FUN_005b8980(param_2);
  FUN_004c3470(param_1,uVar5,uVar1);
  uVar1 = 1;
  uVar5 = FUN_005b8990(param_2);
  FUN_004c3470(param_1,uVar5,uVar1);
  uVar1 = 2;
  uVar5 = FUN_005b89b0(param_2);
  FUN_004c3470(param_1,uVar5,uVar1);
  FUN_0047c3d0(param_1 + 0xc78,0,0,0,1);
  FUN_0047c3d0(param_1 + 0xc78,*(undefined4 *)(param_1 + 4),&LAB_00497c40,
               *(undefined4 *)(param_1 + 0xbc8),0);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfff7ffff;
  *(undefined4 *)(param_1 + 0xcc8) = DAT_00647e38;
  *(undefined4 *)(param_1 + 0xccc) = DAT_00647e3c;
  FUN_004ca990(param_1);
  FUN_00453970(param_1,0,0,1);
  FUN_00455090(param_1,0xf);
  FUN_00454110(param_1);
  FUN_004c3f50(param_1,1);
  return;
}


