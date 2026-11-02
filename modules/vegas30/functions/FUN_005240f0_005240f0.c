/* Module: vegas30.exe
   Function: FUN_005240f0
   Address: 005240f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005240f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x80) = *param_3;
  *(undefined4 *)(param_1 + 0x104) = param_3[0x42];
  uVar2 = param_3[0x43];
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  if (param_3[0x43] != 0) {
    uVar2 = FUN_00529b10(uVar2);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x120) = param_3[0x45];
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(uint *)(param_1 + 0x18c) = (param_3[0x48] & 1) << 2 | *(uint *)(param_1 + 0x18c) & 0xfffffffb;
  *(undefined4 *)(param_1 + 300) = param_3[0x44];
  puVar1 = (undefined4 *)param_3[0x46];
  *(undefined4 **)(param_1 + 0x128) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xec) = *puVar1;
  }
  return 0;
}


