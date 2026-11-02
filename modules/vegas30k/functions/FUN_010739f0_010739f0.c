/* Module: vegas30k.dll
   Function: FUN_010739f0
   Address: 010739f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010739f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  iVar4 = 0;
  iVar1 = *(int *)(param_2 + 0x34c);
  if (*(int *)(param_2 + 0x21c) != 0) {
    iVar4 = FUN_01073150(param_1,param_2,&param_2);
    if (iVar4 == 1) {
      do {
        if (*(code **)(param_1 + 0x20) == (code *)0x0) {
          iVar4 = FUN_010733e0(param_1,param_2,iVar2);
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x20))(param_2);
        }
        iVar3 = FUN_01073150(param_1,iVar2,&param_2);
      } while (iVar3 == 1);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    iVar4 = FUN_01073020(param_1,iVar2,iVar2 + 0xc,iVar2 + 0x110);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  if (((*(uint *)(iVar1 + 0x28) & 0x10) != 0) && (iVar4 = FUN_01072a40(param_1,iVar2), iVar4 < 0)) {
    return iVar4;
  }
  if ((*(uint *)(iVar2 + 8) & 0x10) != 0) {
    FUN_01072cb0(param_1,iVar2);
  }
  FUN_01072e00(param_1,iVar2);
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x10;
  return iVar4;
}


