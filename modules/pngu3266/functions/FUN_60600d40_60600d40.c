/* Module: pngu3266.dll
   Function: FUN_60600d40
   Address: 60600d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_60600d40(CPNWindow *param_1)

{
  CPNIcon *this;
  int *piVar1;
  CPNText *this_00;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_60601072(param_1,*(char **)(param_1 + 0xd4),(CPNxRect *)&local_1c);
  local_18 = local_18 + 0x18;
  local_1c = local_1c + 0x38;
  local_10 = local_10 + 0x18;
  local_14 = local_14 + 0x38;
  local_8 = (local_10 - local_18) + 100;
  local_c = (local_14 - local_1c) + 0x44;
  (**(code **)(*(int *)param_1 + 0x34))(&local_c);
  (**(code **)(*(int *)param_1 + 0x20))(*(undefined4 *)(param_1 + 0xd0));
  this = operator_new(0x2e);
  if (this == (CPNIcon *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNIcon::CPNIcon(this);
  }
  *(int **)(param_1 + 0xe0) = piVar1;
  uVar2 = *(uint *)(param_1 + 0xd8) & 0xf0;
  if (uVar2 == 0x10) {
    iVar3 = 3;
  }
  else if (uVar2 == 0x20) {
    iVar3 = 4;
  }
  else if (uVar2 == 0x30) {
    iVar3 = 2;
  }
  else {
    iVar3 = local_8;
    if (uVar2 == 0x40) {
      iVar3 = 1;
    }
  }
  (**(code **)(*piVar1 + 0x78))(iVar3);
  *(undefined4 *)(param_1 + 0xe8) = 0xc;
  *(undefined4 *)(param_1 + 0xec) = 0xc;
  this_00 = operator_new(0xc0);
  if (this_00 == (CPNText *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNText::CPNText(this_00);
  }
  *(int **)(param_1 + 0xe4) = piVar1;
  (**(code **)(*piVar1 + 300))
            (0x65,param_1,local_1c,local_18,local_14 - local_1c,local_10 - local_18,0x10000200,
             *(undefined4 *)(param_1 + 0xd4),4);
  FUN_60600e6e(param_1);
  return 0;
}


