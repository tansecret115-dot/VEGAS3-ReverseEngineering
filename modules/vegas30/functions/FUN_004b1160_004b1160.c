/* Module: vegas30.exe
   Function: FUN_004b1160
   Address: 004b1160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b1160(uint param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if ((DAT_0064b4e0 == 0) || ((param_1 != 1 && (DAT_0064b4f0 == 0)))) {
    iVar1 = FUN_00601ab0(&local_4,&param_1,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      param_1 = param_1 & 0xff;
      if ((int)DAT_0064b4e0 <= (int)param_1) {
        DAT_0064b4e0 = param_1;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4f0 = 0;
        return param_1;
      }
    }
  }
  return DAT_0064b4e0;
}


