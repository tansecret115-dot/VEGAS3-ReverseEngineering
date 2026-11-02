/* Module: vidcap30.exe
   Function: FUN_00417550
   Address: 00417550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417550(int *param_1,uchar *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                int param_7,uint param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  uchar *puVar2;
  undefined4 local_244;
  uchar local_240 [520];
  int local_38;
  undefined4 local_34;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  puVar2 = local_240;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = puVar2 + 4;
  }
  _mbscpy(local_240,param_2);
  local_28 = param_8 & 0xffff0000;
  local_34 = param_9;
  if (param_10 == 0) {
    local_2c = FUN_004171c0(param_2,&local_38,local_240);
    iVar1 = param_3;
    if ((((param_3 == 0) && (iVar1 = local_24, param_5 < 1)) && ((param_5 < 0 || (param_4 == 0))))
       && ((param_7 < 1 && (param_7 < 0)))) {
      iVar1 = 0;
    }
    else {
      local_24 = iVar1;
      iVar1 = 1;
    }
    local_28 = iVar1 << 3 | local_28 & 0xfffffff7;
  }
  else {
    local_38 = param_10;
    local_2c = 0;
    local_24 = param_3;
    if ((((param_3 == 0) && (param_5 < 1)) && ((param_5 < 0 || (param_4 == 0)))) &&
       ((param_7 < 1 && (param_7 < 0)))) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
    local_28 = iVar1 << 3 | local_28;
  }
  local_14 = param_7;
  local_18 = param_6;
  local_1c = param_5;
  local_20 = param_4;
  local_244 = 0xffffffff;
  if (*param_1 == 0) {
    iVar1 = _SfList_CreateExZ_32(param_1,4,0xffffffff,0xffffffff,2,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else if (local_38 == 6) {
    if (*(int *)(**(int **)(*param_1 + 8) + 0x208) == 6) {
      return 0;
    }
    local_244 = 0;
  }
  iVar1 = _SfList_AllocAndInsertItem_20(*param_1,local_240,0x240,local_244,&local_244);
  return iVar1;
}


