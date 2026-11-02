/* Module: vegas30.exe
   Function: FUN_00429580
   Address: 00429580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00429580(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4;
  
  if ((DAT_0064b4e4 == 0) || ((param_1 != 1 && (DAT_0064b4f0 == 0)))) {
    iVar1 = FUN_00601ab0(&local_4,&param_1,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4e4 = uVar2;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4f0 = 0;
        return uVar2;
      }
    }
  }
  return DAT_0064b4e4;
}


