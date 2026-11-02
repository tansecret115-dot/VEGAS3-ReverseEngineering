/* Module: vegas30.exe
   Function: FUN_005cade0
   Address: 005cade0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cade0(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
                int param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10 [4];
  
  piVar1 = *(int **)(param_2 + 0x24);
  iVar2 = *piVar1;
  if (param_8 == (undefined4 *)0x0) {
    param_8 = local_10;
  }
  if ((param_7 < 1) && (param_7 < 0)) {
    param_6 = *(uint *)(param_2 + 0x30) - param_4;
    param_7 = (*(int *)(param_2 + 0x34) - param_5) - (uint)(*(uint *)(param_2 + 0x30) < param_4);
  }
  if ((param_7 < 1) && ((param_7 < 0 || (param_6 == 0)))) {
    return -1;
  }
  uVar5 = param_4 + param_6;
  iVar6 = param_5 + param_7 + (uint)CARRY4(param_4,param_6);
  local_20 = param_4;
  local_1c = param_5;
  local_18 = param_6;
  local_14 = param_7;
  if (param_3 < iVar2) {
    while( true ) {
      iVar4 = *(int *)(piVar1[2] + param_3 * 4);
      local_2c = *(int *)(iVar4 + 0x1c);
      local_30 = *(uint *)(iVar4 + 0x18);
      if ((iVar6 < local_2c) || ((iVar6 <= local_2c && (uVar5 <= local_30)))) break;
      if ((*(int *)(iVar4 + 0x24) < 1) &&
         ((*(int *)(iVar4 + 0x24) < 0 || (*(int *)(iVar4 + 0x20) == 0)))) {
        if ((param_5 <= local_2c) && ((param_5 < local_2c || (param_4 <= local_30)))) {
          iVar3 = iVar6 - (uint)(uVar5 == 0);
          if ((local_2c < iVar3) || ((local_2c <= iVar3 && (local_30 <= uVar5 - 1)))) {
            *param_8 = *(undefined4 *)(iVar4 + 0x18);
            param_8[1] = *(undefined4 *)(iVar4 + 0x1c);
            param_8[2] = 0;
            param_8[3] = 0;
            return param_3;
          }
        }
      }
      else {
        local_28 = *(undefined4 *)(iVar4 + 0x20);
        local_24 = *(undefined4 *)(iVar4 + 0x24);
        iVar4 = FUN_005cad00(param_8,&local_20,&local_30);
        if (iVar4 != 0) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
      if (iVar2 <= param_3) {
        return -1;
      }
    }
  }
  return -1;
}


