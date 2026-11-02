/* Module: vegas30.exe
   Function: FUN_004ae9d0
   Address: 004ae9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ae9d0(int param_1,uint *param_2,LONG *param_3,undefined4 param_4,undefined4 *param_5,
                undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 local_20;
  tagPOINT local_1c;
  int local_14 [5];
  
  uVar4 = 0;
  local_20 = 0;
  if (param_5 != (undefined4 *)0x0) {
    local_20 = *param_5;
  }
  if (param_6 != (undefined4 *)0x0) {
    uVar4 = *param_6;
  }
  if ((*param_2 & 0x100000) != 0) {
    uVar4 = 0x200000;
  }
  iVar5 = *(int *)(param_1 + 0x170);
  local_1c.x = FUN_004047d0(0x7d,0xb);
  if (local_1c.x == 0) {
    return 2;
  }
  piVar6 = (int *)(param_1 + 0xce0);
  piVar7 = local_14;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  uVar2 = 0;
  if (local_14[3] != 0) {
    uVar2 = *(undefined4 *)(local_14[3] + 4);
  }
  FUN_004ae820(local_1c.x,param_4,uVar4,uVar2);
  iVar1 = FUN_00404830(*(undefined4 *)(param_1 + 4),local_1c.x,param_3,2);
  piVar6 = local_14;
  piVar7 = (int *)(param_1 + 0xce0);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if ((iVar1 == 0) || (iVar1 == 2)) goto LAB_004aeb55;
  switch(iVar1) {
  case 0xa0c8:
    local_20 = 3;
    uVar4 = 0;
    break;
  case 0xa0c9:
    local_20 = 1;
    break;
  case 0xa0ca:
    local_20 = 2;
    break;
  case 0xa0cb:
    local_20 = 3;
    uVar4 = 0x80;
    iVar5 = 1;
    break;
  default:
    local_20 = 3;
    goto LAB_004aeb4e;
  case 0xa0cd:
    local_20 = 3;
    uVar4 = 0x100;
    iVar5 = 2;
    break;
  case 0xa0ce:
    local_20 = 2;
    uVar4 = 0x80;
    iVar5 = 1;
    break;
  case 0xa0cf:
    local_20 = 2;
    goto LAB_004aeb4e;
  case 0xa0d0:
    local_20 = 2;
    uVar4 = 0x100;
    iVar5 = 2;
    break;
  case 0xa0d1:
    iVar5 = 1;
    uVar4 = 0x80;
    local_20 = 1;
    break;
  case 0xa0d2:
    local_20 = 1;
LAB_004aeb4e:
    uVar4 = 0x40;
    iVar5 = 0;
    break;
  case 0xa0d3:
    local_20 = 1;
    uVar4 = 0x100;
    iVar5 = 2;
  }
LAB_004aeb55:
  if (iVar5 != *(int *)(param_1 + 0x170)) {
    local_1c.x = *param_3;
    local_1c.y = param_3[1];
    ScreenToClient(*(HWND *)(param_1 + 4),&local_1c);
    FUN_004ad8f0(param_1,param_2,&local_1c,iVar5);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_20;
  }
  if (param_6 == (undefined4 *)0x0) {
    return iVar1;
  }
  *param_6 = uVar4;
  return iVar1;
}


