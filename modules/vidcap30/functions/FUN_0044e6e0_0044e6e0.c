/* Module: vidcap30.exe
   Function: FUN_0044e6e0
   Address: 0044e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044e6e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0x80004005;
  uVar1 = FUN_0044c6a0(param_2);
  uVar2 = FUN_0044cae0(param_1);
  switch(uVar2) {
  case 3:
    if (param_2 == param_1) {
      return 0x80004005;
    }
    iVar3 = FUN_0044c5f0(param_2);
    iVar4 = FUN_0044cae0(iVar3);
    while (iVar4 == 3) {
      if (iVar3 == param_1) {
        return 0x80004005;
      }
      iVar3 = FUN_0044c5f0(iVar3);
      iVar4 = FUN_0044cae0(iVar3);
    }
    uVar2 = FUN_0044c6a0(param_1);
    uVar5 = FUN_0044f840(uVar2,uVar1);
    break;
  case 4:
    uVar1 = FUN_0044f6b0(param_1,uVar1);
    return uVar1;
  case 5:
    uVar1 = FUN_0044f7c0(param_1,uVar1);
    return uVar1;
  case 7:
    uVar1 = FUN_0044f6f0(param_1,uVar1);
    return uVar1;
  }
  return uVar5;
}


