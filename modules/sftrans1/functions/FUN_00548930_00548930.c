/* Module: sftrans1.dll
   Function: FUN_00548930
   Address: 00548930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00548930(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int local_18;
  int local_14;
  undefined2 *local_10;
  undefined2 *local_c;
  undefined2 *local_8;
  
  FUN_00546d60();
  FUN_00552440(0x1a7);
  param_1[0x72] = 1;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x6c] = 0;
  param_1[0x4ff] = 0;
  param_1[0x51d] = 0;
  param_1[0x51e] = 0;
  param_1[0x51f] = 0;
  param_1[0x524] = 0x7fffffff;
  param_1[0x525] = 0x7fffffff;
  local_10 = (undefined2 *)((int)param_1 + 0x1e6);
  param_1[0x4fa] = 0x41;
  param_1[0x4fb] = 100;
  local_18 = 0x1a;
  local_14 = 0x1a;
  iVar3 = 0;
  local_c = local_10;
  local_8 = local_10;
  while( true ) {
    while( true ) {
      do {
        iVar1 = iVar3 + 0x10;
        iVar2 = local_18 + -0x14;
        iVar5 = 0;
        if ((iVar2 < iVar1) && (iVar3 < local_18)) {
          iVar5 = iVar1;
          if (local_18 <= iVar1) {
            iVar5 = local_18;
          }
          if (iVar3 <= iVar2) {
            iVar3 = iVar2;
          }
          iVar5 = iVar5 - iVar3;
        }
        iVar3 = 0;
        puVar6 = local_10;
        do {
          iVar2 = iVar3 + 0x10;
          iVar4 = 0;
          if ((local_14 + -0x14 < iVar2) && (iVar3 < local_14)) {
            iVar4 = iVar2;
            if (local_14 <= iVar2) {
              iVar4 = local_14;
            }
            if (iVar3 <= local_14 + -0x14) {
              iVar3 = local_14 + -0x14;
            }
            iVar4 = iVar4 - iVar3;
          }
          *puVar6 = (short)((((uint)(iVar4 * iVar5 * 0xffff) >> 8) * param_1[0x4fb]) / 0x640);
          iVar3 = iVar2;
          puVar6 = puVar6 + 0x300;
        } while (iVar2 < 0x30);
        local_10 = local_10 + 0x100;
        iVar3 = iVar1;
      } while (iVar1 < 0x30);
      local_10 = local_c + 0x10;
      if (0xf < local_14 + -0x19) break;
      iVar3 = 0;
      local_14 = local_14 + 1;
      local_c = local_10;
    }
    local_10 = local_8 + 1;
    if (0xf < local_18 + -0x19) break;
    local_14 = 0x1a;
    iVar3 = 0;
    local_18 = local_18 + 1;
    local_c = local_10;
    local_8 = local_10;
  }
  param_1[0x55] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x526] = 0;
  param_1[0x527] = 0;
  param_1[0x528] = 0;
  *param_1 = &PTR_FUN_0056f620;
  param_1[2] = &PTR_LAB_0056f5c8;
  param_1[0x52] = 0;
  param_1[0x58] = 0;
  param_1[0x5d] = 0x7d7d7d;
  param_1[0x5e] = 0xffffff;
  param_1[0x5f] = 0xc8c8;
  param_1[0x60] = 0xdc00;
  param_1[0x61] = 0xffffff;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0xffffff;
  param_1[0x74] = 1;
  param_1[1] = 0;
  _mbscpy((uchar *)(param_1 + 0x6d),(uchar *)"%d, %d");
  return param_1;
}


