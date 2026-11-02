/* Module: vegas30.exe
   Function: FUN_005c8870
   Address: 005c8870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c8870(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005b83b0(param_1,1);
  if (*(int *)(param_3 + 0x38) != 0) {
    if ((DAT_0064761c & 0x600) == 0) {
      FUN_005d9d30(param_1,param_3,1);
    }
    else {
      *(undefined4 *)(param_3 + 0x38) = 0;
    }
  }
  if ((code *)**(undefined4 **)(param_3 + 0x218) != (code *)0x0) {
    (*(code *)**(undefined4 **)(param_3 + 0x218))(param_3);
  }
  if (*(int *)(param_3 + 4) == 3) {
    FUN_0043d090(param_3);
  }
  FUN_0047c430(param_3 + 0x98);
  iVar1 = FUN_005c68e0(param_3);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_005c6910(param_3,iVar1);
    FUN_005c6b30(param_1,param_3,uVar2);
  }
  if (*(int *)(param_3 + 4) == 3) {
    if (*(int *)(param_3 + 0x140) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_3 + 0x140));
      *(undefined4 *)(param_3 + 0x140) = 0;
    }
    FUN_00522050(param_3 + 0x144,0);
    if (*(int *)(param_3 + 0x200) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_3 + 0x200));
      *(undefined4 *)(param_3 + 0x200) = 0;
    }
    if (*(int *)(param_3 + 0x204) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_3 + 0x204));
      *(undefined4 *)(param_3 + 0x204) = 0;
    }
  }
  FUN_005c9a40(param_1,param_2,param_3,0);
  FUN_005b84d0(param_1,1);
  return 0;
}


