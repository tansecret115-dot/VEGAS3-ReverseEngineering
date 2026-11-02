/* Module: vegas30.exe
   Function: FUN_005409c0
   Address: 005409c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005409c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  iVar2 = param_1;
  iVar4 = -0x7fffbffb;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar4 = -0x7ff8ffa9;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 != 0) {
      if ((param_3 == 0) &&
         (iVar4 = FUN_00540af0(param_1,*(undefined4 *)(param_2 + 0x10),
                               *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x20),
                               *(undefined4 *)(param_2 + 0x24),0), iVar4 < 0)) {
        return iVar4;
      }
      iVar4 = FUN_00540a40(iVar2,iVar3,&param_1);
      if ((-1 < iVar4) && (iVar4 = _SfList_InsertList_16(iVar1,param_1,0,0xffffffff), -1 < iVar4)) {
        return 0;
      }
    }
  }
  return iVar4;
}


