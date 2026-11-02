/* Module: sftrans1.dll
   Function: FUN_00479210
   Address: 00479210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00479210(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_2[0x16] = 1;
  param_2[0x28] = 1;
  puVar1 = (undefined4 *)*param_2;
  param_2[0x23] = 0x3f800000;
  param_2[0x20] = 0x3f800000;
  param_2[0x21] = 0x3f800000;
  param_2[0x22] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0x12] = 0;
  param_2[0x14] = 0;
  param_2[0x1e] = 0;
  param_2[3] = 0;
  param_2[5] = 0x3ff00000;
  param_2[7] = 0x3ff80000;
  param_2[9] = 0x3ff00000;
  param_2[0xb] = 0x3ff00000;
  param_2[0xd] = 0x3ff00000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0x24a;
  param_2[0x13] = 0;
  param_2[0x15] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1f] = 0x3ff00000;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *param_2 = (int)puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1c8);
  param_2[1] = 0;
  param_2[2] = 0x2d0;
  param_2[3] = 0x1e0;
  param_2[4] = *(int *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x8c);
  param_2[6] = 0;
  param_2[5] = iVar2;
  param_2[7] = 0x3ff80000;
  param_2[8] = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0x94);
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[9] = iVar2;
  param_2[0xd] = 0x3ff00000;
  param_2[0xb] = 0x3ff00000;
  param_2[0xe] = *(int *)(param_1 + 0xa8);
  param_2[0xf] = *(int *)(param_1 + 0xac);
  param_2[0x10] = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    param_2[0x11] = 0x40;
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    param_2[0x11] = 0x80;
  }
  else {
    param_2[0x11] = 0x100;
  }
  param_2[0x12] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = param_2[0x11] | 0x212;
  param_2[0x13] = 0;
  param_2[0x15] = 0;
  return 0;
}


