/* Module: vegas30.exe
   Function: FUN_005bddf0
   Address: 005bddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bddf0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = 0;
  puVar5 = local_48;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_48[3] = *(undefined4 *)(param_1 + 0xc);
  local_48[2] = *(undefined4 *)(param_1 + 8);
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_2c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  local_c = *(undefined4 *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x3c);
  local_10 = *(undefined4 *)(param_1 + 0x40);
  local_8 = *(int *)(param_1 + 0x1c);
  local_48[0] = 0x48;
  piVar6 = param_2;
  local_38 = uVar1;
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,local_48,0x48,0);
  iVar3 = local_8;
  if ((((-1 < iVar2) && (local_8 != 0)) &&
      (iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffffa4,4,0), -1 < iVar2)) &&
     (0 < (int)piVar6)) {
    do {
      iVar2 = FUN_005bdf00(param_2,iVar3);
      if (iVar2 < 0) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)piVar6);
  }
  return;
}


