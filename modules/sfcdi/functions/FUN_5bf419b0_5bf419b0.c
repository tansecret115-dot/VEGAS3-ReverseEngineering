/* Module: sfcdi.dll
   Function: FUN_5bf419b0
   Address: 5bf419b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf419b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  iVar4 = 0;
  iVar1 = *(int *)(param_2 + 0x34c);
  if (*(int *)(param_2 + 0x21c) != 0) {
    iVar4 = FUN_5bf41110(param_1,param_2,&param_2);
    if (iVar4 == 1) {
      do {
        if (*(code **)(param_1 + 0x20) == (code *)0x0) {
          iVar4 = FUN_5bf413a0(param_1,param_2,iVar2);
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x20))(param_2);
        }
        iVar3 = FUN_5bf41110(param_1,iVar2,&param_2);
      } while (iVar3 == 1);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    iVar4 = FUN_5bf40fe0(iVar2 + 0x110,iVar2 + 0xc,param_1,iVar2,(LPCSTR)(iVar2 + 0xc),
                         (LPCSTR)(iVar2 + 0x110));
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  if (((*(uint *)(iVar1 + 0x28) & 0x10) != 0) && (iVar4 = FUN_5bf40a00(param_1,iVar2), iVar4 < 0)) {
    return iVar4;
  }
  if ((*(uint *)(iVar2 + 8) & 0x10) != 0) {
    FUN_5bf40c70(param_1,iVar2);
  }
  FUN_5bf40dc0(param_1,iVar2);
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x10;
  return iVar4;
}


