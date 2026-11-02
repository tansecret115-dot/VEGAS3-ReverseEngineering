/* Module: rmbe3260.dll
   Function: FUN_66039130
   Address: 66039130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66039130(int param_1)

{
  undefined1 *puVar1;
  
  *(undefined4 *)(param_1 + 8) = 0x2e7261fd;
  *(undefined2 *)(param_1 + 0xc) = 5;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x2e726135;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x4a);
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((int)(puVar1 + (-0x4a - param_1)) < 5);
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  return;
}


