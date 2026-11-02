/* Module: vegas30.exe
   Function: FUN_0044c5f0
   Address: 0044c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c5f0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  if (((uVar1 & 0x10) == 0) &&
     ((iVar2 = *(int *)(param_1 + 0xac), iVar2 == param_3 || (param_3 == 1)))) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      FUN_0044bfa0(param_1,iVar2);
      return 1;
    case 2:
      FUN_0044c250(param_1,iVar2,1);
      return 1;
    case 3:
      FUN_0044c250(param_1,iVar2,0);
      return 1;
    case 4:
      FUN_0044c4d0(param_1,*(undefined4 *)(param_1 + 0x88),uVar1 >> 9 & 1);
      break;
    case 5:
      FUN_0044c390(param_1,iVar2);
      return 1;
    case 6:
      FUN_0044c2f0(param_1,iVar2,uVar1 >> 9 & 1);
      return 1;
    case 7:
      FUN_0044c030(param_1,iVar2);
      return 1;
    case 8:
      FUN_0044c140(param_1,iVar2);
      return 1;
    }
    return 1;
  }
  return 0;
}


