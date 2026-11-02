/* Module: aviplug.dll
   Function: FUN_5f9586b0
   Address: 5f9586b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5f9586b0(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *local_18;
  uint local_14;
  code *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = (code *)0x0;
  local_c = (undefined1 *)0x0;
  local_8 = 0;
  local_18 = (int *)0x0;
  local_4 = 0;
  if (param_2 == (uint *)0x0) {
    return (int *)0xffffffff;
  }
  if (*param_2 < 0x24) {
    return (int *)0x0;
  }
  if (param_2[1] == 0x63646976) {
    uVar3 = param_2[2];
    if (param_1 == 0) {
      param_1 = uVar3;
      if ((((uVar3 != 0x64737664) && (uVar3 != 0x6e76645f)) && (uVar3 != 0x6e766477)) &&
         ((uVar3 != 0x7076645f && (uVar3 != 0x70766477)))) {
LAB_5f958819:
        param_2[5] = 0xfffffffe;
        return (int *)0x0;
      }
    }
    else if (param_1 != uVar3) goto LAB_5f958819;
    uVar1 = param_2[4];
    if ((uVar1 & (uVar3 != 0x64737664) + 6) == uVar1) {
      iVar2 = FUN_5f9585c0(&local_18,&local_18);
      if (iVar2 < 0) {
        param_2[5] = 0xfffffffd;
        return local_18;
      }
      local_10 = FUN_5f9585c0;
      local_8 = 1;
      local_4 = 1;
      if (param_1 < 0x6e766478) {
        if (param_1 == 0x6e766477) {
          local_c = &LAB_5f958b20;
        }
        else if (param_1 == 0x64737664) {
          local_c = &LAB_5f958bb0;
        }
        else if (param_1 == 0x6e76645f) {
          local_c = &LAB_5f958af0;
        }
      }
      else if (param_1 == 0x7076645f) {
        local_c = &LAB_5f958b50;
      }
      else if (param_1 == 0x70766477) {
        local_c = &LAB_5f958b80;
      }
      local_14 = param_1;
      uVar3 = (**(code **)(*local_18 + 0x74))(local_18,&local_14,uVar1,0x22);
      param_2[5] = uVar3;
      if (uVar3 == 0) {
        return local_18;
      }
      (**(code **)(*local_18 + 8))(local_18);
      return (int *)0x0;
    }
  }
  param_2[5] = 0xffffffff;
  return (int *)0x0;
}


