/* Module: vegas30.exe
   Function: FUN_00509b60
   Address: 00509b60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00509b60(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *local_130;
  undefined4 *local_12c;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c [4];
  CHAR local_10c [259];
  undefined1 local_9;
  uint local_8;
  int local_4;
  
  iVar5 = *param_3;
  if (param_2 == (int *)0x0) {
    piVar8 = &local_124;
    *param_3 = iVar5 + 1;
  }
  else {
    *param_3 = iVar5 + 1;
    piVar8 = param_2;
  }
  uVar1 = _SfGetMetricBinary_16(param_1,iVar5,piVar8,4);
  iVar5 = *param_3;
  *param_3 = iVar5 + 1;
  local_124 = _SfGetMetric_8(param_1,iVar5);
  local_128 = 0;
  if (0 < local_124) {
    while( true ) {
      puVar4 = local_11c;
      for (iVar5 = 0x47; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      iVar5 = *param_3;
      local_130 = (undefined4 *)0x0;
      *param_3 = iVar5 + 1;
      uVar2 = _SfGetMetricBinary_16(param_1,iVar5,local_11c,0x10);
      iVar5 = *param_3;
      *param_3 = iVar5 + 1;
      uVar3 = _SfGetMetricStringEx_24(param_1,iVar5,local_10c,0x104,0,1);
      uVar1 = uVar1 | uVar2 | uVar3;
      iVar5 = *param_3;
      *param_3 = iVar5 + 1;
      local_8 = _SfGetMetric_8(param_1,iVar5);
      if ((local_8 & 2) == 0) {
        if ((local_8 & 0x80) == 0) {
          local_4 = FUN_005097f0(local_11c,local_8 & 1);
          if (local_4 == 0) {
            local_8 = local_8 | 0x20;
          }
          else {
            if ((local_8 & 1) == 0) {
              lstrcpynA(local_10c,(LPCSTR)(local_4 + 0x20),0x104);
              local_9 = 0;
            }
            local_8 = local_8 & 0xffffffdf;
            FUN_00509790(local_11c);
          }
        }
        else {
          FUN_00509ac0(local_11c);
        }
      }
      if ((int)uVar1 < 0) break;
      puVar4 = local_130;
      if (((local_8 & 0x20) == 0) &&
         (local_12c = (undefined4 *)0x0, puVar4 = local_12c, param_2 != (int *)0x0)) {
        if (param_2[0x48] == 0) {
          _SfList_CreateExZ_32(param_2 + 0x48,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
        }
        puVar4 = (undefined4 *)param_2[0x48];
        if (puVar4 == (undefined4 *)0x0) {
          local_120 = 0;
        }
        else {
          local_120 = *puVar4;
        }
        puVar4 = calloc(1,0x124);
        local_12c = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          puVar6 = local_11c;
          puVar7 = puVar4;
          for (iVar5 = 0x47; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
          }
          local_130 = puVar4;
          _SfList_InsertList_16(param_2[0x48],local_120,&local_130,1);
          puVar4 = local_12c;
        }
      }
      uVar1 = FUN_00509b60(param_1,puVar4,param_3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      local_128 = local_128 + 1;
      if (local_124 <= local_128) {
        return uVar1;
      }
    }
  }
  return uVar1;
}


