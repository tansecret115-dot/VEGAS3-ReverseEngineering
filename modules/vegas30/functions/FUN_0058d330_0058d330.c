/* Module: vegas30.exe
   Function: FUN_0058d330
   Address: 0058d330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058d330(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined4 local_48;
  uint local_38;
  CHAR local_28 [40];
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(param_2 + 0x130) == 0) {
    return -0x7fffbffb;
  }
  iVar1 = **(int **)(*(int *)(param_2 + 0x130) + 8);
  if (iVar1 != 0) {
    puVar4 = local_80;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_80[0] = 0x10;
    local_80[2] = param_3;
    local_80[3] = param_4;
    local_70 = param_5;
    local_6c = param_6;
    local_68 = 0;
    local_64 = *(undefined4 *)(iVar1 + 0xc);
    local_60 = param_7;
    iVar1 = FUN_005c70c0(uVar2,param_1,param_2,local_80,*(undefined4 *)(iVar1 + 0xc),1,1);
    if (iVar1 < 0) {
      return iVar1;
    }
    puVar4 = local_58;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_58[0] = param_3;
    local_38 = local_38 | 1;
    local_58[1] = param_4;
    iVar1 = *param_8 + 1;
    local_58[2] = param_5;
    local_58[3] = param_6;
    local_48 = 0;
    uVar2 = _SfGetString_8(DAT_00647204,0x5612);
    SfPrintF(local_28,uVar2,iVar1);
    iVar1 = lstrlenA(local_28);
    iVar1 = _SfList_AllocAndInsertItem_20(param_8,local_58,iVar1 + 0x39,0xffffffff,0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}


