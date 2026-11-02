/* Module: vegas30.exe
   Function: FUN_00511620
   Address: 00511620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511620(undefined4 param_1,HDC param_2,int *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  float fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  RECT local_10;
  
  fVar7 = (float10)FUN_005a5f80(param_4 + 0x24);
  local_5c = (float)fVar7;
  FUN_005a5ff0(param_4 + 0x24);
  local_70 = (float)ftol();
  fVar6 = local_5c * _DAT_0061a498;
  local_48 = 0x15;
  local_44 = 0x15;
  local_54 = local_5c * _DAT_0061a494;
  local_50 = (float)(extraout_ST1 * (float10)_DAT_0061a498);
  local_4c = (float)(extraout_ST1 * (float10)_DAT_0061a494);
  local_10.left = (LONG)(float)(extraout_ST0 * (float10)local_5c);
  local_10.top = (LONG)(float)(extraout_ST0 * extraout_ST1);
  local_64 = (float)local_10.left * *(float *)(param_4 + 8);
  if (DAT_00647e50 != 0) {
    local_64 = local_64 * (float)*(double *)(param_4 + 0x80);
  }
  local_5c = (float)local_10.top * *(float *)(param_4 + 8);
  if (local_64 <= _DAT_00619ab0) {
    local_64 = 1.0;
  }
  if (local_5c <= _DAT_00619ab0) {
    local_5c = 1.0;
  }
  iVar4 = param_3[2];
  iVar1 = *param_3;
  for (; ((iVar3 = ftol(), iVar4 - iVar1 < iVar3 ||
          (iVar3 = ftol(), param_3[3] - param_3[1] < iVar3)) && (2 < (int)local_70));
      local_70 = (float)((int)local_70 / 2)) {
  }
  if ((int)local_70 < 2) {
    local_70 = 1.4013e-45;
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_0050d680(&local_30,&local_40,param_4,&local_48);
  FUN_0050d680(&local_20,&local_38,param_4,&local_48);
  fVar2 = fVar6;
  if ((fVar6 <= local_30) && (fVar2 = local_30, local_54 < local_30)) {
    local_30 = local_54;
    fVar2 = local_30;
  }
  local_30 = fVar2;
  if (local_50 <= local_2c) {
    if (local_4c < local_2c) {
      local_2c = local_4c;
    }
  }
  else {
    local_2c = local_50;
  }
  if ((fVar6 <= local_20) && (fVar6 = local_20, local_54 < local_20)) {
    local_20 = local_54;
    fVar6 = local_20;
  }
  local_20 = fVar6;
  local_50 = (float)(int)local_70;
  local_4c = local_50 * (float)local_10.top;
  iVar4 = ftol();
  local_54 = (float)(iVar4 + -1);
  local_30 = (float)((float10)(int)local_54 * extraout_ST0_00);
  iVar4 = ftol();
  local_54 = (float)(iVar4 + -1);
  local_2c = (float)(int)local_54 * local_4c;
  iVar4 = ftol();
  local_54 = (float)(iVar4 + 1);
  local_20 = (float)((float10)(int)local_54 * extraout_ST0_01);
  iVar4 = ftol();
  local_54 = (float)(iVar4 + 1);
  local_1c = (float)(int)local_54 * local_4c;
  FUN_0050d890(&local_68,&local_6c,&local_30,param_4,&local_48);
  FUN_0050d890(&local_60,&local_58,&local_20,param_4,&local_48);
  DVar5 = GetSysColor(0xf);
  local_54 = (float)SetBkColor(param_2,DVar5);
  local_70 = local_6c;
  if (local_6c <= local_58) {
    local_4c = local_50 * local_5c;
    do {
      iVar4 = ftol();
      fVar6 = (float)ftol();
      local_10.left = ftol();
      local_10.right = local_10.left + iVar4;
      local_10.bottom = (int)fVar6 + 1;
      local_10.top = (LONG)fVar6;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      local_70 = local_4c + local_70;
    } while (local_70 <= local_58);
  }
  local_74 = local_68;
  if (local_68 <= local_60) {
    local_4c = local_50 * local_64;
    do {
      iVar4 = ftol();
      fVar6 = (float)ftol();
      local_10.left = ftol();
      local_10.right = local_10.left + 1;
      local_10.bottom = (int)fVar6 + iVar4;
      local_10.top = (LONG)fVar6;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      local_74 = local_4c + local_74;
    } while (local_74 <= local_60);
  }
  DVar5 = GetSysColor(0x10);
  SetBkColor(param_2,DVar5);
  local_70 = local_6c;
  if (local_6c <= local_58) {
    do {
      local_74 = local_68;
      if (local_68 <= local_60) {
        do {
          fVar6 = (float)ftol();
          local_10.left = ftol();
          local_10.right = local_10.left + 1;
          local_10.bottom = (int)fVar6 + 1;
          local_10.top = (LONG)fVar6;
          ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
          local_74 = local_74 + local_64;
        } while (local_74 <= local_60);
      }
      local_70 = local_70 + local_5c;
    } while (local_70 <= local_58);
  }
  SetBkColor(param_2,(COLORREF)local_54);
  return;
}


