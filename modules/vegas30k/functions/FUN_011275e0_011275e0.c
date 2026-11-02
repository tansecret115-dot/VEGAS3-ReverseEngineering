/* Module: vegas30k.dll
   Function: FUN_011275e0
   Address: 011275e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011275e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0xdc) == 0) && (*(char *)(param_1 + 0x11c) == '\0')) {
    FUN_0115a130(param_1);
  }
  if ((*(char *)(param_1 + 0x11b) != '\0') && ((*(byte *)(param_1 + 0x68) & 2) != 0)) {
    switch(*(undefined1 *)(param_1 + 0x11c)) {
    case 0:
      if ((*(byte *)(param_1 + 0xdc) & 7) != 0) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 1:
      if (((*(byte *)(param_1 + 0xdc) & 7) != 0) || (*(uint *)(param_1 + 0xc0) < 5)) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 2:
      if (((byte)*(undefined4 *)(param_1 + 0xdc) & 7) != 4) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 3:
      if (((*(byte *)(param_1 + 0xdc) & 3) != 0) || (*(uint *)(param_1 + 0xc0) < 3)) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 4:
      if (((byte)*(undefined4 *)(param_1 + 0xdc) & 3) != 2) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 5:
      if (((*(byte *)(param_1 + 0xdc) & 1) != 0) || (*(uint *)(param_1 + 0xc0) < 2)) {
        FUN_0115a2b0(param_1);
        return;
      }
      break;
    case 6:
      if ((*(byte *)(param_1 + 0xdc) & 1) == 0) {
        FUN_0115a2b0(param_1);
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_1 + 0x11e);
  *(char *)(param_1 + 0x101) = *(char *)(param_1 + 0x120);
  bVar2 = *(char *)(param_1 + 0x120) * *(char *)(param_1 + 0x123);
  *(byte *)(param_1 + 0x103) = bVar2;
  piVar1 = (int *)(param_1 + 0xf8);
  *piVar1 = *(int *)(param_1 + 0xcc);
  *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x123);
  uVar3 = (uint)bVar2 * *(int *)(param_1 + 0xcc) + 7 >> 3;
  *(uint *)(param_1 + 0xfc) = uVar3;
  FUN_01155f10(param_1,*(int *)(param_1 + 0xe4) + 1,param_2,uVar3);
  if ((((*(char *)(param_1 + 0x11b) != '\0') && (*(byte *)(param_1 + 0x11c) < 6)) &&
      ((*(byte *)(param_1 + 0x68) & 2) != 0)) &&
     (FUN_0115a470(piVar1,*(int *)(param_1 + 0xe4) + 1,*(byte *)(param_1 + 0x11c)), *piVar1 == 0)) {
    FUN_0115a2b0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_0115b4a0(param_1);
  }
  FUN_0115a700(param_1,piVar1);
  if (*(code **)(param_1 + 0x189) != (code *)0x0) {
    (**(code **)(param_1 + 0x189))
              (param_1,*(undefined4 *)(param_1 + 0xdc),*(undefined1 *)(param_1 + 0x11c));
  }
  return;
}


