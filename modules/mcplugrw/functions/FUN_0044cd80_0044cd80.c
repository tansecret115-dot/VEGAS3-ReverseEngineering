/* Module: mcplugrw.dll
   Function: FUN_0044cd80
   Address: 0044cd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cd80(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  if ((param_1[0x37] == 0) && ((char)param_1[0x47] == '\0')) {
    FUN_00479d00(param_1);
  }
  if ((*(char *)((int)param_1 + 0x11b) != '\0') && ((*(byte *)(param_1 + 0x1a) & 2) != 0)) {
    switch((char)param_1[0x47]) {
    case '\0':
      if ((*(byte *)(param_1 + 0x37) & 7) != 0) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x01':
      if (((*(byte *)(param_1 + 0x37) & 7) != 0) || ((uint)param_1[0x30] < 5)) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x02':
      if (((byte)param_1[0x37] & 7) != 4) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x03':
      if (((*(byte *)(param_1 + 0x37) & 3) != 0) || ((uint)param_1[0x30] < 3)) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x04':
      if (((byte)param_1[0x37] & 3) != 2) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x05':
      if (((*(byte *)(param_1 + 0x37) & 1) != 0) || ((uint)param_1[0x30] < 2)) {
        FUN_00479e80(param_1);
        return;
      }
      break;
    case '\x06':
      if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
        FUN_00479e80(param_1);
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)((int)param_1 + 0x11e);
  *(char *)((int)param_1 + 0x101) = (char)param_1[0x48];
  bVar2 = (char)param_1[0x48] * *(char *)((int)param_1 + 0x123);
  *(byte *)((int)param_1 + 0x103) = bVar2;
  puVar1 = (uint *)(param_1 + 0x3e);
  *puVar1 = param_1[0x33];
  *(char *)((int)param_1 + 0x102) = *(char *)((int)param_1 + 0x123);
  uVar3 = (uint)bVar2 * param_1[0x33] + 7 >> 3;
  param_1[0x3f] = uVar3;
  FUN_00475ae0(param_1,(undefined4 *)(param_1[0x39] + 1),param_2,uVar3);
  if ((((*(char *)((int)param_1 + 0x11b) != '\0') && (*(byte *)(param_1 + 0x47) < 6)) &&
      ((*(byte *)(param_1 + 0x1a) & 2) != 0)) &&
     (FUN_0047a040(puVar1,(undefined4 *)(param_1[0x39] + 1),
                   (undefined4 *)(uint)*(byte *)(param_1 + 0x47)), *puVar1 == 0)) {
    FUN_00479e80(param_1);
    return;
  }
  if (param_1[0x1a] != 0) {
    FUN_0047b070((int)param_1);
  }
  FUN_0047a2d0(param_1,(byte *)puVar1);
  if (*(code **)((int)param_1 + 0x189) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x189))(param_1,param_1[0x37],(char)param_1[0x47]);
  }
  return;
}


