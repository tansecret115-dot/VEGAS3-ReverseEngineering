/* Module: sfcdi.dll
   Function: FUN_5bf0e830
   Address: 5bf0e830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e830(byte *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  if ((*(char *)(param_2 + 8) != '\0') && (*(char *)(param_2 + 8) != '\x03')) {
    return;
  }
  iVar1 = FUN_5bf0e720(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (uVar2 = FUN_5bf2bbe0(*(int *)(param_1 + 0x18),*(int *)(param_1 + 4)), (int)uVar2 < 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_5bf2bbb0(*(int *)(param_1 + 0x18),uVar2);
  }
  if (*(char *)(param_2 + 8) == '\0') {
    param_1[0x6c] = 1;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    local_10 = *(undefined4 *)(param_2 + 9);
    local_c = *(undefined4 *)(param_2 + 0xd);
    local_8 = *(undefined4 *)(param_2 + 0x11);
    local_4 = *(undefined1 *)(param_2 + 0x15);
    _mbscpy(param_1 + 0x70,(uchar *)&local_10);
    if ((iVar1 != 0) && ((*param_1 & 2) != 0)) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_2 + 9);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_2 + 0x11);
    }
  }
  else if (*(char *)(param_2 + 8) == '\x03') {
    param_1[0x80] = 1;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    local_10 = *(undefined4 *)(param_2 + 9);
    local_c = *(undefined4 *)(param_2 + 0xd);
    local_8 = *(undefined4 *)(param_2 + 0x11);
    local_4 = *(undefined1 *)(param_2 + 0x15);
    _mbscpy(param_1 + 0x84,(uchar *)&local_10);
    if ((iVar1 != 0) && ((*param_1 & 4) != 0)) {
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 9);
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_2 + 0x11);
      return;
    }
  }
  return;
}


