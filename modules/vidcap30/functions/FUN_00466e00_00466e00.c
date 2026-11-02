/* Module: vidcap30.exe
   Function: FUN_00466e00
   Address: 00466e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00466e00(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  if ((((*param_2 & 0x700ef00) == 0) || ((*param_2 & 0x700ef00) == 0x100)) &&
     (((param_2[2] & 0x700ef00) == 0x100 || ((param_2[2] & 0x700ef00) == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (uVar1 == 0) {
    return 0;
  }
  if (((*(byte *)((int)param_1 + 3) ^ *(byte *)((int)param_2 + 3)) & 0x3f) == 0) {
    bVar4 = *(byte *)((int)param_1 + 1);
    bVar5 = bVar4 ^ *(byte *)((int)param_2 + 1);
    if ((bVar5 & 0xe0) == 0) {
      if ((bVar5 & 0xf) == 0) {
        return 0;
      }
      if (bVar3) {
        if (uVar2 != 0) {
          bVar5 = (byte)(uVar1 >> 8) & 0xf;
          bVar4 = (byte)(uVar2 >> 8);
          if ((bVar5 == 1) && ((uVar2 & 0xf00) == 0)) {
            return 0;
          }
          if (((uVar1 & 0xf00) == 0) && ((bVar4 & 0xf) == 1)) {
            return 0;
          }
          if (bVar5 != 2) {
            return 1;
          }
          if ((bVar4 & 0xf) != 2) {
            return 1;
          }
          return 0;
        }
      }
      else if ((*(byte *)((int)param_2 + 3) & 7) != 0) {
        bVar5 = *(byte *)((int)param_2 + 1) & 0xf;
        if ((((bVar5 == 0) || (bVar5 == 3)) || (bVar5 == 2)) || ((bVar5 == 4 || (bVar5 == 6)))) {
          if ((bVar4 & 0xf) == 1) {
            return 1;
          }
          if ((bVar4 & 0xf) == 5) {
            return 1;
          }
        }
        if ((bVar4 & 0xf) == 0xf) {
          return 1;
        }
        return 0;
      }
      if ((bVar4 & 0xf) == 0) {
        return 0;
      }
      if ((bVar4 & 0xf) == 1) {
        return 0;
      }
    }
  }
  return 1;
}


