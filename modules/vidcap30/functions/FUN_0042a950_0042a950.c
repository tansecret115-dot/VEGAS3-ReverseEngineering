/* Module: vidcap30.exe
   Function: FUN_0042a950
   Address: 0042a950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a950(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 *puVar7;
  
  iVar3 = 0;
  if (*param_1 != 8) {
    return 0;
  }
  if ((param_1[0x52] & 0x8000000U) == 0) {
    return 0;
  }
  if ((param_1[0x52] & 0x80000000U) == 0) {
    param_1[0x1e4] = -1;
    param_1[0x1e2] = 0;
    param_1[0x1e3] = 0;
    if ((param_1[0x53] & 2U) == 0) {
      iVar3 = FUN_0042af10(param_1);
    }
    else {
      iVar3 = FUN_0042af10(param_1);
      if (iVar3 < 0) goto LAB_0042aa07;
      iVar3 = FUN_00421b90(param_1);
    }
    if (-1 < iVar3) {
      param_1[0x52] = param_1[0x52] | 0x80000000;
      param_1[0x53] = param_1[0x53];
      if ((param_1[0x52] & 0x100000U) != 0) {
        iVar3 = FUN_00425e80(param_1,1);
      }
    }
  }
LAB_0042aa07:
  if (param_2 != 0) {
    return iVar3;
  }
  if ((param_1[0x52] & 0x80000000U) == 0) {
    return iVar3;
  }
  piVar1 = param_1 + 0xf9;
  if (param_1[0xf9] == 0) {
    bVar6 = true;
    iVar3 = 4;
    piVar4 = &DAT_005a35a8;
    piVar5 = param_1 + 0xee;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      puVar7 = &DAT_005a35a8;
    }
    else {
      puVar7 = &DAT_005a35f8;
    }
    (**(code **)(*(int *)param_1[0xed] + 0x18))
              ((int *)param_1[0xed],&DAT_005a2438,puVar7,param_1[0xd8],&DAT_005a1a08,piVar1);
  }
  iVar3 = FUN_00421b90(param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((param_1[0x53] & 0x10U) == 0) {
    if (param_1[0xfd] == 0) {
      iVar3 = FUN_004226c0(param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar2 = FUN_00425e00(param_1);
      if ((iVar2 != 0) && (param_1[0x146] == 1)) {
        param_1[0x52] = param_1[0x52] | 0x2000000;
        param_1[0x53] = param_1[0x53];
        iVar3 = FUN_00425e80(param_1,0);
      }
    }
    else {
      if ((param_1[0x210] == 0) && (iVar3 = FUN_00425e00(param_1), iVar3 != 0)) {
        if (param_1[0xd7] != 0) {
          FUN_00425230(param_1,0);
          (**(code **)(*(int *)param_1[0xd7] + 0x74))((int *)param_1[0xd7],0);
          piVar4 = (int *)param_1[0xd7];
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          param_1[0xd7] = 0;
        }
        param_1[0x52] = param_1[0x52] & 0xffdfffff;
        param_1[0x53] = param_1[0x53];
        iVar3 = FUN_00426150(param_1);
        if (iVar3 != 0) {
          param_1[0x52] = param_1[0x52] | 0x2000000;
          param_1[0x53] = param_1[0x53];
          FUN_004261d0(param_1,0);
        }
      }
      FUN_00422500(param_1);
      if ((param_1[0x210] == 0) && (iVar3 = FUN_00425e00(param_1), iVar3 != 0)) {
        param_1[0x52] = param_1[0x52] & 0xffefffff;
        param_1[0x53] = param_1[0x53];
      }
      iVar3 = FUN_004226c0(param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar2 = FUN_00425e50(param_1);
      if ((iVar2 != 0) && (param_1[0x146] == 2)) {
        param_1[0x52] = param_1[0x52];
        param_1[0x53] = param_1[0x53] | 2;
        iVar3 = FUN_0042c770(param_1);
        if (-1 < iVar3) {
          if (*piVar1 == 0) {
            iVar3 = 4;
            bVar6 = true;
            piVar4 = &DAT_005a35a8;
            piVar5 = param_1 + 0xee;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar6 = *piVar4 == *piVar5;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar6);
            if (bVar6) {
              puVar7 = &DAT_005a35a8;
            }
            else {
              puVar7 = &DAT_005a35f8;
            }
            (**(code **)(*(int *)param_1[0xed] + 0x18))
                      ((int *)param_1[0xed],&DAT_005a2438,puVar7,param_1[0xd8],&DAT_005a1a08,piVar1)
            ;
          }
          iVar3 = FUN_004226c0(param_1);
        }
        param_1[0x52] = param_1[0x52];
        param_1[0x53] = param_1[0x53] & 0xfffffffd;
      }
    }
  }
  else {
    if (param_1[0x20f] != 0) {
      FUN_00425230(param_1,0);
      param_1[0x52] = param_1[0x52] & 0xffdfffff;
      param_1[0x53] = param_1[0x53];
      iVar3 = FUN_00426150(param_1);
      if (iVar3 != 0) {
        param_1[0x52] = param_1[0x52] & 0xfeffffff;
        param_1[0x53] = param_1[0x53];
      }
      iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x24))((int *)param_1[0xd4],param_1[0x20f]);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x24))((int *)param_1[0xd4],param_1[0x20a]);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = FUN_00425e50(param_1);
      if ((iVar3 != 0) && (param_1[0x146] == 2)) {
        iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0xc))
                          ((int *)param_1[0xd4],param_1[0x209],L"Smart Tee");
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                          ((int *)param_1[0xd4],param_1[0x20a],param_1[0x20b]);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                          ((int *)param_1[0xd4],param_1[0x20c],param_1[0x20d]);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                          ((int *)param_1[0xd4],param_1[0x20e],param_1[0x20f]);
        if (iVar3 < 0) {
          return iVar3;
        }
        piVar1 = (int *)param_1[0x20a];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x20b];
        param_1[0x20a] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x20c];
        param_1[0x20b] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x20d];
        param_1[0x20c] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x20e];
        param_1[0x20d] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x20f];
        param_1[0x20e] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)param_1[0x209];
        param_1[0x20f] = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        param_1[0x209] = 0;
        FUN_00425e80(param_1,1);
        if (param_1[0xfd] != 0) {
          iVar3 = FUN_0042af60(param_1);
        }
        goto LAB_0042aea1;
      }
    }
    iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                      ((int *)param_1[0xd4],param_1[0x20a],param_1[0x20d]);
  }
LAB_0042aea1:
  if ((-1 < iVar3) && (iVar3 = FUN_0042af10(param_1), -1 < iVar3)) {
    param_1[0x52] = param_1[0x52] & 0x7fffffff;
    param_1[0x53] = param_1[0x53];
    FUN_004289c0(param_1,param_1 + 0x1fe,0);
    param_1[0x52] = param_1[0x52] | 0x10000000;
    param_1[0x53] = param_1[0x53];
  }
  return iVar3;
}


