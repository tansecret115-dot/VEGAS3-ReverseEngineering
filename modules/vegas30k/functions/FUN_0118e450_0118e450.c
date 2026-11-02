/* Module: vegas30k.dll
   Function: FUN_0118e450
   Address: 0118e450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118e450(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = CONCAT44(local_4,local_8);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 4) != 0) {
    uVar4 = FUN_01177b20();
    FUN_0118e250();
  }
  puVar3 = (undefined4 *)(param_1 + 0x60);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar5 = FUN_0118e3a0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    uVar5 = FUN_0118e3a0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
  }
  if ((int)(uVar1 << 0x1d) < 0) {
    FUN_0118e160(uVar4,1);
  }
  return 0;
}


