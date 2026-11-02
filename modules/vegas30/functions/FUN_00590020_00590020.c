/* Module: vegas30.exe
   Function: FUN_00590020
   Address: 00590020
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00590020(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_3c;
  int *local_38;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_1c = *(int *)(param_2 + 0x18);
  if (*(short *)(*(int *)(local_1c + 0x2c) + 2) == 1) {
    iVar3 = *(int *)(DAT_0065a06c + 0x84);
  }
  else {
    iVar3 = *(int *)(DAT_0065a06c + 0x6c);
  }
  local_28 = *(double *)(param_2 + 0x40) * *(double *)(param_2 + 0x38);
  local_2c = (uint)*(ushort *)(iVar3 + 0xc);
  uVar1 = *(int *)(param_2 + 0xc) / (int)local_2c;
  iVar7 = (int)uVar1 >> 0x1f;
  local_18 = uVar1;
  local_14 = iVar7;
  uVar9 = ftol();
  uVar4 = -(uint)uVar9 - 200;
  uVar6 = *(uint *)(param_2 + 0x4c);
  uVar5 = uVar4 - uVar6;
  iVar2 = (((-1 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(0xffffff38 < (uint)uVar9)) -
          ((int)uVar6 >> 0x1f)) - (uint)(uVar4 < uVar6);
  uVar6 = local_18;
  if ((iVar2 <= iVar7) && ((iVar2 < iVar7 || (uVar5 < uVar1)))) {
    uVar6 = uVar5;
    local_14 = iVar2;
  }
  *(uint *)(param_2 + 0x34) = uVar6;
  *(uint *)(param_2 + 0x30) = *(ushort *)(iVar3 + 0xc) * uVar6;
  FUN_0058fde0(param_2,&local_10,&local_2c,(int)local_28,local_28._4_4_);
  local_2c = (uint)(0xa0000 / (ulonglong)(longlong)(int)(uint)*(ushort *)(iVar3 + 0xc));
  uVar9 = ftol();
  uVar6 = local_10 - (uint)uVar9;
  iVar3 = uVar6 - uVar1;
  iVar2 = (((local_c - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(local_10 < (uint)uVar9)) - iVar7) -
          (uint)(uVar6 < uVar1);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    iVar3 = 0;
    iVar2 = 0;
  }
  local_3c = 0;
  iVar7 = ftol();
  local_38 = (int *)(param_2 + 0x58);
  local_30 = 0;
  local_28 = (double)CONCAT44(local_28._4_4_,local_2c + (iVar7 + uVar1) * 2);
  do {
    if ((int)local_28 <= local_3c) break;
    iVar7 = FUN_0058e380(param_1,local_1c,0,iVar3,iVar2,0,0x3ff00000,0,0,0,0,&local_18);
    *local_38 = iVar7;
    if ((int)local_18 < 0) {
      return local_18;
    }
    uVar6 = *(uint *)(iVar7 + 0x34);
    iVar8 = uVar6 - iVar3;
    iVar3 = uVar6 + *(uint *)(iVar7 + 0x28);
    iVar2 = ((int)uVar6 >> 0x1f) + *(int *)(iVar7 + 0x2c) +
            (uint)CARRY4(uVar6,*(uint *)(iVar7 + 0x28));
    local_3c = local_3c + iVar8 + *(int *)(iVar7 + 0x28);
    local_30 = local_30 + 1;
    local_38 = local_38 + 1;
  } while (local_30 < 0x18);
  *(uint *)(param_2 + 0xb8) = local_30;
  *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 8;
  return 0;
}


