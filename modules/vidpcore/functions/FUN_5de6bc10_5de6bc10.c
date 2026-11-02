/* Module: vidpcore.dll
   Function: FUN_5de6bc10
   Address: 5de6bc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de6bc10(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0x80070057;
  }
  FUN_5de6ae40(&local_18,param_8,param_10,param_11,param_12,param_13);
  if (((((param_4 != 0) && (param_5 != (int *)0x0)) && (*param_5 == local_18)) &&
      ((param_5[1] == local_14 && (param_5[2] == local_10)))) && (param_5[3] == local_c)) {
    uVar4 = FUN_5de6af20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
    return uVar4;
  }
  local_1c = (int *)0x0;
  iVar2 = FUN_5deca690(&local_1c,0x1c,local_10 - local_18,local_c - local_14,0,0,0);
  if (iVar2 < 0) {
    return 0x8007000e;
  }
  if (local_1c[4] == 0) {
    if (((local_1c[8] != 0) || (uVar1 = *(ushort *)((int)local_1c + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_5de6bcfc;
    iVar2 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (local_1c[4] == 3) {
      piVar5 = local_1c + 0xd;
      goto LAB_5de6bd06;
    }
LAB_5de6bcfc:
    iVar2 = local_1c[8];
  }
  piVar5 = (int *)(*local_1c + iVar2 * 4 + (int)local_1c);
LAB_5de6bd06:
  uVar3 = (uint)*(ushort *)((int)local_1c + 0xe) * local_1c[1] + 0x1f;
  uVar4 = FUN_5de6af20(param_1,param_2,param_3,piVar5,&local_18,
                       (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3,param_7,param_8,
                       param_9,param_10,param_11,param_12,param_13);
  FUN_5deca630(local_1c,0);
  return uVar4;
}


