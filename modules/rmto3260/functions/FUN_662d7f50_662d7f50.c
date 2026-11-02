/* Module: rmto3260.dll
   Function: FUN_662d7f50
   Address: 662d7f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d7f50(int *param_1,int *param_2)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte local_138 [256];
  int local_38 [3];
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20 [3];
  int local_14 [3];
  int *local_8;
  
  local_2c = (int *)0x0;
  local_8 = (int *)0x0;
  iVar1 = RMACreateRMEdit(&local_2c);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = (**(code **)*local_2c)(local_2c,&DAT_66306998,&local_8);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))(local_2c);
    local_2c = (int *)0x0;
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*local_8 + 0x40))(local_8,*param_1,1);
  if (iVar1 < 0) goto LAB_662d8419;
  iVar1 = (**(code **)(*local_8 + 0x4c))(local_8,local_138,0xff);
  this = param_2;
  if (-1 < iVar1) {
    puVar2 = FUN_662f5850(local_14,local_138);
    puVar3 = FUN_662ef160(local_20,PTR_s__property_title__6630ae18);
    puVar2 = FUN_662ef380(local_38,puVar3,puVar2);
    FUN_662ef560(this,puVar2);
    FUN_662ef0f0(local_38);
    FUN_662ef0f0(local_20);
    FUN_662ef0f0(local_14);
  }
  iVar1 = (**(code **)(*local_8 + 0x50))(local_8,local_138,0xff);
  if (-1 < iVar1) {
    puVar2 = FUN_662f5850(local_38,local_138);
    puVar3 = FUN_662ef160(local_20,PTR_s__property_author__6630ae1c);
    puVar2 = FUN_662ef380(local_14,puVar3,puVar2);
    FUN_662ef560(this,puVar2);
    FUN_662ef0f0(local_14);
    FUN_662ef0f0(local_20);
    FUN_662ef0f0(local_38);
  }
  iVar1 = (**(code **)(*local_8 + 0x54))(local_8,local_138,0xff);
  if (-1 < iVar1) {
    puVar2 = FUN_662f5850(local_38,local_138);
    puVar3 = FUN_662ef160(local_20,PTR_s__property_copyright__6630ae20);
    puVar2 = FUN_662ef380(local_14,puVar3,puVar2);
    FUN_662ef560(this,puVar2);
    FUN_662ef0f0(local_14);
    FUN_662ef0f0(local_20);
    FUN_662ef0f0(local_38);
  }
  local_24 = (int *)0x0;
  iVar1 = (**(code **)*local_8)(local_8,&DAT_663069b8,&local_24);
  if (iVar1 < 0) goto LAB_662d8419;
  param_2 = (int *)0x0;
  param_1 = (int *)0x0;
  iVar1 = (**(code **)(*local_24 + 0x20))(local_24,&param_2);
  if (-1 < iVar1) {
    local_28 = 0;
    iVar4 = (**(code **)(*local_24 + 0x10))(local_24,&local_28);
    if ((iVar4 < 0) || (local_28 == 0)) {
      iVar4 = (**(code **)(*local_24 + 0xc))(local_24,&local_28);
      if ((-1 < iVar4) && (local_28 != 0)) {
        pcVar7 = &DAT_6630af70;
        puVar2 = FUN_662ef160(local_20,PTR_s__property_media_type__6630ae34);
        puVar2 = FUN_662ef3d0(local_14,puVar2,pcVar7);
        FUN_662ef560(this,puVar2);
        FUN_662ef0f0(local_14);
        goto LAB_662d81ce;
      }
    }
    else {
      pcVar7 = &DAT_6630af74;
      puVar2 = FUN_662ef160(local_20,PTR_s__property_media_type__6630ae34);
      puVar2 = FUN_662ef3d0(local_14,puVar2,pcVar7);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
LAB_662d81ce:
      FUN_662ef0f0(local_20);
    }
    iVar4 = (**(code **)(*param_2 + 0x30))(param_2,s_Keywords_6630af64,&param_1);
    if (-1 < iVar4) {
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
      puVar2 = FUN_662f5850(local_20,pbVar5);
      puVar2 = FUN_662ef430(local_14,PTR_s__property_keywords__6630ae2c,puVar2);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
      FUN_662ef0f0(local_20);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*param_2 + 0x30))(param_2,s_Abstract_6630af58,&param_1);
    if (-1 < iVar4) {
      uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
      if (0x401 < uVar6) {
        iVar4 = (**(code **)(*param_1 + 0x1c))(param_1);
        *(undefined1 *)(iVar4 + 0x400) = 0;
      }
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
      puVar2 = FUN_662f5850(local_20,pbVar5);
      puVar2 = FUN_662ef430(local_14,PTR_s__property_description__6630ae28,puVar2);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
      FUN_662ef0f0(local_20);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*param_2 + 0x30))(param_2,s_Generated_By_6630af48,&param_1);
    if (-1 < iVar4) {
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
      puVar2 = FUN_662f5850(local_20,pbVar5);
      puVar2 = FUN_662ef430(local_14,PTR_s__src__6630ae24,puVar2);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
      FUN_662ef0f0(local_20);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*param_2 + 0x30))(param_2,s_Content_Rating_6630af38,&param_1);
    if (-1 < iVar4) {
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
      puVar2 = FUN_662f5850(local_20,pbVar5);
      puVar2 = FUN_662ef430(local_14,PTR_s__property_pics_rating__6630ae40,puVar2);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
      FUN_662ef0f0(local_20);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    iVar4 = (**(code **)(*param_2 + 0x30))(param_2,s_File_ID_6630af30,&param_1);
    if (iVar4 < 0) {
      iVar1 = -0x7ffbfd9d;
    }
    else {
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
      puVar2 = FUN_662f5850(local_20,pbVar5);
      puVar2 = FUN_662ef430(local_14,PTR_s__property_file_id__6630ae30,puVar2);
      FUN_662ef560(this,puVar2);
      FUN_662ef0f0(local_14);
      FUN_662ef0f0(local_20);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
  }
LAB_662d8419:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


