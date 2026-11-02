/* Module: rnco3260.dll
   Function: FUN_6375ca20
   Address: 6375ca20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375ca20(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6,undefined4 param_7,int param_8,uint param_9,int param_10,undefined4 param_11
            ,byte param_12,undefined4 param_13,undefined4 param_14,int param_15,undefined *param_16)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = param_8;
  uVar3 = param_1;
  local_8 = param_9;
  uVar1 = param_6 + param_1;
  param_8 = param_10;
  local_10 = param_1;
  param_1 = param_5;
  iVar2 = param_15 + local_c;
  iVar5 = param_15 >> 1;
  iVar4 = iVar2;
  uVar6 = uVar1;
  if (((param_12 & 1) != 0) && (param_5 != 0)) {
    (*(code *)param_16)(uVar3,&DAT_6378b758,param_2,param_4,local_c,local_c,param_9,param_10,
                        param_11,param_13);
    iVar4 = iVar2 + param_15;
    uVar6 = uVar1 + param_6;
    local_8 = iVar5 + param_9;
    param_8 = iVar5 + param_10;
    param_1 = param_5 - 1;
    local_10 = uVar1;
    local_c = iVar2;
  }
  if (1 < (int)param_1) {
    param_9 = param_1 >> 1;
    do {
      (*(code *)param_16)(local_10,uVar6,param_2,param_4,local_c,iVar4,local_8,param_8,param_11,
                          param_13);
      local_10 = local_10 + param_6 * 2;
      uVar6 = uVar6 + param_6 * 2;
      local_c = local_c + param_15 * 2;
      iVar4 = iVar4 + param_15 * 2;
      local_8 = local_8 + iVar5;
      param_8 = param_8 + iVar5;
      param_1 = param_1 - 2;
      param_9 = param_9 - 1;
    } while (param_9 != 0);
  }
  if (param_1 != 0) {
    (*(code *)param_16)(local_10,&DAT_6378b758,param_2,param_4,local_c,local_c,local_8,param_8,
                        param_11,param_13);
  }
  return;
}


