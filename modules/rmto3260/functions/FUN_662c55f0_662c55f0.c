/* Module: rmto3260.dll
   Function: FUN_662c55f0
   Address: 662c55f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c55f0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int *piVar7;
  undefined1 local_24 [14];
  short local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar3 = param_1;
  local_8 = 0;
  if (param_1[0xb] == 0) {
    param_1 = piRam00000026;
  }
  else {
    param_1 = *(int **)(param_1[0xb] + 0x2e);
  }
  while( true ) {
    if (param_1 == (int *)0x0) {
      return local_8;
    }
    local_8 = (**(code **)(*(int *)piVar3[6] + 0x20))(param_1,0);
    if (-1 < local_8) {
      local_8 = (**(code **)(*piVar3 + 0x78))(piVar3,local_24);
    }
    sVar4 = local_16;
    if (-1 < local_8) {
      iVar1 = piVar3[0x11];
      local_10 = *(int *)(iVar1 + 4);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(iVar1 + 0x10);
      }
      bVar2 = false;
      if ((short)uVar6 != 0) {
        local_c = uVar6 & 0xffff;
        do {
          piVar7 = (int *)FUN_662ed930(&local_10);
          if (*(short *)(*piVar7 + 4) == sVar4) {
            bVar2 = true;
            *(int **)(*piVar7 + 0xc) = param_1;
          }
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (!bVar2) {
        if ((piVar3[8] != 0) && (sVar5 = FUN_662dee20(piVar3[8]), sVar4 == sVar5)) {
          bVar2 = true;
        }
        if (!bVar2) {
          local_8 = -0x7ffbff7f;
        }
      }
    }
    if (local_8 < 0) break;
    param_1 = (int *)CONCAT22(uStack_12,uStack_14);
    if (local_8 < 0) {
      return local_8;
    }
  }
  return local_8;
}


