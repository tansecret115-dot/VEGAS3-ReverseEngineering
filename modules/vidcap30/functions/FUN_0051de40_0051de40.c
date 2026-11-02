/* Module: vidcap30.exe
   Function: FUN_0051de40
   Address: 0051de40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051de40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SHORT SVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0xa4);
  SVar4 = GetKeyState(0x11);
  if (SVar4 < 0) {
    iVar5 = iVar5 * 10;
  }
  switch(param_2) {
  case 0:
    FUN_0051a290(param_1,param_1 + 0x1c,param_1 + 0x1c,iVar3,param_3);
    return;
  case 1:
    FUN_0051a290(param_1,param_1 + 0x1c,param_1 + 0x1c,-iVar3,param_3);
    return;
  case 2:
    FUN_0051a290(param_1,param_1 + 0x1c,param_1 + 0x1c,iVar5,param_3);
    return;
  case 3:
    FUN_0051a290(param_1,param_1 + 0x1c,param_1 + 0x1c,-iVar5,param_3);
    return;
  case 6:
    SVar4 = GetKeyState(0x11);
    if (((-1 < SVar4) && (0 < iVar1)) && (iVar2 < 0)) {
      FUN_0051a2f0(param_1,param_1 + 0x1c,0,param_3);
      return;
    }
    FUN_0051a2f0(param_1,param_1 + 0x1c,iVar1,param_3);
    break;
  case 7:
    FUN_0051a2f0(param_1,param_1 + 0x1c,iVar2,param_3);
    return;
  }
  return;
}


