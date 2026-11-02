/* Module: vegas30k.dll
   Function: FUN_0115b4a0
   Address: 0115b4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115b4a0(int param_1)

{
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x58))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_01122650(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_01122600(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_0115b5e0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined1 *)(param_1 + 0x11f));
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_0115b700(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x173);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_011225c0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_0115bab0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_0115b9a0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_01122870(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_01122590(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  return;
}


