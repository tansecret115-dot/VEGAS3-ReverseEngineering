/* Module: sftrans1.dll
   Function: FUN_004a6950
   Address: 004a6950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a6993) */

int __fastcall FUN_004a6950(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x9999999a;
  *(undefined4 *)(param_1 + 0x7c) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x84) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x18) = 0x1734;
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0x3fd99999;
  return param_1;
}


