/* Module: vidpcore.dll
   Function: FUN_5de9ad70
   Address: 5de9ad70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de9ad70(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  void *_Memory;
  int *_Memory_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  iVar8 = param_6;
  if (((param_1 == 0) || (param_7 == (undefined4 *)0x0)) || (param_6 == 0)) {
    return 0x80070057;
  }
  if (param_5 < 1) {
    return 0;
  }
  _Memory = calloc(1,(param_5 * 3 + 3) * 4);
  if (_Memory == (void *)0x0) {
    return 0x8007000e;
  }
  local_18 = _Memory;
  _Memory_00 = calloc(1,param_5 * 4);
  local_8 = _Memory_00;
  if (_Memory_00 == (int *)0x0) {
    free(_Memory);
    return 0x8007000e;
  }
  iVar1 = 0;
  piVar6 = _Memory_00;
  if (0 < param_5) {
    do {
      *piVar6 = iVar1;
      iVar1 = iVar1 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar1 < param_5);
  }
  FUN_5de9b220(iVar8,_Memory_00,param_5,4,&LAB_5de9b1d0);
  local_1c = 0;
  local_14 = 0;
  iVar1 = *(int *)(iVar8 + 4 + *_Memory_00 * 8);
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
  if (iVar1 < param_2[1] * 0x4000) {
    iVar1 = param_2[1] * 0x4000;
  }
  local_10 = param_2[3] * 0x4000 + -0x4000;
  iVar3 = *(int *)(iVar8 + 4 + _Memory_00[param_5 + -1] * 8);
  if (iVar3 <= local_10) {
    local_10 = iVar3;
  }
  local_4 = iVar1;
  if (iVar1 <= local_10) {
    do {
      local_4 = iVar1;
      if (local_14 < param_5) {
        piVar6 = _Memory_00 + local_14;
        do {
          iVar3 = *piVar6;
          _Memory = local_18;
          _Memory_00 = local_8;
          if (iVar1 < *(int *)(iVar8 + 4 + iVar3 * 8)) break;
          iVar2 = param_5;
          if (0 < iVar3) {
            iVar2 = iVar3;
          }
          iVar2 = iVar2 + -1;
          iVar4 = *(int *)(iVar8 + 4 + iVar2 * 8);
          if (iVar4 < iVar1) {
            FUN_5de9b0b0(&local_1c,local_18,iVar2);
          }
          else if (iVar1 < iVar4) {
            FUN_5de9b110(&param_5,iVar8,&local_1c,local_18,iVar2,iVar1);
          }
          if (iVar3 < param_5 + -1) {
            iVar2 = iVar3 + 1;
          }
          else {
            iVar2 = 0;
          }
          iVar2 = *(int *)(iVar8 + 4 + iVar2 * 8);
          if (iVar2 < iVar1) {
            FUN_5de9b0b0(&local_1c,local_18,iVar3);
          }
          else if (iVar1 < iVar2) {
            FUN_5de9b110(&param_5,iVar8,&local_1c,local_18,iVar3,iVar1);
          }
          local_14 = local_14 + 1;
          piVar6 = piVar6 + 1;
          _Memory = local_18;
          _Memory_00 = local_8;
        } while (local_14 < param_5);
      }
      FUN_5de9b220(iVar8,_Memory,local_1c,0xc,&LAB_5de9b200);
      local_c = 0;
      if (0 < local_1c) {
        piVar6 = (int *)((int)_Memory + 0xc);
        do {
          iVar3 = piVar6[-3];
          if (piVar6[-3] < *param_2 * 0x4000) {
            iVar3 = *param_2 * 0x4000;
          }
          iVar4 = param_2[2] * 0x4000 + -0x4000;
          iVar2 = *piVar6;
          if (iVar4 < *piVar6) {
            iVar2 = iVar4;
          }
          if (iVar3 < iVar2) {
            iVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
            puVar7 = (undefined4 *)
                     (iVar4 * param_4 +
                     param_1 + ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) * param_3);
            iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe;
            iVar8 = param_6;
            if (iVar4 <= iVar3) {
              iVar3 = (iVar3 - iVar4) + 1;
              do {
                puVar9 = param_7;
                puVar10 = puVar7;
                for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar10 = puVar10 + 1;
                }
                puVar7 = (undefined4 *)((int)puVar7 + param_4);
                iVar3 = iVar3 + -1;
                for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                iVar1 = local_4;
              } while (iVar3 != 0);
            }
          }
          piVar6[-3] = piVar6[-3] + piVar6[-2];
          *piVar6 = *piVar6 + piVar6[1];
          local_c = local_c + 2;
          _Memory = local_18;
          piVar6 = piVar6 + 6;
          _Memory_00 = local_8;
        } while (local_c < local_1c);
      }
      iVar1 = iVar1 + 0x4000;
      local_4 = iVar1;
    } while (iVar1 <= local_10);
  }
  free(_Memory);
  free(_Memory_00);
  return 0;
}


