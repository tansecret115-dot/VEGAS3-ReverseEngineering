/* Module: vegas30.exe
   Function: FUN_00595b30
   Address: 00595b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00595b30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 0x120);
  while ((*piVar1 < param_2 && (uVar4 != 2))) {
    uVar4 = uVar4 + 1;
    piVar1 = piVar1 + 0xe;
    if (2 < uVar4) {
      return 0;
    }
  }
  iVar3 = param_1 + 0xf8 + uVar4 * 0x38;
  iVar2 = _SfQueueRemove_8(iVar3,0);
  if (iVar2 == 0) {
    iVar2 = FUN_005958b0(param_1,uVar4);
    if (iVar2 < 0) {
      return 0;
    }
    iVar3 = _SfQueueRemove_8(iVar3,0);
    return iVar3;
  }
  return iVar2;
}


