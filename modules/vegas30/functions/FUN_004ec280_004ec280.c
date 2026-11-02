/* Module: vegas30.exe
   Function: FUN_004ec280
   Address: 004ec280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ec280(int *param_1,uchar *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                int param_7,uint param_8,undefined4 param_9,int param_10,undefined4 param_11,
                int param_12)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  int local_244;
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
  
  puVar3 = local_240;
  for (iVar2 = 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3 = puVar3 + 4;
  }
  _mbscpy(local_240,param_2);
  local_28 = param_8 & 0xffff0000;
  local_34 = param_9;
  if (param_10 == 0) {
    local_2c = FUN_004ebc10(param_2,&local_38,local_240);
    iVar2 = param_3;
    if ((((param_3 == 0) && (iVar2 = local_24, param_5 < 1)) && ((param_5 < 0 || (param_4 == 0))))
       && ((param_7 < 1 && (param_7 < 0)))) {
      iVar2 = 0;
    }
    else {
      local_24 = iVar2;
      iVar2 = 1;
    }
    local_28 = iVar2 << 3 | local_28 & 0xfffffff7;
  }
  else {
    local_2c = 0;
    local_38 = param_10;
    local_24 = param_3;
    if ((((param_3 == 0) && (param_5 < 1)) && ((param_5 < 0 || (param_4 == 0)))) &&
       ((param_7 < 1 && (param_7 < 0)))) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    local_28 = iVar2 << 3 | local_28;
  }
  local_14 = param_7;
  local_18 = param_6;
  local_1c = param_5;
  local_20 = param_4;
  local_244 = -1;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    iVar2 = _SfList_CreateExZ_32(param_1,4,0xffffffff,0xffffffff,2,0,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else if (local_38 == 6) {
    if ((*(int *)(*(int *)piVar1[2] + 0x208) == 6) && (param_12 == 0)) {
      return 0;
    }
    local_244 = 0;
  }
  else if ((9 < local_38) && (local_38 < 0xf)) {
    local_244 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if ((local_244 < 0) || (iVar2 + -1 < local_244)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(piVar1[2] + local_244 * 4);
      }
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x208) != 6)) break;
      local_244 = local_244 + 1;
    }
  }
  iVar2 = _SfList_AllocAndInsertItem_20(*param_1,local_240,0x240,local_244,&local_244);
  return iVar2;
}


