/* Module: vegas30k.dll
   Function: FUN_0117fa60
   Address: 0117fa60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0117fa60(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x4c)) {
  case 0:
    return (*(uint *)(param_1 + 0x48) & 0xf) << 8 | 0xf1;
  case 1:
    return (uint)CONCAT11(1,(byte)*(undefined4 *)(param_1 + 0x48) & 0xf0) << 4 | 0xf1;
  case 2:
    return (ushort)((ushort)((byte)*(undefined4 *)(param_1 + 0x44) & 0xf) << 8 | 0x2000) | 0xf1;
  case 3:
    return (uint)CONCAT11(3,(byte)*(undefined4 *)(param_1 + 0x44) & 0xf0) << 4 | 0xf1;
  case 4:
    return (ushort)((ushort)((byte)*(undefined4 *)(param_1 + 0x40) & 0xf) << 8 | 0x4000) | 0xf1;
  case 5:
    return (uint)CONCAT11(5,(byte)*(undefined4 *)(param_1 + 0x40) & 0xf0) << 4 | 0xf1;
  case 6:
    return (ushort)((ushort)((byte)*(undefined4 *)(param_1 + 0x3c) & 0xf) << 8 | 0x6000) | 0xf1;
  case 7:
    uVar1 = (uint)CONCAT11(7,(byte)*(undefined4 *)(param_1 + 0x3c) & 0xf0) << 4;
    switch(*(undefined4 *)(param_1 + 0x38)) {
    case 1:
      return uVar1 | 0x6f1;
    case 2:
      return uVar1 | 0x4f1;
    case 3:
      uVar1 = uVar1 | 0x200;
    }
  }
  return uVar1 | 0xf1;
}


