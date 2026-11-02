/* Module: vegas30.exe
   Function: FUN_00446c80
   Address: 00446c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446c80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      iVar1 = *(int *)(param_1 + 0xac);
      if ((*(uint *)(param_1 + 0x9c) & 0x200) == 0) {
        uVar2 = FUN_005a5060(param_2,iVar1,1,*(undefined4 *)(iVar1 + 0x20),
                             *(undefined4 *)(iVar1 + 0x24));
        return uVar2;
      }
      uVar2 = FUN_005a5060(param_2,iVar1,1,*(undefined4 *)(iVar1 + 0x20),
                           *(undefined4 *)(iVar1 + 0x24));
      return uVar2;
    case 2:
      uVar2 = FUN_005a5060(param_2,*(undefined4 *)(param_1 + 0xac),2,0xffffffff,0x7fffffff);
      return uVar2;
    case 3:
      uVar2 = FUN_005a5060(param_2,*(undefined4 *)(param_1 + 0xac),3,0xffffffff,0x7fffffff);
      return uVar2;
    case 4:
      uVar2 = FUN_005a5060(param_2,*(undefined4 *)(param_1 + 0x88),4,0xffffffff,0x7fffffff);
      return uVar2;
    case 5:
      uVar2 = FUN_005a5060(param_2,*(undefined4 *)(param_1 + 0xb0),5,0xffffffff,0x7fffffff);
      return uVar2;
    case 6:
      uVar2 = FUN_005a5060(param_2,*(undefined4 *)(param_1 + 0xac),6,0xffffffff,0x7fffffff);
      return uVar2;
    case 7:
      iVar1 = *(int *)(param_1 + 0xac);
      uVar2 = FUN_005a5060(param_2,iVar1,7,*(undefined4 *)(iVar1 + 0x78),
                           *(undefined4 *)(iVar1 + 0x7c));
      return uVar2;
    case 8:
      iVar1 = *(int *)(param_1 + 0xac);
      uVar2 = FUN_005a5060(param_2,iVar1,8,*(undefined4 *)(iVar1 + 0x80),
                           *(undefined4 *)(iVar1 + 0x84));
      return uVar2;
    }
  }
  return 0;
}


