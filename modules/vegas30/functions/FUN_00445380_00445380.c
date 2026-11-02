/* Module: vegas30.exe
   Function: FUN_00445380
   Address: 00445380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445380(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_114;
  int local_110;
  int local_108;
  undefined1 local_104 [260];
  
  if (param_1 == 0) {
    return -0x7fffbffb;
  }
  if (param_2 == 0) {
    param_2 = 0x236;
  }
  iVar1 = FUN_00445160(param_1);
  iVar2 = *(int *)(param_1 + 0xb4);
  local_114 = 0;
  local_110 = 0;
  if (iVar2 != 0) {
    local_114 = *(int *)(iVar2 + 0x68);
    local_110 = *(int *)(iVar2 + 0x6c);
  }
  local_108 = 0;
  iVar2 = FUN_005b8630(*(undefined4 *)(param_1 + 0x88));
  iVar3 = FUN_005b58e0(&local_108);
  if (((((param_2 == 0x236) && (DAT_0064bd94 == *(int *)(param_1 + 0xac))) &&
       (DAT_0064bd90 == param_4)) && ((iVar1 == DAT_0063de78 && (local_114 == DAT_0063de80)))) &&
     ((local_110 == DAT_0063de84 && ((-1 < iVar3 && (local_108 == 0x236)))))) {
    return iVar3;
  }
  if (((*(byte *)(param_1 + 0x9c) & 8) != 0) || (*(char *)(iVar2 + 0x1d0) != '\0')) {
    if (param_2 == 0x236) {
      return 1;
    }
    FUN_004457c0(param_1,0);
  }
  if (param_3 == (undefined1 *)0x0) {
    FUN_00445010(param_1,iVar1,local_104,0x104);
    param_3 = local_104;
  }
  DAT_0064bd90 = param_4;
  DAT_0063de80 = local_114;
  DAT_0063de84 = local_110;
  DAT_0064bd94 = *(undefined4 *)(param_1 + 0xac);
  DAT_0063de78 = iVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 8;
  if (*(int *)(param_1 + 0xac) != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
      iVar3 = FUN_004e9f70(*(undefined4 *)(param_1 + 0x88),param_2,param_3);
      break;
    case 5:
      iVar2 = FUN_004e9f70(*(undefined4 *)(param_1 + 0x88),param_2,param_3);
      return iVar2;
    }
  }
  return iVar3;
}


