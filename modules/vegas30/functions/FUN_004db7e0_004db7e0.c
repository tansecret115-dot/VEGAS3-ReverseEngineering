/* Module: vegas30.exe
   Function: FUN_004db7e0
   Address: 004db7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004db7e0(int param_1,undefined4 param_2,HMENU param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  code *pcVar5;
  UINT UVar6;
  int local_230;
  int local_22c;
  int local_228 [2];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  int local_218;
  uchar local_208 [260];
  uchar local_104 [260];
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0xd50);
    local_218 = FUN_004dbce0(param_1);
    iVar1 = FUN_004dbd20(param_1);
    iVar2 = FUN_004dbd30(param_1);
    if (param_4 == 0) {
      CheckMenuItem(param_3,0xa7d1,-(uint)(DAT_006495dc != 0) & 8);
      pcVar5 = EnableMenuItem_exref;
      EnableMenuItem(param_3,0x1451,(uint)(iVar2 == 0));
      EnableMenuItem(param_3,0x1456,(uint)(iVar1 == 0));
      if ((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0xce4), iVar3 != 0)) {
        _SfCullMenu_16(param_3,&DAT_00613c8c,1,1);
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 2) {
          EnableMenuItem(param_3,0x1450,0);
          FUN_004a5f60(param_3,0x1450,0);
          DeleteMenu(param_3,0xa7f5,0);
        }
        else {
          DeleteMenu(param_3,0x1450,0);
        }
        iVar1 = 0;
        if ((DAT_00647e30 != 1) || (iVar3 != 3)) {
          _SfCullMenu_16(param_3,&DAT_00613c90,1,1);
        }
        if (*(int *)(param_1 + 0xd94) < 2) {
          _SfCullMenu_16(param_3,&DAT_00613c94,6,1);
        }
        else {
          local_22c = *(int *)(param_1 + 0xd98) + 1;
          if (local_22c < 3) {
            if (local_22c < 0) {
              local_22c = 2;
            }
          }
          else {
            local_22c = 0;
          }
          local_230 = *(int *)(param_1 + 0xd98) + -1;
          if (local_230 < 3) {
            if (local_230 < 0) {
              local_230 = 2;
            }
          }
          else {
            local_230 = 0;
          }
          do {
            _SfLoadString_16(DAT_00647204,iVar1 + 0x1478,local_208,0x104);
            if (local_22c == iVar1) {
              _SfLoadString_16(DAT_00647204,0x147b,local_104,0x104);
LAB_004dba90:
              _mbscat(local_208,local_104);
            }
            else if (local_230 == iVar1) {
              _SfLoadString_16(DAT_00647204,0x147c,local_104,0x104);
              goto LAB_004dba90;
            }
            _SfStringReplaceChars_12(local_208,9,8);
            _SfStringReplaceChars_12(local_208,8,8);
            ModifyMenuA(param_3,iVar1 + 0xa7ceU,0,iVar1 + 0xa7ceU,(LPCSTR)local_208);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 3);
          CheckMenuRadioItem(param_3,0xa7ce,0xa7d0,*(int *)(param_1 + 0xd98) + 0xa7ce,0);
          iVar3 = DAT_0064a578 + 1;
          local_22c = DAT_0064a578 + -1;
          iVar1 = 0;
          do {
            _SfLoadString_16(DAT_00647204,iVar1 + 0x1473,local_208,0x104);
            if (iVar3 == iVar1) {
              _SfLoadString_16(DAT_00647204,0x1477,local_104,0x104);
LAB_004dbb88:
              _mbscat(local_208,local_104);
            }
            else if (local_22c == iVar1) {
              _SfLoadString_16(DAT_00647204,0x1476,local_104,0x104);
              goto LAB_004dbb88;
            }
            _SfStringReplaceChars_12(local_208,9,8);
            _SfStringReplaceChars_12(local_208,8,8);
            ModifyMenuA(param_3,iVar1 + 0x1470U,0,iVar1 + 0x1470U,(LPCSTR)local_208);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 3);
          CheckMenuRadioItem(param_3,0x1470,0x1472,DAT_0064a578 + 0x1470,0);
          pcVar5 = EnableMenuItem_exref;
        }
        uVar4 = 1;
        if (((*(int **)(param_1 + 0xc38) != (int *)0x0) && (0 < **(int **)(param_1 + 0xc38))) &&
           (local_218 != 0)) {
          uVar4 = 0;
        }
        (*pcVar5)(param_3,0x1454,uVar4);
        if (*(int *)(param_1 + 0xb78) == 0 && *(int *)(param_1 + 0xb7c) == 0) {
          _SfGrayMenu_12(param_3,&DAT_00613cac,1);
        }
        if (DAT_00647630 != 0) {
          FUN_00458260(DAT_00647630,local_21c,&stack0xfffffdcc);
        }
        _SfGrayMenu_12(param_3,&DAT_00613cb0,2);
        FUN_004dbd80(param_1,local_228,&local_22c,local_220);
        (*pcVar5)(param_3,0xa7e0,local_228[0] == 0);
        (*pcVar5)(param_3,0xa7e1,unaff_EBP == 0);
        return;
      }
      _SfCullMenu_16(param_3,&DAT_00613c40,10,1);
      _SfGrayMenu_12(param_3,&DAT_00613c68,9);
    }
    else {
      if (param_4 == 1) {
        UVar6 = 0;
        iVar3 = GetMenuItemCount(param_3);
        if (0 < iVar3) {
          do {
            EnableMenuItem(param_3,UVar6,0x400);
            UVar6 = UVar6 + 1;
            iVar3 = GetMenuItemCount(param_3);
          } while ((int)UVar6 < iVar3);
        }
        CheckMenuItem(param_3,0xa7d1,-(uint)(DAT_006495dc != 0) & 8);
        _SfCullMenu_16(param_3,&DAT_00613c3c,1,1);
        return;
      }
      UVar6 = 0;
      iVar3 = GetMenuItemCount(param_3);
      if (0 < iVar3) {
        do {
          EnableMenuItem(param_3,UVar6,0x401);
          UVar6 = UVar6 + 1;
          iVar3 = GetMenuItemCount(param_3);
        } while ((int)UVar6 < iVar3);
        return;
      }
    }
  }
  return;
}


