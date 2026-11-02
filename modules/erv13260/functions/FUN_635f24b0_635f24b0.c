/* Module: erv13260.dll
   Function: FUN_635f24b0
   Address: 635f24b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f24b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [5];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  if ((param_3 < 0x140) || (param_4 < 0xf0)) {
    if (param_5 < 0x10) {
      local_8 = (uint)(9 < param_5);
    }
    else {
      local_8 = 2;
    }
    if (param_2 == 0) {
      local_4c[0] = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 4) {
      local_4c[0] = 2;
      local_4c[1] = 1;
      local_4c[2] = 1;
      local_38 = 4;
      local_34 = 2;
      local_28 = 1;
      local_24 = 1;
      local_18 = 1;
      local_14 = 1;
      goto LAB_635f272d;
    }
    if (param_2 < 6) {
      local_4c[0] = 2;
      local_4c[1] = 4;
      local_4c[2] = 1;
      local_38 = 4;
      local_34 = 3;
      local_28 = 1;
      local_24 = 1;
      local_18 = 0;
      local_14 = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 8) {
      local_4c[0] = 2;
      local_4c[1] = 1;
      local_4c[2] = 1;
      local_38 = 5;
      local_34 = 2;
      local_28 = 1;
      local_24 = 1;
      local_18 = 1;
      local_14 = 1;
      goto LAB_635f272d;
    }
    if (param_2 < 10) {
      local_4c[0] = 2;
      local_4c[1] = 1;
      local_4c[2] = 1;
      local_38 = 6;
      local_34 = 3;
      local_28 = 1;
      local_24 = 1;
      local_18 = 1;
      local_14 = 1;
      goto LAB_635f272d;
    }
    if (param_2 < 0xc) {
      local_4c[0] = 2;
      local_4c[1] = 1;
      local_4c[2] = 1;
      local_38 = 8;
      local_34 = 6;
      local_28 = 1;
      local_24 = 1;
      local_18 = 1;
      local_14 = 1;
      goto LAB_635f272d;
    }
    if (0xd < param_2) goto LAB_635f2715;
    local_4c[0] = 2;
  }
  else {
    local_8 = 0;
    if (param_2 == 0) {
      local_4c[0] = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 4) {
      local_4c[0] = 2;
      local_4c[1] = 4;
      local_4c[2] = 1;
      local_38 = 4;
      local_34 = 2;
      local_28 = 1;
      local_24 = 1;
      local_18 = 0;
      local_14 = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 6) {
      local_4c[0] = 2;
      local_4c[1] = 4;
      local_4c[2] = 1;
      local_38 = 8;
      local_34 = 2;
      local_28 = 1;
      local_24 = 1;
      local_18 = 0;
      local_14 = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 8) {
      local_4c[0] = 3;
      local_4c[1] = 4;
      local_4c[2] = 2;
      local_4c[3] = 1;
      local_38 = 0xc;
      local_34 = 2;
      local_30 = 1;
      local_28 = 1;
      local_24 = 1;
      local_20 = 1;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      goto LAB_635f272d;
    }
    if (param_2 < 0xb) {
      local_4c[0] = 2;
      local_4c[1] = 2;
      local_4c[2] = 1;
      local_38 = 0xe;
      local_34 = 1;
      local_28 = 1;
      local_24 = 1;
      local_18 = 0;
      local_14 = 0;
      goto LAB_635f272d;
    }
    if (0xd < param_2) {
LAB_635f2715:
      local_38 = 0xf;
      local_4c[0] = 1;
      local_4c[1] = 1;
      local_28 = 1;
      local_18 = 0;
      goto LAB_635f272d;
    }
    local_4c[0] = 2;
  }
  local_38 = 0xe;
  local_4c[1] = 1;
  local_4c[2] = 1;
  local_34 = 1;
  local_28 = 1;
  local_24 = 1;
  local_18 = 1;
  local_14 = 1;
LAB_635f272d:
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


