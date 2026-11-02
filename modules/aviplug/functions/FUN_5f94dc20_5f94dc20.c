/* Module: aviplug.dll
   Function: FUN_5f94dc20
   Address: 5f94dc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f94dc20(uint param_1,undefined4 param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_28 [3];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28[0] = 0x28;
    local_1c = 1;
    local_1a = 0x18;
    local_18 = 0x64737664;
    local_28[1] = 0x2d0;
    if ((param_1 & 0x200000) == 0) {
      local_28[2] = 0x1e0;
      local_14 = 120000;
    }
    else {
      local_28[2] = 0x240;
      local_14 = 0x23280;
    }
    if (0x27 < param_4) {
      param_4 = 0x28;
    }
    puVar3 = local_28;
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = param_4;
    }
    return 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0x28;
    return 0;
  }
  return 0x80004003;
}


