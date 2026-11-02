/* Module: vegas30.exe
   Function: FUN_0058fe60
   Address: 0058fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058fe60(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  int local_14;
  uint local_10;
  int local_c;
  
  local_28 = 0;
  local_14 = *(int *)(param_2 + 0x18);
  if (*(short *)(*(int *)(local_14 + 0x2c) + 2) == 1) {
    local_34 = *(int *)(DAT_0065a06c + 0x84);
  }
  else {
    local_34 = *(int *)(DAT_0065a06c + 0x6c);
  }
  uVar1 = *(int *)(param_2 + 0xc) / (int)(uint)*(ushort *)(local_34 + 0xc);
  uStack_1c = *(undefined4 *)(param_2 + 0x3c);
  iVar4 = (int)uVar1 >> 0x1f;
  local_20 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = ftol();
  uVar3 = -(uint)uVar6 - 200;
  iVar2 = (-1 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(0xffffff38 < (uint)uVar6);
  if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (uVar3 < uVar1)))) {
    uStack_1c = *(undefined4 *)(param_2 + 0x3c);
    local_20 = *(undefined4 *)(param_2 + 0x38);
    uVar1 = uVar3;
    iVar4 = iVar2;
  }
  *(uint *)(param_2 + 0x34) = uVar1;
  *(uint *)(param_2 + 0x30) = *(ushort *)(local_34 + 0xc) * uVar1;
  FUN_0058fde0(param_2,&local_10,&local_24,local_20,uStack_1c);
  iVar2 = local_10 - uVar1;
  iVar4 = (local_c - iVar4) - (uint)(local_10 < uVar1);
  if ((iVar4 < 1) && (iVar4 < 0)) {
    iVar2 = 0;
    iVar4 = 0;
  }
  local_34 = 0;
  local_2c = 0;
  local_30 = (int *)(param_2 + 0x58);
  local_20 = uVar1 * 3 + 200 + local_24;
  do {
    if (local_20 <= local_34) break;
    iVar4 = FUN_0058e380(param_1,local_14,0,iVar2,iVar4,0,0x3ff00000,0,0,0,0,&local_28);
    *local_30 = iVar4;
    if (local_28 < 0) break;
    uVar1 = *(uint *)(iVar4 + 0x34);
    iVar5 = *(int *)(iVar4 + 0x28) - iVar2;
    iVar2 = uVar1 + *(uint *)(iVar4 + 0x28);
    iVar4 = ((int)uVar1 >> 0x1f) + *(int *)(iVar4 + 0x2c) +
            (uint)CARRY4(uVar1,*(uint *)(iVar4 + 0x28));
    local_34 = local_34 + iVar5 + uVar1;
    local_2c = local_2c + 1;
    local_30 = local_30 + 1;
  } while (local_2c < 0x18);
  *(uint *)(param_2 + 0xb8) = local_2c;
  *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 8;
  return local_28;
}


