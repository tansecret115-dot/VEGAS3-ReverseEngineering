/* Module: vegas30.exe
   Function: FUN_00589d00
   Address: 00589d00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00589d00(void)

{
  uint uVar1;
  
  uVar1 = FUN_00595540(&DAT_0065a06c);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_0058f340(&DAT_0065a070);
    if (-1 < (int)uVar1) {
      uVar1 = FUN_005952b0(&DAT_0065a068);
      if (-1 < (int)uVar1) {
        uVar1 = FUN_00592430(&DAT_0065a074);
        uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
      }
    }
  }
  return uVar1;
}


