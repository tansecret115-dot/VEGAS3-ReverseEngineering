/* Module: vegas30.exe
   Function: FUN_0043ce40
   Address: 0043ce40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043ce40(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  uint local_4;
  
  if (DAT_0064b4e4 == 0) {
    iVar3 = FUN_00601ab0(&local_4,&local_8,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (local_8 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e4 = uVar2;
      }
    }
  }
  uVar1 = DAT_0064b4e4;
  uVar2 = DAT_0064b4e0;
  if (DAT_0064b4e0 == 0) {
    iVar3 = FUN_00601ab0(&local_8,&local_4,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else if ((int)DAT_0064b4e0 <= (int)(local_4 & 0xff)) {
      DAT_0064b4f0 = uVar2;
      _DAT_0064b4f4 = local_8;
      DAT_0064b4e0 = local_4 & 0xff;
    }
  }
  uVar2 = DAT_0064b4e0;
  *param_1 = 0;
  if (0 < DAT_0063dd5c) {
    do {
      iVar3 = *param_1;
      if (((&DAT_0063dcf8)[iVar3 * 0x1b] == uVar2) && ((&DAT_0063dcfc)[iVar3 * 0x1b] == uVar1)) {
        return 1;
      }
      *param_1 = iVar3 + 1;
    } while (iVar3 + 1 < DAT_0063dd5c);
  }
  return 0;
}


