/* Module: mp3plug.dll
   Function: FUN_5f6883f0
   Address: 5f6883f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6883f0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 0x1800;
  if (uVar2 == 0x1800) {
    if ((uVar1 & 0x6000) == 0x2000) {
      if (0xe < ((byte)param_1[1] & 0xf)) {
        return -1;
      }
      return *(int *)(&DAT_5f73cb64 + (param_1[1] & 0xf) * 4) * 1000;
    }
    if ((uVar1 & 0x6000) == 0x6000) {
      if (0xe < ((byte)param_1[1] & 0xf)) {
        return -1;
      }
      return *(int *)(&DAT_5f73caec + (param_1[1] & 0xf) * 4) * 1000;
    }
    if ((uVar1 & 0x6000) == 0x4000) {
      if (0xe < ((byte)param_1[1] & 0xf)) {
        return -1;
      }
      return *(int *)(&DAT_5f73cb28 + (param_1[1] & 0xf) * 4) * 1000;
    }
  }
  if ((uVar2 == 0x1000) || (uVar2 == 0)) {
    uVar2 = param_1[1];
    if ((uVar1 & 0x6000) == 0x6000) {
      if (((byte)uVar2 & 0xf) < 0xf) {
        return *(int *)(&DAT_5f73cba0 + (uVar2 & 0xf) * 4) * 1000;
      }
    }
    else if (((byte)uVar2 & 0xf) < 0xf) {
      return *(int *)(&DAT_5f73cbdc + (uVar2 & 0xf) * 4) * 1000;
    }
  }
  return -1;
}


