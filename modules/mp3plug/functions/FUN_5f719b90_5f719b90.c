/* Module: mp3plug.dll
   Function: FUN_5f719b90
   Address: 5f719b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f719b90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_38;
  int local_30;
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(param_1 + 0x2734);
  iVar2 = 0;
  do {
    local_38 = iVar2 + 4;
    *(undefined4 *)(param_1 + iVar2) = 0;
    iVar3 = 0;
    local_30 = param_1 + iVar2;
    do {
      puVar5 = (undefined4 *)(local_38 + param_1);
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar1 = iVar3;
      do {
        iVar4 = iVar1 + iVar2;
        iVar1 = iVar1 + 4;
        *(undefined4 *)(param_1 + 0x70 + iVar4) = 0;
      } while (iVar1 < iVar3 + 0x900);
      iVar1 = iVar3;
      do {
        iVar4 = iVar1 + iVar2;
        iVar1 = iVar1 + 4;
        *(undefined4 *)(param_1 + 0x970 + iVar4) = 0;
      } while (iVar1 < iVar3 + 0x5c);
      local_38 = local_38 + 0x9cc;
      *(undefined4 *)(local_30 + 0x9cc) = 0;
      iVar3 = iVar3 + 0x9cc;
      local_30 = local_30 + 0x9cc;
    } while (iVar3 < 0x2730);
    puVar5 = local_28;
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar3 = param_1 + iVar2;
    iVar1 = param_1 + 0x900 + iVar2;
    iVar4 = (iVar1 - iVar3 & 0xfffffff8U) + iVar3;
    for (; iVar3 < iVar4; iVar3 = iVar3 + 8) {
      *(undefined4 *)(iVar3 + 0x27a0) = 0;
      *(undefined4 *)(iVar3 + 0x27a4) = 0;
    }
    for (; iVar3 < iVar1; iVar3 = iVar3 + 4) {
      *(undefined4 *)(iVar3 + 0x27a0) = 0;
    }
    iVar3 = param_1 + iVar2;
    iVar1 = param_1 + 0x5c + iVar2;
    iVar4 = (iVar1 - iVar3 & 0xfffffff8U) + iVar3;
    for (; iVar3 < iVar4; iVar3 = iVar3 + 8) {
      *(undefined4 *)(iVar3 + 0x30a0) = 0;
      *(undefined4 *)(iVar3 + 0x30a4) = 0;
    }
    for (; iVar3 < iVar1; iVar3 = iVar3 + 4) {
      *(undefined4 *)(iVar3 + 0x30a0) = 0;
    }
    *(undefined4 *)(param_1 + 0x30fc + iVar2) = 0;
    local_28 = local_28 + 0xc40;
    iVar2 = iVar2 + 0x3100;
  } while (iVar2 < 0x6200);
  *(undefined4 *)(param_1 + 0x62ec) = 0x2a;
  *(undefined4 *)(param_1 + 0x62f4) = 0xfeed4;
  *(undefined4 *)(param_1 + 0x62f0) = 0x23423;
  *(undefined4 *)(param_1 + 0x62e8) = 0;
  return;
}


