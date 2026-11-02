/* Module: sfcdi.dll
   Function: FUN_5bf18030
   Address: 5bf18030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18030(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x28);
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar1 = FUN_5bf171b0(param_1);
  *(uint *)(param_1 + 0x40) = uVar1;
  if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x96;
    *(undefined4 *)(param_1 + 0x30) = 4;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x70) = 0x800;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x930;
  return 0;
}


