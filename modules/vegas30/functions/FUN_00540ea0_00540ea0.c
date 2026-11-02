/* Module: vegas30.exe
   Function: FUN_00540ea0
   Address: 00540ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffb;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_005b83b0(param_1,1);
    FUN_005c6590(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 != 0) {
      iVar2 = _SfList_FindSpecificItemRange_16(iVar1,0,0xffffffff,param_2);
      if (iVar2 < 0) {
        iVar2 = -0x7ffb1ff6;
      }
      else {
        iVar2 = FUN_005400b0(iVar1,param_2,1);
        if (-1 < iVar2) {
          iVar2 = 0;
        }
      }
    }
    FUN_005b84d0(param_1,1);
    DAT_0064767c = DAT_0064767c | 0x10;
    return iVar2;
  }
  return -0x7ff8ffa9;
}


