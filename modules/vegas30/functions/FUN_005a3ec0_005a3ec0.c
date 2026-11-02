/* Module: vegas30.exe
   Function: FUN_005a3ec0
   Address: 005a3ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3ec0(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_28;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  tagPOINT local_10;
  int local_8;
  int local_4;
  
  iVar2 = param_2;
  puVar4 = DAT_0064b138;
  iVar6 = 0;
  iVar5 = FUN_004e9f70(DAT_0064b138,0x229,0);
  if (-1 < iVar5) {
    local_28 = FUN_004ea750(puVar4,param_2,0x2a,0);
    if (local_28 < 0) {
      return local_28;
    }
    if (param_7 != 0) {
      FUN_005b83b0(puVar4,1);
    }
    if (*(int **)(param_2 + 0x140) == (int *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = **(int **)(param_2 + 0x140);
    }
    param_2 = *param_3;
    if (0x20 - local_18 <= *param_3) {
      param_2 = 0x20 - local_18;
    }
    bVar3 = false;
    local_20 = 1;
    local_1c = iVar2;
    local_14 = 0;
    if (0 < param_2) {
      do {
        pbVar1 = *(byte **)(*(int *)(param_3[2] + iVar6 * 4) + 0x20c);
        if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 4) == 0)) && (*(int *)(iVar2 + 4) == 3)) {
          if (*(int *)(*(int *)(pbVar1 + 4) + 0x10) == 5) {
            if (bVar3) goto LAB_005a3fd1;
            bVar3 = true;
          }
          local_28 = FUN_005a3680(param_1,iVar2,*(int *)(pbVar1 + 4),param_4,param_5,param_6,
                                  iVar6 + param_8,*(undefined4 *)(pbVar1 + 0xc));
        }
LAB_005a3fd1:
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2);
    }
    if (-1 < local_28) {
      FUN_004eb2b0(puVar4);
      *(uint *)*puVar4 = *(uint *)*puVar4 | 0x100;
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(puVar4,0);
    if (param_7 != 0) {
      FUN_005b84d0(puVar4,1);
    }
    if (-1 < local_28) {
      iVar2 = *(int *)(iVar2 + 0x218);
      local_10.x = *(int *)(iVar2 + 0x40) + -10;
      local_10.y = *(int *)(iVar2 + 0x44) + -10;
      local_8 = *(int *)(iVar2 + 0x40) + 10;
      local_4 = *(int *)(iVar2 + 0x44) + 10;
      MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_10,2);
      FUN_0044e590(&local_20,0,&local_10);
    }
    iVar5 = 0;
  }
  return iVar5;
}


