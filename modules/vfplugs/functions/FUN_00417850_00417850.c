/* Module: vfplugs.dll
   Function: FUN_00417850
   Address: 00417850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417850(undefined2 *param_1,HWND param_2)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  CHAR *pCVar3;
  undefined2 local_15c [2];
  CHAR local_158 [36];
  CHAR local_134 [128];
  CHAR local_b4 [132];
  undefined2 *local_30;
  undefined4 local_28;
  int local_14 [5];
  
  this = DAT_00494a40;
  if (DAT_00494a48 != 0) {
    return 0;
  }
  pCVar3 = local_158;
  for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3[0] = '\0';
    pCVar3[1] = '\0';
    pCVar3[2] = '\0';
    pCVar3[3] = '\0';
    pCVar3 = pCVar3 + 4;
  }
  local_30 = param_1;
  local_28 = 0x52a;
  FUN_00476060(DAT_00494a40,local_158,0xb);
  FUN_0047be50(local_134,0x80);
  FUN_0047c1e0(local_b4,0x80);
  iVar2 = FUN_00478e10(this,local_14,(int *)local_15c,1);
  if (iVar2 < 0) {
    if (iVar2 == -0x7ffbfb50) {
      local_28 = 0x32c;
    }
  }
  else {
    *param_1 = local_15c[0];
    if (iVar2 == 0x4e130) {
      local_28 = 0x31e;
    }
    else {
      if ((iVar2 == 0x4e12e) || (7 < local_14[0])) {
        return 1;
      }
      local_28 = 0x32f;
    }
  }
  uVar1 = FUN_00417550((int)local_158,param_2);
  return uVar1;
}


