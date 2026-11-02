/* Module: vegas30.exe
   Function: FUN_004ae820
   Address: 004ae820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae820(HMENU param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  UINT UVar3;
  HMENU pHVar4;
  int iVar5;
  HMENU pHVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = param_2;
  pHVar6 = param_1;
  uVar7 = param_2 & 0x10;
  if ((uVar7 == 0) && ((param_2 & 8) == 0)) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  EnableMenuItem(param_1,4,uVar1 | 0x400);
  if ((uVar7 == 0) && ((uVar2 & 4) == 0)) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  EnableMenuItem(pHVar6,5,uVar2 | 0x400);
  UVar3 = 0;
  bVar8 = (param_3 & 0x200000) != 0;
  if (bVar8) {
    UVar3 = 3;
  }
  EnableMenuItem(pHVar6,0xa0cd,UVar3);
  param_1 = (HMENU)0x0;
  if (!bVar8) {
    UVar3 = 0;
    pHVar4 = (HMENU)_SfGetSubmenuByID_12(pHVar6,0xa0cf,&param_1);
    iVar5 = param_4;
    if ((-1 < (int)param_1) && (((param_2 & 8) != 0 || (uVar7 != 0)))) {
      if ((param_4 != 0) && (param_4 != 3)) {
        UVar3 = 3;
      }
      EnableMenuItem(pHVar4,0xa0d0,UVar3);
    }
    pHVar4 = (HMENU)_SfGetSubmenuByID_12(pHVar6,0xa0d2,&param_1);
    UVar3 = 0;
    if ((-1 < (int)param_1) && (((param_2 & 4) != 0 || (uVar7 != 0)))) {
      if ((iVar5 != 0) && (iVar5 != 2)) {
        UVar3 = 3;
      }
      EnableMenuItem(pHVar4,0xa0d3,UVar3);
    }
  }
  if (DAT_0064b4e4 == 0) {
    iVar5 = FUN_00601ab0(&param_3,&param_2,1);
    if (iVar5 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (param_2 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = param_3;
        DAT_0064b4e4 = uVar2;
      }
    }
  }
  if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
    param_1 = (HMENU)0xffffffff;
    pHVar6 = (HMENU)_SfGetSubmenuByID_12(pHVar6,0xa0cf,&param_1);
    if (-1 < (int)param_1) {
      DeleteMenu(pHVar6,0xa0ce,0);
    }
  }
  return;
}


