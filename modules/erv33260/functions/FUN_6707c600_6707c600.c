/* Module: erv33260.dll
   Function: FUN_6707c600
   Address: 6707c600
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6707c600(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte local_14 [12];
  void *local_8;
  
  pbVar12 = (byte *)(param_3 + param_1);
  local_8 = this;
  uVar7 = *(uint *)((int)this + 0x68);
  bVar1 = *pbVar12;
  local_14[0] = bVar1;
  uVar11 = (uint)bVar1;
  local_14[8] = 0;
  local_14[7] = 0;
  uVar8 = (int)(uVar11 - pbVar12[-1]) >> 0x1f;
  local_14[6] = 0;
  local_14[5] = 0;
  local_14[4] = 0;
  local_14[3] = 0;
  local_14[2] = 0;
  local_14[1] = 0;
  uVar10 = 1;
  if ((uVar11 - pbVar12[-1] ^ uVar8) - uVar8 < uVar7) {
    uVar10 = 2;
    local_14[1] = pbVar12[-1];
  }
  uVar8 = (int)(uVar11 - pbVar12[1]) >> 0x1f;
  if ((uVar11 - pbVar12[1] ^ uVar8) - uVar8 < uVar7) {
    local_14[uVar10] = pbVar12[1];
    uVar10 = uVar10 + 1;
  }
  pbVar12 = pbVar12 + -param_2;
  uVar8 = (int)(uVar11 - *pbVar12) >> 0x1f;
  if ((uVar11 - *pbVar12 ^ uVar8) - uVar8 < uVar7) {
    local_14[uVar10] = *pbVar12;
    uVar10 = uVar10 + 1;
  }
  pbVar6 = (byte *)(param_3 + param_2 + param_1);
  uVar9 = (int)(uVar11 - *pbVar6) >> 0x1f;
  uVar8 = uVar10;
  if ((uVar11 - *pbVar6 ^ uVar9) - uVar9 < uVar7) {
    uVar8 = uVar10 + 1;
    local_14[uVar10] = *pbVar6;
  }
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 == 0) {
    uVar10 = (int)(uVar11 - pbVar12[-1]) >> 0x1f;
    if ((uVar11 - pbVar12[-1] ^ uVar10) - uVar10 < uVar7) {
      local_14[uVar8] = pbVar12[-1];
      uVar8 = uVar8 + 1;
    }
    uVar10 = uVar11 - pbVar12[1];
    uVar9 = (int)uVar10 >> 0x1f;
    if ((uVar10 ^ uVar9) - uVar9 < uVar7) {
      local_14[uVar8] = pbVar12[1];
      uVar8 = uVar8 + 1;
    }
    uVar10 = (int)(uVar11 - pbVar6[-1]) >> 0x1f;
    if ((uVar11 - pbVar6[-1] ^ uVar10) - uVar10 < uVar7) {
      local_14[uVar8] = pbVar6[-1];
      uVar8 = uVar8 + 1;
    }
    uVar11 = uVar11 - pbVar6[1];
    uVar10 = (int)uVar11 >> 0x1f;
    if ((uVar11 ^ uVar10) - uVar10 < uVar7) {
      local_14[uVar8] = pbVar6[1];
      uVar8 = uVar8 + 1;
    }
  }
  bVar5 = local_14[4];
  bVar4 = local_14[3];
  bVar3 = local_14[2];
  if (iVar2 == 0) {
    uVar7 = 1;
    if (1 < uVar8) {
      do {
        bVar1 = local_14[uVar7];
        uVar11 = uVar7;
        for (pbVar12 = local_14 + uVar7; (uVar11 != 0 && (pbVar12[-1] < bVar1));
            pbVar12 = pbVar12 + -1) {
          *pbVar12 = pbVar12[-1];
          uVar11 = uVar11 - 1;
        }
        uVar7 = uVar7 + 1;
        local_14[uVar11] = bVar1;
      } while (uVar7 < uVar8);
    }
  }
  else {
    if (bVar1 < local_14[1]) {
      local_14[0] = local_14[1];
      local_14[1] = bVar1;
    }
    if (local_14[1] < local_14[2]) {
      local_14[2] = local_14[1];
      if (local_14[0] < bVar3) {
        local_14[1] = local_14[0];
        local_14[0] = bVar3;
      }
      else {
        local_14[1] = bVar3;
      }
    }
    bVar1 = local_14[0];
    if (local_14[2] < local_14[3]) {
      local_14[3] = local_14[2];
      if (local_14[1] < bVar4) {
        local_14[2] = local_14[1];
        if (local_14[0] < bVar4) {
          local_14[1] = local_14[0];
          local_14[0] = bVar4;
          local_14[1] = bVar1;
        }
        else {
          local_14[1] = bVar4;
        }
      }
      else {
        local_14[2] = bVar4;
      }
    }
    if (local_14[3] < local_14[4]) {
      local_14[4] = local_14[3];
      if (local_14[2] < bVar5) {
        local_14[3] = local_14[2];
        if (local_14[1] < bVar5) {
          local_14[2] = local_14[1];
          if (local_14[0] < bVar5) {
            local_14[1] = local_14[0];
            local_14[0] = bVar5;
          }
          else {
            local_14[1] = bVar5;
          }
        }
        else {
          local_14[2] = bVar5;
        }
      }
      else {
        local_14[3] = bVar5;
      }
    }
  }
  uVar7 = uVar8 >> 1;
  if ((uVar8 & 1) != 0) {
    return (uint)local_14[uVar7];
  }
  return (int)((uint)(byte)(&stack0xffffffeb)[uVar7] + (uint)local_14[uVar7]) >> 1;
}


