/* Module: vegas30.exe
   Function: FUN_00438b70
   Address: 00438b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00438b70(int param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = Transport_GetStatus();
  switch(DAT_00647808) {
  case 0:
  case 2:
    uVar3 = 1;
    break;
  case 1:
    if ((uVar1 & 0x10000) == 0) {
      if ((uVar1 & 0x20000) == 0) {
        uVar2 = (-(uint)((uVar1 & 0x40000) != 0) & 0xfffffffc) + 0x4fa8;
      }
      else {
        uVar2 = 0x4fa3;
      }
    }
    else {
      uVar2 = 0x4fa2;
    }
    break;
  case 3:
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar1 & 0x10000) == 0) {
        uVar2 = ~uVar1 >> 0x12 & 1 | 0x4fa6;
      }
      else {
        uVar2 = 0x4fa2;
      }
    }
    else {
      uVar2 = 0x4fa5;
    }
    break;
  default:
    uVar3 = 0x8000ffff;
  }
  *(ulong *)(param_1 + 0xac) = uVar1;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  if (uVar2 != 0) {
    _SfLoadString_16(DAT_00647204,uVar2,(undefined1 *)(param_1 + 0xf4),0x40);
  }
  return uVar3;
}


