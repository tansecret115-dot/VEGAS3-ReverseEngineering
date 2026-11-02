/* Module: vidcap30.exe
   Function: FUN_0054ebb0
   Address: 0054ebb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054ebb0(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x58))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_005263f0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_005263a0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_0054ecf0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined1 *)(param_1 + 0x11f));
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_0054ee10(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x173);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_00526360(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_0054f1c0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_0054f0b0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_00526610(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_00526330(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  return;
}


