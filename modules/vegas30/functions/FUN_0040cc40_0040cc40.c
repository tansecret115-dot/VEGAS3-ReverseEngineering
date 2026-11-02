/* Module: vegas30.exe
   Function: FUN_0040cc40
   Address: 0040cc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cc40(HMENU param_1)

{
  undefined4 uVar1;
  HMENU hMenu;
  int iVar2;
  uint uVar3;
  uint uVar4;
  UINT UVar5;
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  hMenu = param_1;
  _SfCullMenu_16(param_1,&DAT_0063d11c,4,1);
  _SfCullMenu_16(hMenu,&DAT_0063d114,2,1);
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0(&local_c,&param_1,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar3 = ((uint)param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar3) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c;
        DAT_0064b4e4 = uVar3;
      }
    }
  }
  if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
    _SfCullMenu_16(hMenu,&DAT_0063d090,0x16,1);
  }
  _SfCullMenu_16(hMenu,&DAT_0063d0e8,2,1);
  uVar1 = DAT_0064b138;
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0(&local_c,&param_1,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar3 = ((uint)param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar3) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c;
        DAT_0064b4e4 = uVar3;
      }
    }
  }
  if ((int)DAT_0064b4e4 < 0x21) {
LAB_0040cdcb:
    UVar5 = 0;
  }
  else {
    if (DAT_0064b4e0 == 0) {
      iVar2 = FUN_00601ab0(&local_4,&local_8,1);
      if (iVar2 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_8 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e0 = local_8 & 0xff;
      }
    }
    if ((int)DAT_0064b4e0 < 0x21) goto LAB_0040cdcb;
    uVar3 = FUN_005b8900(uVar1,3);
    uVar4 = FUN_005b87c0(3);
    if (uVar3 < uVar4) goto LAB_0040cdcb;
    UVar5 = 1;
  }
  EnableMenuItem(hMenu,0x9d13,UVar5);
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0(&local_4,&param_1,1);
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar3 = ((uint)param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar3) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e4 = uVar3;
      }
    }
  }
  if (0x20 < (int)DAT_0064b4e4) {
    if (DAT_0064b4e0 == 0) {
      iVar2 = FUN_00601ab0(&local_c,&local_8,1);
      if (iVar2 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_8 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c;
        DAT_0064b4e0 = local_8 & 0xff;
      }
    }
    if (0x20 < (int)DAT_0064b4e0) {
      uVar3 = FUN_005b8900(uVar1,2);
      uVar4 = FUN_005b87c0(2);
      if (uVar4 <= uVar3) {
        UVar5 = 1;
        goto LAB_0040cebf;
      }
    }
  }
  UVar5 = 0;
LAB_0040cebf:
  EnableMenuItem(hMenu,0x9d12,UVar5);
  _SfCullMenu_16(hMenu,&DAT_0063d10c,2,1);
  _SfCullMenu_16(hMenu,&DAT_0063d0f0,7,1);
  _SfCleanMenu_12(hMenu,0,0xffffffff);
  return;
}


