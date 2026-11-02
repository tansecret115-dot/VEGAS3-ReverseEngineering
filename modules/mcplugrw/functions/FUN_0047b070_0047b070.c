/* Module: mcplugrw.dll
   Function: FUN_0047b070
   Address: 0047b070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047b070(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x58))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_00447df0((uint *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1),
                 (byte)*(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_00447da0(param_1 + 0xf8,(byte *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_0047b1b0((int *)(param_1 + 0xf8),(byte *)(*(int *)(param_1 + 0xe4) + 1),
                 (uint)*(byte *)(param_1 + 0x11f));
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_0047b2d0((int *)(param_1 + 0xf8),(byte *)(*(int *)(param_1 + 0xe4) + 1),
                 (byte *)(param_1 + 0x173));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_00447d60((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_0047b680((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_0047b570((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_00448010((int *)(param_1 + 0xf8),(undefined1 *)(*(int *)(param_1 + 0xe4) + 1));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_00447d30(param_1 + 0xf8,(byte *)(*(int *)(param_1 + 0xe4) + 1));
  }
  return;
}


