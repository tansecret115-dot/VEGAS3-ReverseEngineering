/* Module: vegas30.exe
   Function: FUN_004c53c0
   Address: 004c53c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c53c0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(param_1 + 0x5d0);
  *puVar1 = *puVar1 | 1;
  FUN_0044f240(puVar1 + 0xaf);
  puVar1[0xa0] = (uint)&DAT_0064b188;
  puVar1[0xa1] = (uint)&DAT_0064b198;
  puVar1[0xa2] = (uint)&DAT_0064b1a8;
  puVar1[0xc3] = (uint)&DAT_0064b1d8;
  uVar2 = DAT_0064b3cc;
  puVar1[0xc4] = DAT_0064b3cc;
  puVar1[199] = uVar2;
  puVar1[0xc5] = 0;
  puVar1[0xc6] = (uint)&DAT_0064b1d8;
  puVar1[200] = 0;
  if (DAT_0064b208 != 0) {
    puVar1[0xc6] = (uint)&DAT_0064b208;
    puVar1[199] = DAT_0064b3d0;
    puVar1[200] = 0;
  }
  puVar1[0xcc] = (uint)&DAT_0064b1d8;
  puVar1[0xcd] = puVar1[0xc4];
  puVar1[0xce] = puVar1[0xc5];
  if (DAT_0064b218 != 0) {
    puVar1[0xcc] = (uint)&DAT_0064b218;
    puVar1[0xcd] = DAT_0064b3d4;
    puVar1[0xce] = 0;
  }
  FUN_0044f280(puVar1 + 0xbb,0xffffffff,0xffffffff,&DAT_0064b268,0,0);
  FUN_0044f280(puVar1 + 0xbf,0xffffffff,0xffffffff,&DAT_0064b278,0,0);
  puVar1[0xc9] = (uint)&DAT_0064b1b8;
  puVar1[0xca] = DAT_0064b3c8;
  puVar1[0xcb] = 0;
  if (*(int *)(param_1 + 0x810) != 0) {
    FUN_00460410(param_1,(int *)(param_1 + 0x810));
  }
  return;
}


