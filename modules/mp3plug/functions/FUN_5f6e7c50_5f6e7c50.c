/* Module: mp3plug.dll
   Function: FUN_5f6e7c50
   Address: 5f6e7c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6e7c50(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int *param_5,
            int param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  FUN_5f6e62d0(param_5,param_4,0xc);
  FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x304),9);
  FUN_5f6e62d0(param_5,*(int *)(param_6 + 0x164) + 0x96,8);
  if (param_10 == 0) {
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x204),4);
  }
  else {
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x204),9);
  }
  FUN_5f6e62d0(param_5,param_7,1);
  if (param_10 == 0) {
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x314),5);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x318),5);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x31c),5);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x30c),4);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x310),3);
  }
  else {
    if (((param_2 == 1) || (param_2 == 2)) || (param_2 == 3)) {
      FUN_5f6e62d0(param_5,param_2,2);
      FUN_5f6e62d0(param_5,0,1);
    }
    else if (param_2 == 4) {
      FUN_5f6e62d0(param_5,1,2);
      FUN_5f6e62d0(param_5,1,1);
    }
    else if (param_2 == 6) {
      FUN_5f6e62d0(param_5,3,2);
      FUN_5f6e62d0(param_5,1,1);
    }
    else if (param_2 == 5) {
      FUN_5f6e62d0(param_5,2,2);
      FUN_5f6e62d0(param_5,1,1);
    }
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x314),5);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x318),5);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x144),3);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x148),3);
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x14c),3);
  }
  if (param_10 == 0) {
    FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x160),1);
  }
  FUN_5f6e62d0(param_5,*(uint *)(param_6 + 8),1);
  FUN_5f6e62d0(param_5,*(uint *)(param_6 + 0x2fc),1);
  return;
}


