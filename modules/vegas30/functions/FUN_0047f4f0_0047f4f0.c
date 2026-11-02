/* Module: vegas30.exe
   Function: FUN_0047f4f0
   Address: 0047f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047f4f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x69c);
  iVar3 = *(int *)(iVar2 + 0x38);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    iVar1 = param_1 + 0x638;
    iVar3 = FUN_0047de20(iVar1,iVar3,param_1,0,0,0xffffffff);
    if (iVar3 < 0) {
      return iVar3;
    }
    FUN_0047dd90(iVar1,*(undefined4 *)(iVar2 + 0x38),0xffffffff);
    FUN_0047da70(iVar1,param_2,param_3,*(undefined4 *)(iVar2 + 0x3c),0xffffffff);
    *(undefined4 *)(iVar2 + 0x40) = param_2;
    *(undefined4 *)(iVar2 + 0x44) = param_3;
  }
  FUN_005bfba0(param_2,param_3,*(undefined4 *)(iVar2 + 0x3c));
  return 0;
}


