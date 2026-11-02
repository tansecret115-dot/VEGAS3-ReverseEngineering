/* Module: mpgaout.dll
   Function: FUN_10008d40
   Address: 10008d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008d40(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_10;
  
  uVar7 = _DAT_10008d30;
  iVar8 = *param_3;
  local_10 = -100;
  iVar5 = local_10;
  uVar6 = _DAT_10008d30;
  for (; iVar8 != -1; iVar8 = *(int *)(param_1 + 0xc + iVar8 * 0x18)) {
    iVar1 = iVar8 * 0x18;
    dVar3 = *(double *)(param_2 + 0x10 + *(int *)(param_1 + 0x10 + iVar1) * 0x20);
    dVar4 = *(double *)(param_1 + iVar1);
    _DAT_10008d30 = uVar6;
    local_10 = iVar8;
    if (0x3f < (byte)((dVar3 < dVar4 |
                       (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar4)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar3 == dVar4) << 0xe) >> 8)) - 1)) {
      *(undefined4 *)(param_1 + 8 + iVar1) = 0;
      *(undefined8 *)(param_1 + iVar1) = uVar7;
      local_10 = iVar5;
      if (iVar5 == -100) {
        *param_3 = *(int *)(param_1 + 0xc + iVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0xc + iVar5 * 0x18) = *(undefined4 *)(param_1 + 0xc + iVar1);
      }
    }
    iVar5 = local_10;
    uVar6 = _DAT_10008d30;
  }
  iVar8 = *param_4;
  local_10 = -100;
  iVar5 = local_10;
  uVar7 = uVar6;
  dVar3 = _DAT_10008d38;
  for (; _DAT_10008d30 = uVar7, _DAT_10008d38 = dVar3, iVar8 != -1;
      iVar8 = *(int *)(param_1 + 0xc + iVar8 * 0x18)) {
    iVar1 = iVar8 * 0x18;
    dVar3 = *(double *)(param_2 + 0x10 + *(int *)(param_1 + 0x10 + iVar1) * 0x20);
    dVar4 = *(double *)(param_1 + iVar1);
    local_10 = iVar8;
    if (0x3f < (byte)((dVar3 < dVar4 |
                       (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar4)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar3 == dVar4) << 0xe) >> 8)) - 1)) {
      *(undefined4 *)(param_1 + 8 + iVar1) = 0;
      *(undefined8 *)(param_1 + iVar1) = uVar6;
      local_10 = iVar5;
      if (iVar5 == -100) {
        *param_4 = *(int *)(param_1 + 0xc + iVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0xc + iVar5 * 0x18) = *(undefined4 *)(param_1 + 0xc + iVar1);
      }
    }
    iVar5 = local_10;
    uVar7 = _DAT_10008d30;
    dVar3 = _DAT_10008d38;
  }
  iVar8 = *param_3;
  local_10 = -100;
  if (iVar8 != -1) {
    iVar5 = *(int *)(param_1 + 0xc + iVar8 * 0x18);
    iVar1 = local_10;
    while (local_10 = iVar8, iVar5 != -1) {
      iVar5 = local_10 * 0x18;
      iVar8 = *(int *)(param_1 + 0xc + iVar5);
      iVar2 = iVar8 * 0x18;
      if (*(double *)(param_2 + 8 + *(int *)(param_1 + 0x10 + iVar2) * 0x20) -
          *(double *)(param_2 + 8 + *(int *)(param_1 + 0x10 + iVar5) * 0x20) < dVar3) {
        if (*(double *)(param_1 + iVar2) <= *(double *)(param_1 + iVar5)) {
          *(undefined4 *)(param_1 + 8 + iVar2) = 0;
          *(undefined8 *)(param_1 + *(int *)(param_1 + 0xc + iVar5) * 0x18) = uVar7;
          *(undefined4 *)(param_1 + 0xc + iVar5) =
               *(undefined4 *)(param_1 + 0xc + *(int *)(param_1 + 0xc + iVar5) * 0x18);
          iVar8 = local_10;
        }
        else {
          if (iVar1 == -100) {
            *param_3 = iVar8;
          }
          else {
            *(int *)(param_1 + 0xc + iVar1 * 0x18) = iVar8;
          }
          local_10 = local_10 * 0x18;
          *(undefined4 *)(param_1 + 8 + local_10) = 0;
          *(undefined8 *)(param_1 + local_10) = uVar7;
          iVar8 = *(int *)(param_1 + 0xc + local_10);
          local_10 = iVar1;
        }
      }
      if (iVar8 == -1) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0xc + iVar8 * 0x18);
      iVar1 = local_10;
    }
  }
  return;
}


