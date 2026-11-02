/* Module: vidcap30.exe
   Function: FUN_004220e0
   Address: 004220e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004220e0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  uint *puVar7;
  
  iVar4 = 0;
  if ((*param_1 == 8) && ((param_1[0x52] & 0x8000000U) != 0)) {
    if ((param_1[0x52] & 0x10000000U) != 0) {
      puVar1 = (uint *)(param_1 + 0x1e6);
      puVar7 = puVar1;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *puVar1 = *puVar1 | 0x3f;
      FUN_0042b900(param_1,puVar1,0);
      DVar5 = timeGetTime();
      param_1[0x1e3] = DVar5;
    }
    iVar4 = FUN_00421b90(param_1);
    if (-1 < iVar4) {
      iVar6 = FUN_00425e00(param_1);
      if (iVar6 != 0) {
        FUN_00425230(param_1,0);
        param_1[0x52] = param_1[0x52] & 0xffdfffff;
        param_1[0x53] = param_1[0x53];
        iVar6 = FUN_00426150(param_1);
        if (iVar6 != 0) {
          param_1[0x52] = param_1[0x52] & 0xfeffffff;
          param_1[0x53] = param_1[0x53];
        }
      }
      uVar2 = param_1[0x52];
      if ((param_1[0x53] & 0x10U) == 0) {
        if ((uVar2 & 0x10000000) == 0) {
          if (param_1[0xfd] != 0) {
            if (((param_1[0x210] == 0) && ((uVar2 & 0x100000) != 0)) &&
               (piVar3 = (int *)param_1[0xd7], piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x74))(piVar3,0);
              piVar3 = (int *)param_1[0xd7];
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 8))(piVar3);
              }
              param_1[0xd7] = 0;
            }
            FUN_00422500(param_1);
            if (param_1[0x210] == 0) {
              if ((param_1[0x52] & 0x100000U) != 0) {
                param_1[0x52] = param_1[0x52] & 0xffefffff;
                param_1[0x53] = param_1[0x53];
              }
            }
          }
          iVar4 = FUN_004226c0(param_1);
        }
      }
      else if (param_1[0x209] != 0) {
        if (((uVar2 & 0x10000000) == 0) && (param_1[0x20f] != 0)) {
          iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x24))((int *)param_1[0xd4],param_1[0x20f]);
          if ((((-1 < iVar4) &&
               (iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x24))
                                  ((int *)param_1[0xd4],param_1[0x20a]), -1 < iVar4)) &&
              (iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0xc))
                                 ((int *)param_1[0xd4],param_1[0x209],L"Smart Tee"), -1 < iVar4)) &&
             ((iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                                 ((int *)param_1[0xd4],param_1[0x20a],param_1[0x20b]), -1 < iVar4 &&
              (iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                                 ((int *)param_1[0xd4],param_1[0x20c],param_1[0x20d]), -1 < iVar4)))
             ) {
            iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                              ((int *)param_1[0xd4],param_1[0x20e],param_1[0x20f]);
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x24))((int *)param_1[0xd4],param_1[0x20d]);
          if ((((-1 < iVar4) &&
               ((iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x24))
                                   ((int *)param_1[0xd4],param_1[0x20a]), -1 < iVar4 &&
                (iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0xc))
                                   ((int *)param_1[0xd4],param_1[0x209],L"Smart Tee"), -1 < iVar4)))
               ) && (iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                                       ((int *)param_1[0xd4],param_1[0x20a],param_1[0x20b]),
                    -1 < iVar4)) &&
             ((iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                                 ((int *)param_1[0xd4],param_1[0x20c],param_1[0x20d]), -1 < iVar4 &&
              (param_1[0x20f] != 0)))) {
            iVar4 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                              ((int *)param_1[0xd4],param_1[0x20e],param_1[0x20f]);
          }
        }
        piVar3 = (int *)param_1[0x20a];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x20b];
        param_1[0x20a] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x20c];
        param_1[0x20b] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x20d];
        param_1[0x20c] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x20e];
        param_1[0x20d] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x20f];
        param_1[0x20e] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)param_1[0x209];
        param_1[0x20f] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        param_1[0x209] = 0;
      }
      param_1[0x1fe] = 0;
      param_1[0x1ff] = 0;
      param_1[0x52] = param_1[0x52] & 0xefffffff;
      param_1[0x53] = param_1[0x53];
      param_1[0x52] = param_1[0x52] & 0x7fffffff;
      param_1[0x53] = param_1[0x53];
    }
  }
  return iVar4;
}


