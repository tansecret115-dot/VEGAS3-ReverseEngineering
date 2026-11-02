/* Module: erv23260.dll
   Function: FUN_63805120
   Address: 63805120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63805120(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  else {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x20) >> 1;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x24) >> 1;
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x28) >> 1;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x14) >> 1;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x18) >> 1;
    uVar2 = *(uint *)(param_1 + 0x1c) >> 1;
  }
  *(uint *)(param_1 + 0x70) = uVar2;
  uVar1 = *(undefined1 *)(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0xaf) = uVar1;
  *(undefined1 *)(param_1 + 0xae) = uVar1;
  *(undefined1 *)(param_1 + 0xad) = uVar1;
  *(undefined1 *)(param_1 + 0xac) = uVar1;
  *(undefined1 *)(param_1 + 0xab) = uVar1;
  *(undefined1 *)(param_1 + 0xaa) = uVar1;
  *(undefined1 *)(param_1 + 0xa9) = uVar1;
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0xb7) = uVar1;
  *(undefined1 *)(param_1 + 0xb6) = uVar1;
  *(undefined1 *)(param_1 + 0xb5) = uVar1;
  *(undefined1 *)(param_1 + 0xb4) = uVar1;
  *(undefined1 *)(param_1 + 0xb3) = uVar1;
  *(undefined1 *)(param_1 + 0xb2) = uVar1;
  *(undefined1 *)(param_1 + 0xb1) = uVar1;
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0xe7) = uVar1;
  *(undefined1 *)(param_1 + 0xe6) = uVar1;
  *(undefined1 *)(param_1 + 0xe5) = uVar1;
  *(undefined1 *)(param_1 + 0xe4) = uVar1;
  *(undefined1 *)(param_1 + 0xe3) = uVar1;
  *(undefined1 *)(param_1 + 0xe2) = uVar1;
  *(undefined1 *)(param_1 + 0xe1) = uVar1;
  *(undefined1 *)(param_1 + 0xe0) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0xef) = uVar1;
  *(undefined1 *)(param_1 + 0xee) = uVar1;
  *(undefined1 *)(param_1 + 0xed) = uVar1;
  *(undefined1 *)(param_1 + 0xec) = uVar1;
  *(undefined1 *)(param_1 + 0xeb) = uVar1;
  *(undefined1 *)(param_1 + 0xea) = uVar1;
  *(undefined1 *)(param_1 + 0xe9) = uVar1;
  *(undefined1 *)(param_1 + 0xe8) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0xf7) = uVar1;
  *(undefined1 *)(param_1 + 0xf6) = uVar1;
  *(undefined1 *)(param_1 + 0xf5) = uVar1;
  *(undefined1 *)(param_1 + 0xf4) = uVar1;
  *(undefined1 *)(param_1 + 0xf3) = uVar1;
  *(undefined1 *)(param_1 + 0xf2) = uVar1;
  *(undefined1 *)(param_1 + 0xf1) = uVar1;
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}


