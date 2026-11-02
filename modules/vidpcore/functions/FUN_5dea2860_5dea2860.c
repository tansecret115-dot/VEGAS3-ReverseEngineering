/* Module: vidpcore.dll
   Function: FUN_5dea2860
   Address: 5dea2860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea2860(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 local_15c [2];
  undefined4 local_158 [9];
  undefined1 local_134 [128];
  undefined1 local_b4 [132];
  undefined2 *local_30;
  undefined4 local_28;
  int local_14 [5];
  
  if (DAT_5df42ea8 != 0) {
    return 0;
  }
  puVar3 = local_158;
  for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_30 = param_1;
  local_28 = 0x52a;
  FUN_5df0a0a0(local_158,0xb);
  FUN_5df0fe90(local_134,0x80);
  FUN_5df10220(local_b4,0x80);
  iVar2 = FUN_5df0ce50(local_14,local_15c,1);
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
  uVar1 = FUN_5dea2560(local_158,param_2);
  return uVar1;
}


