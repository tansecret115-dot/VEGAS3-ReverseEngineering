/* Module: aviplug.dll
   Function: FUN_5f958f70
   Address: 5f958f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f958f70(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined1 *local_a4 [10];
  int local_7c [31];
  
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  local_7c[5] = 5;
  local_7c[6] = 0xe;
  local_7c[7] = 0;
  local_7c[8] = 1;
  local_7c[9] = 0xd;
  local_7c[10] = 4;
  local_7c[0xb] = 0;
  local_7c[0xc] = 0;
  FUN_5f971740(local_7c + 5);
  local_7c[0x16] = 0xe;
  local_7c[0x15] = 0;
  local_7c[0x17] = 6;
  local_7c[0x18] = 4;
  local_7c[0x19] = 5;
  local_7c[0x1a] = 0;
  local_7c[0x1b] = 4;
  local_7c[0x1c] = 6;
  local_7c[0x1d] = 6;
  local_7c[0x1e] = 0;
  FUN_5f96bf30(local_7c + 0x15);
  local_7c[0xd] = 6;
  local_7c[0xe] = 0xe;
  local_7c[0x10] = 0;
  local_7c[0xf] = 1;
  local_7c[0x12] = 6;
  local_7c[0x11] = 0xe;
  local_7c[0x14] = 0;
  local_7c[0x13] = 0;
  FUN_5f967ee0(local_7c + 0xd);
  uVar1 = FUN_5f982b80(0xff);
  if ((uVar1 & 0x10) == 0) {
    DAT_5f9f2bf8 = 0;
    PTR_PTR_5f9f2c00 = (undefined *)&PTR_LAB_5f9d8b80;
    PTR_PTR_5f9f2c04 = (undefined *)&PTR_LAB_5f9d8ba0;
  }
  else {
    DAT_5f9f2bf8 = 1;
    PTR_PTR_5f9f2c04 = (undefined *)&PTR_FUN_5f9d8be0;
    if ((uVar1 & 0x20) == 0) {
      PTR_PTR_5f9f2c00 = (undefined *)&PTR_FUN_5f9d8bc0;
    }
    else if (((byte)uVar1 & 0xf) == 6) {
      PTR_PTR_5f9f2c00 = (undefined *)&PTR_FUN_5f9d8c20;
    }
    else {
      PTR_PTR_5f9f2c00 = (undefined *)&PTR_FUN_5f9d8c00;
    }
  }
  DAT_5f9f2bfc = 1;
  local_7c[0] = 1;
  local_7c[1] = 1;
  local_7c[2] = 1;
  local_7c[3] = 1;
  local_a4[0] = (undefined1 *)0x6e76645f;
  local_a4[1] = (undefined1 *)0x6e766477;
  local_a4[2] = (undefined1 *)0x7076645f;
  local_a4[3] = (undefined1 *)0x70766477;
  local_a4[4] = (undefined1 *)0x64737664;
  local_a4[5] = &LAB_5f958af0;
  local_a4[6] = &LAB_5f958b20;
  local_a4[7] = &LAB_5f958b50;
  local_a4[8] = &LAB_5f958b80;
  local_a4[9] = &LAB_5f958bb0;
  local_7c[4] = 0;
  uVar1 = 0;
  do {
    iVar2 = (**(code **)(*param_1 + 0xc))
                      (param_1,local_a4[uVar1],local_a4[uVar1 + 5],FUN_5f9585c0,local_7c[uVar1],1);
    if (iVar2 < 0) goto LAB_5f959183;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  if (iVar2 < 0) {
LAB_5f959183:
    if (-1 < (int)(uVar1 - 1)) {
      ppuVar3 = local_a4 + (uVar1 - 1);
      do {
        (**(code **)(*param_1 + 0x10))(param_1,*ppuVar3);
        ppuVar3 = ppuVar3 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return iVar2;
}


