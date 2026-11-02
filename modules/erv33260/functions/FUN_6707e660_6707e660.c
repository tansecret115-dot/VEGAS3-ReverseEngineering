/* Module: erv33260.dll
   Function: FUN_6707e660
   Address: 6707e660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6707e660(int param_1)

{
  undefined4 *puVar1;
  
  if (*(void **)(param_1 + 0x100) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(void **)(param_1 + 0x104) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(void **)(param_1 + 0x10c) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x10c));
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    FUN_67072140(*(void **)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(void **)(param_1 + 300) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6707b5e0(puVar1);
    FUN_67072140(puVar1);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x124);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6707b5e0(puVar1);
    FUN_67072140(puVar1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (*(void **)(param_1 + 0x11c) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x11c));
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(void **)(param_1 + 0x120) != (void *)0x0) {
    FUN_67071080(*(void **)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return 0;
}


