/* Module: sfcdi.dll
   Function: FUN_5bf42590
   Address: 5bf42590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf42590(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0x1d3);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0x1d3) = 0x22;
  FUN_5bf41b20((char *)(param_1 + 0xe7a),(char *)(param_2 + 0x1e5));
  *(undefined1 *)(param_2 + 0x1ec) = 2;
  *(undefined4 *)(param_2 + 0x1ef) = 0x1000001;
  *(undefined1 *)(param_2 + 499) = 1;
  puVar2 = (undefined4 *)(param_2 + 0x1f5);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0x1f5) = 0x22;
  FUN_5bf41b20((char *)(param_1 + 0xe7a),(char *)(param_2 + 0x207));
  *(undefined1 *)(param_2 + 0x20e) = 2;
  *(undefined4 *)(param_2 + 0x211) = 0x1000001;
  *(undefined1 *)(param_2 + 0x215) = 1;
  *(undefined1 *)(param_2 + 0x216) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0x44;
  *(undefined4 *)(param_2 + 0x14) = 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  puVar2 = (undefined4 *)(param_2 + 0x217);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0x217) = 0x22;
  FUN_5bf41b20((char *)(param_1 + 0xe7a),(char *)(param_2 + 0x229));
  *(undefined1 *)(param_2 + 0x230) = 2;
  *(undefined4 *)(param_2 + 0x233) = 0x1000001;
  *(undefined1 *)(param_2 + 0x237) = 1;
  puVar2 = (undefined4 *)(param_2 + 0x239);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0x239) = 0x22;
  FUN_5bf41b20((char *)(param_1 + 0xe7a),(char *)(param_2 + 0x24b));
  *(undefined1 *)(param_2 + 0x252) = 2;
  *(undefined4 *)(param_2 + 0x255) = 0x1000001;
  *(undefined1 *)(param_2 + 0x259) = 1;
  *(undefined1 *)(param_2 + 0x25a) = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x44;
  *(undefined4 *)(param_2 + 0x1c) = 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}


