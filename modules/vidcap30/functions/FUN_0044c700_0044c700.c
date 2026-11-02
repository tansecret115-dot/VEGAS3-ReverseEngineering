/* Module: vidcap30.exe
   Function: FUN_0044c700
   Address: 0044c700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0044cae0(param_1);
  if (iVar1 == 5) {
    uVar2 = FUN_0044c6e0(param_1);
    uVar3 = param_2;
    iVar1 = _SfList_FindSpecificItemRange_16(param_2,0,0xffffffff,uVar2);
    if (iVar1 == -1) {
      param_2 = uVar2;
      uVar3 = _SfList_InsertList_16(uVar3,0xffffffff,&param_2,1);
      return uVar3;
    }
  }
  else {
    iVar1 = FUN_0044c620(param_1);
    uVar3 = param_2;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_0044c5c0(param_1,iVar4);
        uVar2 = FUN_0044c700(uVar2,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
      return uVar2;
    }
  }
  return 0;
}


