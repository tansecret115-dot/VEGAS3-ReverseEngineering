/* Module: sfcdi.dll
   Function: FUN_5bf48dc0
   Address: 5bf48dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf48dc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0xab);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0xab) = 0x30;
  FUN_5bf41b20((char *)(param_1 + 0xb2a),(char *)(param_2 + 0xbd));
  *(undefined1 *)(param_2 + 0xc4) = 2;
  *(undefined4 *)(param_2 + 199) = 0x1000001;
  *(undefined1 *)(param_2 + 0xcb) = 1;
  *(undefined4 *)(param_2 + 0xcd) = 0;
  *(undefined4 *)(param_2 + 0xd1) = 0;
  *(undefined4 *)(param_2 + 0xd5) = 0;
  *(undefined2 *)(param_2 + 0xd9) = 0;
  *(undefined1 *)(param_2 + 0xd3) = 0x58;
  *(undefined1 *)(param_2 + 0xd4) = 0x41;
  *(undefined1 *)(param_2 + 0xd1) = 0x8d;
  *(undefined1 *)(param_2 + 0xd2) = 0x55;
  puVar2 = (undefined4 *)(param_2 + 0x100);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)(param_2 + 0x100) = 0x30;
  FUN_5bf41b20((char *)(param_1 + 0xb2a),(char *)(param_2 + 0x112));
  *(undefined1 *)(param_2 + 0x119) = 2;
  *(undefined4 *)(param_2 + 0x11c) = 0x1000001;
  *(undefined1 *)(param_2 + 0x120) = 1;
  *(undefined1 *)(param_2 + 0x121) = 1;
  *(undefined4 *)(param_2 + 0x122) = 0;
  *(undefined4 *)(param_2 + 0x126) = 0;
  *(undefined4 *)(param_2 + 0x12a) = 0;
  *(undefined2 *)(param_2 + 0x12e) = 0;
  *(undefined1 *)(param_2 + 0x128) = 0x58;
  *(undefined1 *)(param_2 + 0x129) = 0x41;
  *(undefined1 *)(param_2 + 0x126) = 0x8d;
  *(undefined1 *)(param_2 + 0x127) = 0x55;
  *(undefined4 *)(param_2 + 0x14) = 0x60;
  *(undefined4 *)(param_2 + 0x10) = 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


