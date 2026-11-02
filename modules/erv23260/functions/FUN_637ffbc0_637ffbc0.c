/* Module: erv23260.dll
   Function: FUN_637ffbc0
   Address: 637ffbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637ffbc0(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0x50333632) {
    *(undefined1 **)(param_1 + 0x10) = *(undefined1 **)(param_1 + 0x14);
    **(undefined1 **)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x3f);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 1) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 2) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 3) = *(undefined1 *)(param_1 + 0x42);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10) + 4;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  }
  **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x14) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x15) = *(undefined1 *)(param_1 + 0x3c);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x16) = *(undefined1 *)(param_1 + 0x3d);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x17) = *(undefined1 *)(param_1 + 0x3e);
  return;
}


