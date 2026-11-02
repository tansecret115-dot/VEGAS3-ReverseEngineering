/* Module: vegas30.exe
   Function: FUN_004ad050
   Address: 004ad050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004ad050(int param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [6];
  
  uVar1 = param_2;
  uVar3 = *(uint *)(param_2 + 0x4c);
  iVar5 = *(int *)(param_1 + 0xce4);
  local_30 = 0;
  local_28 = FUN_004aaa50(param_1,param_3);
  if (((uVar3 & 4) != 0) && (local_30 = *(int *)(param_1 + 0xcec), local_30 != 0)) {
    iVar2 = FUN_004aa2f0(uVar1,*(undefined4 *)(local_30 + 4),0,0);
    if (iVar2 == 0) {
      local_30 = 0;
    }
    else {
      param_4 = *(undefined4 *)(local_30 + 0x18);
      param_5 = *(undefined4 *)(local_30 + 0x1c);
    }
  }
  local_2c = 1;
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0(&param_3,&param_2,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar3 = (param_2 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar3) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = param_3;
        DAT_0064b4e4 = uVar3;
      }
    }
  }
  if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) goto LAB_004ad167;
  iVar2 = FUN_004aa490(uVar1,3);
  iVar4 = FUN_004aa470(uVar1,3);
  if (0 < iVar2) {
    if (iVar4 < 1) {
      if ((iVar5 != 0) || (iVar4 < iVar2)) goto LAB_004ad167;
    }
    else if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 3)) goto LAB_004ad167;
  }
  local_2c = 0;
LAB_004ad167:
  FUN_004aa700(param_1,uVar1,param_4,param_5);
  piVar6 = local_18;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_1c = *(int *)(uVar1 + 8);
  local_24 = 0;
  local_20 = 0;
  param_4 = 0;
  if (0 < local_1c) {
    piVar6 = (int *)(uVar1 + 0x78);
    do {
      if (((param_4 < *(uint *)(uVar1 + 8)) && (piVar6 != (int *)&DAT_00000008)) &&
         ((*(byte *)(piVar6 + -2) & 0x40) == 0)) {
        iVar5 = *piVar6;
        if ((local_2c == 0) && (iVar5 == 3)) {
          FUN_004aa620(piVar6 + -2);
        }
        else if (local_18[iVar5] == 0) {
          param_2 = -1;
          param_3 = -1;
          if ((local_30 == 0) || (*(int *)(local_30 + 4) != iVar5)) {
            local_24 = FUN_004ac470(param_1,uVar1,param_4,&local_28);
            if ((local_24 == 0) ||
               ((*(int *)(local_24 + 4) == *piVar6 || (*(int *)(local_24 + 4) == 0)))) {
              FUN_004ac750(param_1,local_28,&param_2,&param_3);
              param_2 = param_2 + 6;
            }
            else {
              param_3 = 5;
              param_2 = *(int *)(*(int *)(local_24 + 0x69c) + 0x1c) + 3;
            }
          }
          else {
            local_24 = *(int *)(local_30 + 8);
            FUN_004ac750(param_1,local_28,&param_2,&param_3);
            param_2 = param_2 + 3;
            param_3 = param_3 + -4;
          }
          FUN_004aa840(uVar1,param_2,param_3,iVar5,local_28,&local_24,&local_30);
          piVar6[0x17] = (int)&LAB_004a9e40;
          local_20 = local_20 + 1;
          local_18[iVar5] = (int)(piVar6 + -2);
        }
        else {
          piVar6[0x17] = 0;
        }
      }
      param_4 = param_4 + 1;
      piVar6 = piVar6 + 0x1a;
    } while ((int)param_4 < local_1c);
  }
  return 0 < local_20;
}


