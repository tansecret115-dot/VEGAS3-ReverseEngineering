/* Module: rmto3260.dll
   Function: FUN_662c84c0
   Address: 662c84c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c84c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int local_8;
  
  uVar1 = param_1;
  iVar2 = (**(code **)(*(int *)(param_1 - 0x10) + 0x28))(param_1 - 0x10);
  uVar6 = 0;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(**(int **)(uVar1 + 0x30) + 0xc))(*(int **)(uVar1 + 0x30),uVar1 + 0x2c);
    if (-1 < iVar2) {
      iVar4 = *(int *)(uVar1 + 0x38);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 0x10);
      }
      if (1 < iVar5) {
        if (iVar4 == 0) {
          param_1 = 0;
        }
        else {
          param_1 = *(uint *)(iVar4 + 0x10);
        }
        local_8 = *(int *)(iVar4 + 4);
        if ((ushort)param_1 != 0) {
          do {
            puVar3 = (undefined4 *)FUN_662ed930(&local_8);
            if (uVar6 != 0) {
              iVar2 = (**(code **)(*(int *)(uVar1 - 0x10) + 0x34))
                                (uVar1 - 0x10,*(undefined4 *)(uVar1 + 0x30),*puVar3);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ushort)param_1);
        }
      }
    }
  }
  if (-1 < iVar2) {
    if (*(int *)(uVar1 + 0x38) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(uVar1 + 0x38) + 0x10);
    }
    if (iVar4 == 1) {
      iVar2 = (**(code **)(**(int **)(uVar1 + 0x30) + 0x68))(*(int **)(uVar1 + 0x30),&param_1);
      if ((param_1 <= *(uint *)(uVar1 + 0x20)) || (*(uint *)(uVar1 + 0x20) == 0)) {
        *(uint *)(uVar1 + 0x20) = param_1;
        *(undefined4 *)(uVar1 + 0x80) = 1;
      }
    }
    if (-1 < iVar2) {
      if (*(int *)(uVar1 + 0x38) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(uVar1 + 0x38) + 0x10);
      }
      if (1 < iVar4) {
        iVar2 = FUN_662cbb40(uVar1 - 0x10);
      }
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*(int *)(uVar1 - 0x10) + 0x50))(uVar1 - 0x10);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*(int *)(uVar1 - 0x10) + 0x60))(uVar1 - 0x10);
        }
      }
    }
  }
  iVar4 = uVar1 - 0x10;
  (**(code **)(*(int *)(uVar1 - 0x10) + 0x44))(iVar4);
  if ((-1 < iVar2) && (*(int *)(uVar1 + 8) != 0)) {
    iVar2 = FUN_662cbc50(iVar4);
  }
  FUN_662cafa0(iVar4);
  return iVar2;
}


