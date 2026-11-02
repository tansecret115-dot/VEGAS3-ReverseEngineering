/* Module: vegas30k.dll
   Function: FUN_011b1ba0
   Address: 011b1ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b1ba0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 1;
  }
  if ((*(uint *)(param_2 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb64) = 0;
    if ((*(uint *)(param_2 + 8) & 2) == 0) {
      if ((*(uint *)(param_2 + 8) & 4) != 0) {
        *(undefined4 *)(param_1 + 0xb64) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb64) = 1;
    }
  }
  if ((*(uint *)(param_2 + 4) & 0x40) == 0) {
    *(undefined4 *)(param_1 + 0xa54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb60) = 0;
    *(undefined4 *)(param_1 + 0xb5c) = 0x7f;
  }
  else {
    *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0x2c);
  }
  uVar1 = *(uint *)(param_2 + 4) & 0xf0000;
  if (uVar1 < 0x40001) {
    if (uVar1 == 0x40000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x40000;
      _mbscpy((uchar *)(param_1 + 0xb68),(uchar *)(param_2 + 0x30));
      goto LAB_011b1d57;
    }
    if (uVar1 == 0x10000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x10000;
      _mbscpy((uchar *)(param_1 + 0xb68),(uchar *)(param_2 + 0x30));
      goto LAB_011b1d57;
    }
    if (uVar1 == 0x20000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x20000;
      _mbscpy((uchar *)(param_1 + 0xb68),(uchar *)(param_2 + 0x30));
      goto LAB_011b1d57;
    }
    if (uVar1 == 0x30000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x30000;
      *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_2 + 0x3c);
      goto LAB_011b1d57;
    }
  }
  else {
    if (uVar1 == 0x50000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x50000;
      *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x30);
      goto LAB_011b1d57;
    }
    if (uVar1 == 0x60000) {
      *(undefined4 *)(param_1 + 0xb58) = 0x60000;
      *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x30);
      goto LAB_011b1d57;
    }
  }
  *(undefined4 *)(param_1 + 0xb58) = 0x30000;
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_2 + 0x3c);
LAB_011b1d57:
  FUN_011b1f70();
  if (param_3 != 0) {
    FUN_011b1d80();
  }
  return 0;
}


