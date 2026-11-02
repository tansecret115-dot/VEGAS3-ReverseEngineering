/* Module: vegas30.exe
   Function: FUN_004e8aa0
   Address: 004e8aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e8aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0064b138;
  if (((param_1 == 0x9d08) || (param_1 == 0x9d09)) || (param_1 == 0xa1bb)) {
    FUN_004124c0();
    FUN_005b8630(uVar1);
    FUN_005b42d0();
    iVar2 = FUN_005b51d0();
    if (iVar2 != 0) {
      if (param_1 == 0xa1bb) {
        FUN_004e8b40(uVar1,0x9d08,iVar2);
        return;
      }
      if (param_2 == 0) {
        param_2 = 1;
      }
      FUN_004e8b40(uVar1,param_1,param_2);
    }
  }
  else if (param_1 == 0xa1bc) {
    FUN_004e9e70(DAT_0064b138);
    return;
  }
  return;
}


