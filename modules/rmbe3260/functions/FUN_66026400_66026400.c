/* Module: rmbe3260.dll
   Function: FUN_66026400
   Address: 66026400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66026400(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_404 [1024];
  
  if (param_2 < 3) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar3);
      if (iVar1 != 0) {
        FUN_6602e290(*(uint *)((int)&DAT_660671b8 + iVar3) | 0x5dd0000,local_404,0x400);
        if (param_2 == 0) {
          uVar2 = 1;
        }
        else if (param_2 == 1) {
          uVar2 = 2;
        }
        else if (param_2 == 2) {
          uVar2 = 4;
        }
        else {
          uVar2 = 2;
        }
        (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + 0x14,local_404,uVar2);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x24);
    return 0;
  }
  return 0x80070057;
}


