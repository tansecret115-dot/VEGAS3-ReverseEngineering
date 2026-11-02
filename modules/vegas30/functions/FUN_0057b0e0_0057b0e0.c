/* Module: vegas30.exe
   Function: FUN_0057b0e0
   Address: 0057b0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057b0e0(void)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  uint local_4;
  
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0(&local_4,&local_8,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar1 = (local_8 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar1) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e4 = uVar1;
      }
    }
  }
  uVar1 = DAT_0064b4e4;
  if (DAT_0064b4e0 == 0) {
    iVar2 = FUN_00601ab0(&local_8,&local_4,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else if ((int)DAT_0064b4e0 <= (int)(local_4 & 0xff)) {
      DAT_0064b4f0 = 0;
      _DAT_0064b4f4 = local_8;
      DAT_0064b4e0 = local_4 & 0xff;
    }
  }
  return DAT_0064b4e0 & 0xff ^ (uVar1 & 0xff) << 8;
}


