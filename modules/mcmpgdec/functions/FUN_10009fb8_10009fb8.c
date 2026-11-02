/* Module: mcmpgdec.dll
   Function: FUN_10009fb8
   Address: 10009fb8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10009fb8(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,undefined4 *param_6
            ,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_20;
  undefined4 local_18;
  
  uVar7 = 0;
  uVar3 = FUN_1000a6c4(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    return;
  }
  uVar6 = uVar3 >> 3 & 8;
  bVar1 = (&DAT_10030fe0)[uVar6];
  if ((uVar3 & 0xc) == 0) {
    if ((((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x5fc) == 0)) ||
       (uVar7 = 1, *(int *)(param_1 + 0x5f0) != 3)) goto LAB_1000a065;
  }
  else {
    if (*(int *)(param_1 + 0x5f0) != 3) {
      uVar7 = FUN_10003a04((int *)(param_1 + 0x66c),2);
      goto LAB_1000a065;
    }
    if (*(int *)(param_1 + 0x5f8) == 0) {
      uVar7 = FUN_10003a04((int *)(param_1 + 0x66c),2);
      goto LAB_1000a065;
    }
  }
  uVar7 = 2;
LAB_1000a065:
  iVar2 = *(int *)(param_1 + 0x5f0);
  if (iVar2 == 3) {
    local_18 = 1;
    if ((uVar7 == 1) && (bVar1 < 2)) {
      local_18 = 2;
    }
    uVar5 = (uint)(uVar7 == 2);
  }
  else {
    local_18 = 1;
    if (uVar7 == 2) {
      local_18 = 2;
    }
    uVar5 = 0;
  }
  local_20 = 0;
  if (uVar5 == 0) {
    local_20 = (uint)(iVar2 == 3);
  }
  if (((iVar2 == 3) && (*(int *)(param_1 + 0x5f8) == 0)) && ((uVar3 & 3) != 0)) {
    uVar4 = FUN_10003a04((int *)(param_1 + 0x66c),1);
  }
  else {
    uVar4 = 0;
  }
  *param_2 = uVar3;
  *param_3 = uVar6;
  *param_4 = (uint)bVar1;
  *param_5 = uVar7;
  *param_6 = local_18;
  *param_7 = uVar5;
  *param_8 = (uint)(uVar7 == 3);
  *param_9 = local_20;
  *param_10 = uVar4;
  return;
}


