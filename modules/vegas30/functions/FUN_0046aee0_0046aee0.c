/* Module: vegas30.exe
   Function: FUN_0046aee0
   Address: 0046aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046aee0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar6 = 0;
  param_2 = FUN_005c68e0(param_2);
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar4 = FUN_005c6910(uVar3,iVar5);
      iVar2 = *(int *)(iVar4 + 0x18);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x134) & 0x400) != 0)) {
        iVar6 = FUN_005f0d90(&param_1,iVar2);
        if (iVar6 < 0) {
          return iVar6;
        }
        FUN_005bad20(uVar1);
        iVar6 = FUN_005ebfb0(param_1);
        if (iVar6 < 0) {
          return iVar6;
        }
        FUN_005ed3f0(param_1);
        iVar6 = FUN_005c7640(iVar4,param_1);
        if (iVar6 < 0) {
          return iVar6;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return iVar6;
}


