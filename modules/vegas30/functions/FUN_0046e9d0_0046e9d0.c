/* Module: vegas30.exe
   Function: FUN_0046e9d0
   Address: 0046e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046e9d0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_70;
  HCURSOR local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined **local_30 [12];
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  if (0 < *param_2) {
    FUN_004694a0(param_2,0,0,&local_38,0,0,&local_68);
    FUN_004582a0(param_1,&local_40,&local_50);
    if (param_3 == 0) {
      if (local_50 == 0 && local_4c == 0) {
        local_60 = local_40 - local_38;
        local_48 = local_38;
        local_5c = (local_3c - local_34) - (uint)(local_40 < local_38);
        local_44 = local_34;
        uVar5 = local_40;
        iVar6 = local_3c;
        local_58 = local_60;
        local_54 = local_5c;
      }
      else if ((local_4c < local_34) || ((local_4c <= local_34 && (local_50 <= local_38)))) {
        local_48 = local_50;
        local_60 = local_40;
        local_5c = local_3c;
        local_58 = local_40;
        local_54 = local_3c;
        local_44 = local_4c;
        uVar5 = local_40 + local_50;
        iVar6 = local_3c + local_4c + (uint)CARRY4(local_40,local_50);
      }
      else {
        local_58 = (local_40 - local_38) + local_50;
        local_60 = local_40;
        local_54 = ((local_3c - local_34) - (uint)(local_40 < local_38)) + local_4c +
                   (uint)CARRY4(local_40 - local_38,local_50);
        local_5c = local_3c;
        local_48 = local_50;
        local_44 = local_4c;
        uVar5 = local_40 + local_50;
        iVar6 = local_3c + local_4c + (uint)CARRY4(local_40,local_50);
      }
    }
    else {
      local_58 = local_40;
      local_54 = local_3c;
      local_60 = local_40;
      local_5c = local_3c;
      if (local_50 == 0 && local_4c == 0) {
        local_44 = local_34;
        local_48 = local_38;
        uVar5 = local_40 + local_38;
        iVar6 = local_3c + local_34 + (uint)CARRY4(local_40,local_38);
      }
      else {
        local_44 = local_4c;
        local_48 = local_50;
        uVar5 = local_40 + local_50;
        iVar6 = local_3c + local_4c + (uint)CARRY4(local_40,local_50);
      }
    }
    if ((-1 < local_54) && ((DAT_00647784 == 0 || (-1 < local_5c)))) {
      FUN_0049d860(param_1);
      local_64 = _SfGetMillisec_0();
      local_6c = (HCURSOR)0x0;
      local_68 = *(undefined4 *)param_2[2];
      FUN_004e9f70(uVar1,0x25 - (uint)(param_3 != 0),0);
      if (*(int *)(param_1 + 0xbc8) != 0) {
        FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      if ((*(int *)(param_1 + 0xbc8) == 0) ||
         (iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = _DAT_00000000;
        if (*(int *)(param_1 + 0xbc8) != 0) {
          piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          iVar2 = *piVar3;
        }
      }
      iVar4 = *(int *)(param_1 + 0xcbc);
      if ((iVar4 < 0) || (iVar2 <= iVar4)) {
        iVar4 = 0;
      }
      local_70 = 0;
      FUN_004694a0(param_2,0,&local_70,0,0,0,0);
      local_30[0] = &PTR_FUN_0061296c;
      FUN_0046a990(uVar1,param_1,local_70);
      FUN_0046a9b0(iVar2,iVar4);
      if (DAT_00647784 != 0) {
        FUN_0046bc80(param_1,param_2,iVar4,local_30,local_60,local_5c);
        FUN_0046cb60(param_1,0x100000,local_60,local_5c,local_48,local_44,1,0,0,1);
      }
      FUN_0046a9b0(iVar2,iVar4);
      iVar2 = FUN_0046af80(param_1,param_2,*(undefined4 *)(param_1 + 0xcd0),local_58,local_54,
                           &local_58,iVar4,0xffffffff,local_30,local_64,&local_6c,0);
      if (-1 < iVar2) {
        if ((iVar6 <= local_54) && ((iVar6 < local_54 || (uVar5 < local_58)))) {
          uVar5 = local_58;
          iVar6 = local_54;
        }
        if ((*(int *)(param_1 + 0xccc) <= iVar6) &&
           ((*(int *)(param_1 + 0xccc) < iVar6 || (*(uint *)(param_1 + 0xcc8) < uVar5)))) {
          *(uint *)(param_1 + 0xcc8) = uVar5;
          *(int *)(param_1 + 0xccc) = iVar6;
          FUN_00457e90(param_1,uVar5,iVar6);
        }
        if (local_50 == 0 && local_4c == 0) {
          FUN_00453970(param_1,uVar5,iVar6,0);
        }
        else {
          FUN_00458260(param_1,&local_60,&local_48);
          FUN_00453340(param_1,local_60 + local_50,
                       local_5c + local_4c + (uint)CARRY4(local_60,local_50),local_48,local_44,0);
        }
        FUN_00455090(param_1,0xf);
        FUN_004eb2b0(uVar1);
      }
      FUN_004ea040(uVar1,0);
      FUN_005c9070(uVar1,*(undefined4 *)(param_1 + 0xcd0),0xffffffff,0x10);
      FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
      FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
      FUN_00456c20(param_1);
      DAT_0064767c = DAT_0064767c | 4;
      if (local_6c != (HCURSOR)0x0) {
        SetCursor(local_6c);
      }
      if (iVar2 < 0) {
        _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,iVar2,0,0);
      }
      FUN_0046ac50();
      return iVar2;
    }
  }
  return -0x7fffbffb;
}


