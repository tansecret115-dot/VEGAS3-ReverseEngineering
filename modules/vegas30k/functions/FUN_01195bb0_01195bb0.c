/* Module: vegas30k.dll
   Function: FUN_01195bb0
   Address: 01195bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01195bb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_ESI;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    return 0;
  case 0xd:
    break;
  default:
    return param_3;
  }
  iVar1 = param_1[0x1a6];
  param_1[299] = *param_5;
  iVar2 = param_1[0x1a7];
  param_1[300] = param_5[1];
  uVar3 = param_1[2];
  param_1[0x12d] = param_5[2];
  param_1[0x12e] = param_5[3];
  *(short *)(param_1 + 0x12f) = (short)param_5[4];
  local_14 = *(undefined4 *)((int)param_1 + 0x4be);
  local_10 = *(undefined4 *)((int)param_1 + 0x4c2);
  local_c = *(undefined4 *)((int)param_1 + 0x4c6);
  local_8 = *(undefined4 *)((int)param_1 + 0x4ca);
  iVar4 = param_1[0x194];
  local_4 = *(undefined2 *)((int)param_1 + 0x4ce);
  local_18 = uVar3 & 0x10;
  if (local_18 != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  if ((param_1[2] & 8U) != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  if ((param_1[2] & 4U) != 0) {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  if ((param_1[2] & 2U) != 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  if ((param_1[2] & 1U) != 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
    (**(code **)(*param_1 + 0xe4))(param_1,&local_18,iVar4,unaff_ESI,param_4,param_2);
  }
  if ((uVar3 & 2) != 0) {
    (**(code **)(*param_1 + 0xfc))(param_1,iVar1,iVar2);
  }
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 4) != 0) {
      (**(code **)(*param_1 + 0x114))(param_1,iVar1,iVar2);
    }
  }
  else {
    (**(code **)(*param_1 + 0x114))(param_1,iVar1,iVar2);
    if (unaff_ESI != 0) {
      (**(code **)(*param_1 + 0x134))(param_1,iVar1,iVar2);
      (**(code **)(*param_1 + 300))(param_1,iVar1,iVar2);
      return 0;
    }
  }
  return 0;
}


