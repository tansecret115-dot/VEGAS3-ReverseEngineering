/* Module: vidcap30.exe
   Function: FUN_0043c450
   Address: 0043c450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_10 [16];
  
  if (((*(byte *)(param_1 + 0x1ae8) & 1) == 0) &&
     (*(int *)(param_1 + 0x13f8) <= *(int *)(param_1 + 0x14b4) - *(int *)(param_1 + 0x14ac))) {
    puVar1 = (uint *)_TrackbarInst_GetThumbRect_4(local_10,*(undefined4 *)(param_1 + 0x13c8));
    local_20 = *puVar1;
    local_1c = puVar1[1];
    local_18 = puVar1[2];
    local_14 = puVar1[3];
    uVar2 = _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x61e,0,0);
    local_20 = uVar2 >> 0x10;
    if (0x30 < (uVar2 & 0xffff)) {
      local_14 = local_14 + 2;
      local_1c = local_1c - 1;
      iVar3 = GetSystemMetrics(0x2e);
      if ((int)local_1c <= iVar3 + 4 + *(int *)(param_1 + 0x94)) {
        iVar3 = GetSystemMetrics(0x2e);
        local_1c = iVar3 + 4 + *(int *)(param_1 + 0x94);
      }
      iVar3 = *(int *)(param_1 + 0x9c) + -4;
      if (iVar3 <= (int)local_14) {
        local_14 = iVar3;
      }
      iVar3 = 0;
      do {
        local_18 = (int)(iVar3 * (uVar2 & 0xffff)) / 0xc + 2 + local_20;
        if (iVar3 == 6) {
          local_1c = local_1c + -3;
          local_14 = local_14 + 3;
          FUN_00412310(param_2,&local_20,6,4);
          local_1c = local_1c + 3;
          local_14 = local_14 + -3;
        }
        else {
          FUN_00412310(param_2,&local_20,6,4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xd);
      iVar3 = (int)(local_14 + local_1c) / 2;
      local_1c = iVar3 - 5;
      local_14 = iVar3 + 6;
      FUN_00412310(param_2,&local_20,0,0x800);
    }
  }
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e4),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e0),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13cc),0xf,0,param_2);
  FUN_0042fba0(*(undefined4 *)(param_1 + 0x13c0),param_2,param_4);
  FUN_0042fba0(*(undefined4 *)(param_1 + 0x13c4),param_2,param_4);
  _TrackbarInst_Draw_8(*(undefined4 *)(param_1 + 0x13c8),param_2);
  return;
}


