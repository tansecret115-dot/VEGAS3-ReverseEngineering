/* Module: erv33260.dll
   Function: FUN_670788c0
   Address: 670788c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_670788c0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  uVar1 = (param_1[0x22] + 0xfU & 0xfffffff0) + 0xf >> 4;
  uVar6 = (param_1[0x23] + 0xfU & 0xfffffff0) + 0xf >> 4;
  param_1[0x74] = uVar1;
  local_8 = 0;
  param_1[0x73] = uVar6;
  puVar2 = FUN_67071030(uVar1 * uVar6,1);
  param_1[0xcc] = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = 2;
  }
  else {
    piVar4 = (int *)param_1[0xc6];
    param_1[0xce] = param_1[0x74] * param_1[0x73];
    if (piVar4 != (int *)0x0) {
      FUN_6707b6b0(piVar4);
      FUN_67072140(piVar4);
      param_1[0xc6] = 0;
    }
    pvVar3 = (void *)FUN_67072130(0x10);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_6707b620(pvVar3,&local_8);
    }
    param_1[0xc6] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      local_8 = 2;
    }
    else if (local_8 == 0) {
      pvVar3 = (void *)FUN_67072130(0x14);
      if (pvVar3 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_6707b8b0(pvVar3,param_1[0xc6],param_1[0x21],&local_8);
      }
      param_1[0x5c] = (int)puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        local_8 = 2;
      }
      else if (local_8 == 0) {
        pvVar3 = (void *)FUN_67072130(0x14);
        if (pvVar3 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_6707b8b0(pvVar3,param_1[0xc6],param_1[0x21],&local_8);
        }
        param_1[0x5d] = (int)puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_8 = 2;
        }
        else if (local_8 == 0) {
          local_8 = FUN_67078b70(param_1);
          if (local_8 == 0) {
            iVar7 = param_1[0x1f];
            iVar8 = 0;
            if (0 < iVar7) {
              piVar4 = param_1 + 0x4b;
              do {
                if (*piVar4 == 2) {
                  iVar8 = iVar8 + 1;
                }
                piVar4 = piVar4 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            local_8 = FUN_6707b7e0((void *)param_1[0xc6],param_1[0x22],param_1[0x23],iVar8 + 1,
                                   param_1[0xcb]);
            if (local_8 == 0) {
              param_1[199] = 0;
              pvVar3 = (void *)FUN_67072130(0x80);
              if (pvVar3 == (void *)0x0) {
                puVar2 = (undefined4 *)0x0;
              }
              else {
                iVar7 = param_1[200];
                iVar8 = param_1[0x74];
                piVar4 = &local_8;
                iVar9 = param_1[0x73];
                iVar10 = 0;
                uVar5 = (**(code **)(*param_1 + 0x5c))(param_1[0x22],param_1[0x23]);
                puVar2 = FUN_6707aaf0(pvVar3,param_1[2],uVar5,iVar9,iVar8,iVar7,iVar10,piVar4);
              }
              param_1[0x71] = (int)puVar2;
              if (puVar2 == (undefined4 *)0x0) {
                local_8 = 2;
              }
              else if (local_8 != 0) {
                if (puVar2 != (undefined4 *)0x0) {
                  (**(code **)*puVar2)(1);
                }
                param_1[0x71] = 0;
              }
            }
          }
        }
        else {
          if (puVar2 != (undefined4 *)0x0) {
            FUN_6707b970((int)puVar2);
            FUN_67072140(puVar2);
          }
          param_1[0x5d] = 0;
        }
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          FUN_6707b970((int)puVar2);
          FUN_67072140(puVar2);
        }
        param_1[0x5c] = 0;
      }
    }
    else {
      if (piVar4 != (int *)0x0) {
        FUN_6707b6b0(piVar4);
        FUN_67072140(piVar4);
      }
      param_1[0xc6] = 0;
    }
  }
  if (local_8 != 0) {
    FUN_670787a0((int)param_1);
  }
  return local_8;
}


