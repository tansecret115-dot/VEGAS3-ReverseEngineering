/* Module: sfmarket2.dll
   Function: FUN_00483860
   Address: 00483860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483860(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x58))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_00450460((uint *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1),
                 (byte)*(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_00450410(param_1 + 0xf8,(byte *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_004839a0((int *)(param_1 + 0xf8),(byte *)(*(int *)(param_1 + 0xe4) + 1),
                 (uint)*(byte *)(param_1 + 0x11f));
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_00483ac0((int *)(param_1 + 0xf8),(byte *)(*(int *)(param_1 + 0xe4) + 1),
                 (byte *)(param_1 + 0x173));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_004503d0((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_00483e70((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_00483d60((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_00450680((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_004503a0(param_1 + 0xf8,(byte *)(*(int *)(param_1 + 0xe4) + 1));
  }
  return;
}


