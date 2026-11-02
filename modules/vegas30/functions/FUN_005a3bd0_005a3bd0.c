/* Module: vegas30.exe
   Function: FUN_005a3bd0
   Address: 005a3bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3bd0(int *param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar2 = DAT_0064b138;
  uVar3 = FUN_005ba4b0(DAT_0064b138,0);
  local_14 = uVar3;
  iVar4 = FUN_004e9f70(uVar2,0x229,0);
  if ((-1 < iVar4) && (iVar4 = FUN_004eaad0(uVar2,0,0x24,0), -1 < iVar4)) {
    local_8 = 0;
    local_c = uVar2;
    local_4 = 0;
    local_10 = 4;
    FUN_005b83b0(uVar2,1);
    local_18 = (int *)FUN_005ba950(uVar2,uVar3,0);
    if (local_18 == (int *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *local_18;
    }
    iVar6 = *param_1;
    if (0x20 - local_8 <= *param_1) {
      iVar6 = 0x20 - local_8;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        pbVar1 = *(byte **)(*(int *)(param_1[2] + iVar7 * 4) + 0x20c);
        if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 4) == 0)) {
          iVar5 = FUN_005a24e0(&local_18,*(undefined4 *)(pbVar1 + 4),DAT_0064b50c,iVar7 + param_2,
                               *(undefined4 *)(pbVar1 + 0xc));
          if (iVar5 == 0) {
            iVar4 = -0x7ff8fff2;
          }
          else if (-1 < iVar4) {
            FUN_005a5060(iVar5,uVar2,4,0xffffffff,0x7fffffff);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    FUN_005ba960(uVar2,local_14,local_18,0);
    FUN_005b84d0(uVar2,1);
    if (-1 < iVar4) {
      FUN_004eb2b0(uVar2);
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(uVar2,0);
    if (-1 < iVar4) {
      FUN_0044e590(&local_10,0,param_3);
    }
  }
  return iVar4;
}


