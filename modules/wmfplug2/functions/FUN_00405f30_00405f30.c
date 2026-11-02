/* Module: wmfplug2.dll
   Function: FUN_00405f30
   Address: 00405f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405f30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    puVar1 = calloc(1,0x70);
    *(undefined4 **)(param_1 + 0x160) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    **(undefined4 **)(param_1 + 0x160) = 0x48;
    iVar2 = *(int *)(param_1 + 0x160);
    *(undefined4 *)(iVar2 + 4) = DAT_0047b2a0;
    *(undefined4 *)(iVar2 + 8) = DAT_0047b2a4;
    *(undefined4 *)(iVar2 + 0xc) = DAT_0047b2a8;
    *(undefined4 *)(iVar2 + 0x10) = DAT_0047b2ac;
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x14) = *(undefined4 *)(param_1 + 0x4c);
    *(uint *)(*(int *)(param_1 + 0x160) + 0x18) = (uint)*(ushort *)(*(int *)(param_1 + 0x30) + 0xe);
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x1c) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x20) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 8);
    iVar2 = *(int *)(param_1 + 0x160);
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0x3ff00000;
    iVar2 = *(int *)(param_1 + 0x160);
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x34) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x38) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x40) = 0x28;
    iVar2 = *(int *)(param_1 + 0x160);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    uVar3 = __alldiv(*(uint *)(param_1 + 0x58),*(uint *)(param_1 + 0x5c),10000000,0);
    *(int *)(iVar2 + 0x58) = (int)uVar3;
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x160);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x70;
  }
  return 0;
}


