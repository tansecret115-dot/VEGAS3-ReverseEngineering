/* Module: vegas30.exe
   Function: FUN_005dc1c0
   Address: 005dc1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dc1c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a580,DAT_0062a584,DAT_0062a588,DAT_0062a58c,&local_8);
  if ((-1 < (int)uVar1) && (uVar1 = FUN_005db180(param_1,param_2,param_3), -1 < (int)uVar1)) {
    iVar2 = FUN_005c68e0(param_3);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_005c6910(param_3,iVar4);
        uVar1 = FUN_005db140(param_1,param_2,uVar3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    uVar1 = FUN_005db1c0(param_1,param_2,param_3 + 0x98,DAT_0062a670,DAT_0062a674,DAT_0062a678,
                         DAT_0062a67c);
    if (-1 < (int)uVar1) {
      if (*(int *)(param_3 + 4) == 2) {
        uVar1 = FUN_005dbff0(param_1,param_2,param_3 + 0xf0);
      }
      else if (*(int *)(param_3 + 4) == 3) {
        uVar1 = FUN_005dbe20(param_1,param_2,param_3 + 0xf0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = FUN_005db4d0(param_1,param_2,*(undefined4 *)(param_3 + 0x140),DAT_0062a6b0,
                             DAT_0062a6b4,DAT_0062a6b8,DAT_0062a6bc);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = FUN_005db2e0(param_1,param_2,param_3 + 0x144,DAT_0062a700,DAT_0062a704,DAT_0062a708,
                             DAT_0062a70c);
      }
      if (-1 < (int)uVar1) {
        uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
        uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
      }
    }
  }
  return uVar1;
}


