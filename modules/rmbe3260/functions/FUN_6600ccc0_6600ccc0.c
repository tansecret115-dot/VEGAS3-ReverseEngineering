/* Module: rmbe3260.dll
   Function: FUN_6600ccc0
   Address: 6600ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6600ccc0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_6605b650(local_2c);
  FUN_6605b650(local_20);
  local_c = 0;
  local_14 = 1;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = -0x7fffbffb;
    goto LAB_6600d485;
  }
  iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x20))
                    (*(undefined4 **)(param_1 + 0x20),&DAT_66065e58,&local_8);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605b970(local_2c,s_<imfl>_6606c700);
  FUN_6605bba0(local_2c,&DAT_6606c404);
  FUN_6605bba0(local_2c,s_<head_6606c6f8);
  FUN_6605bba0(local_2c,&DAT_6606c404);
  iVar3 = FUN_6605bc10(local_20,0x104);
  iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,iVar3,0x103);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bc90(local_20,-1);
  if (*(int *)(local_20[0] + -8) != 0) {
    pcVar5 = &DAT_6606c404;
    pcVar4 = &DAT_6606c6f4;
    puVar1 = FUN_6605bab0(local_50,s_title___6606c6e8,local_20);
    puVar1 = FUN_6605ba50(local_44,puVar1,pcVar4);
    puVar1 = FUN_6605ba50(local_38,puVar1,pcVar5);
    FUN_6605bbe0(local_2c,puVar1);
    FUN_6605b770(local_38);
    FUN_6605b770(local_44);
    FUN_6605b770(local_50);
  }
  iVar3 = FUN_6605bc10(local_20,0x104);
  iVar3 = (**(code **)(*local_8 + 0x44))(local_8,iVar3,0x103);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bc90(local_20,-1);
  if (*(int *)(local_20[0] + -8) != 0) {
    pcVar5 = &DAT_6606c404;
    pcVar4 = &DAT_6606c6f4;
    puVar1 = FUN_6605bab0(local_38,s_author___6606c6dc,local_20);
    puVar1 = FUN_6605ba50(local_44,puVar1,pcVar4);
    puVar1 = FUN_6605ba50(local_50,puVar1,pcVar5);
    FUN_6605bbe0(local_2c,puVar1);
    FUN_6605b770(local_50);
    FUN_6605b770(local_44);
    FUN_6605b770(local_38);
  }
  iVar3 = FUN_6605bc10(local_20,0x104);
  iVar3 = (**(code **)(*local_8 + 0x4c))(local_8,iVar3,0x103);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bc90(local_20,-1);
  if (*(int *)(local_20[0] + -8) != 0) {
    pcVar5 = &DAT_6606c404;
    pcVar4 = &DAT_6606c6f4;
    puVar1 = FUN_6605bab0(local_38,s_copyright___6606c6cc,local_20);
    puVar1 = FUN_6605ba50(local_44,puVar1,pcVar4);
    puVar1 = FUN_6605ba50(local_50,puVar1,pcVar5);
    FUN_6605bbe0(local_2c,puVar1);
    FUN_6605b770(local_50);
    FUN_6605b770(local_44);
    FUN_6605b770(local_38);
  }
  iVar3 = (**(code **)(*local_8 + 0x1c))(local_8,&local_10);
  if (iVar3 < 0) goto LAB_6600d485;
  if (local_10 == 0) {
    pcVar4 = s_timeformat__milliseconds__6606c68c;
LAB_6600cf3a:
    FUN_6605bba0(local_2c,pcVar4);
    FUN_6605bba0(local_2c,&DAT_6606c404);
  }
  else if (local_10 == 1) {
    pcVar4 = s_timeformat__dd_hh_mm_ss_xyz__6606c6ac;
    goto LAB_6600cf3a;
  }
  iVar3 = (**(code **)(*local_8 + 0x24))(local_8,&local_c);
  if (iVar3 < 0) goto LAB_6600d485;
  if (local_10 == 0) {
    FUN_6605bfd0(local_20,&DAT_6606c2f8);
    pcVar5 = &DAT_6606c404;
    pcVar4 = &DAT_6606c6f4;
    puVar1 = FUN_6605bab0(local_74,s_duration___6606c67c,local_20);
    puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
    puVar1 = FUN_6605ba50(local_5c,puVar1,pcVar5);
    FUN_6605bbe0(local_2c,puVar1);
    FUN_6605b770(local_5c);
    FUN_6605b770(local_68);
    piVar2 = local_74;
LAB_6600d04f:
    FUN_6605b770(piVar2);
  }
  else if (local_10 == 1) {
    iVar3 = FUN_6600d900(local_c,local_20);
    if (iVar3 < 0) goto LAB_6600d485;
    pcVar5 = &DAT_6606c404;
    pcVar4 = &DAT_6606c6f4;
    puVar1 = FUN_6605bab0(local_38,s_duration___6606c67c,local_20);
    puVar1 = FUN_6605ba50(local_44,puVar1,pcVar4);
    puVar1 = FUN_6605ba50(local_50,puVar1,pcVar5);
    FUN_6605bbe0(local_2c,puVar1);
    FUN_6605b770(local_50);
    FUN_6605b770(local_44);
    piVar2 = local_38;
    goto LAB_6600d04f;
  }
  iVar3 = (**(code **)(*local_8 + 0x2c))(local_8,&local_c);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bfd0(local_20,&DAT_6606c2f8);
  pcVar5 = &DAT_6606c404;
  pcVar4 = &DAT_6606c6f4;
  puVar1 = FUN_6605bab0(local_5c,s_bitrate___6606c66c,local_20);
  puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
  puVar1 = FUN_6605ba50(local_74,puVar1,pcVar5);
  FUN_6605bbe0(local_2c,puVar1);
  FUN_6605b770(local_74);
  FUN_6605b770(local_68);
  FUN_6605b770(local_5c);
  iVar3 = (**(code **)(*local_8 + 0xc))(local_8,&local_c);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bfd0(local_20,&DAT_6606c2f8);
  pcVar5 = &DAT_6606c404;
  pcVar4 = &DAT_6606c6f4;
  puVar1 = FUN_6605bab0(local_5c,s_width___6606c660,local_20);
  puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
  puVar1 = FUN_6605ba50(local_74,puVar1,pcVar5);
  FUN_6605bbe0(local_2c,puVar1);
  FUN_6605b770(local_74);
  FUN_6605b770(local_68);
  FUN_6605b770(local_5c);
  iVar3 = (**(code **)(*local_8 + 0x14))(local_8,&local_c);
  if (iVar3 < 0) goto LAB_6600d485;
  FUN_6605bfd0(local_20,&DAT_6606c2f8);
  pcVar5 = &DAT_6606c404;
  pcVar4 = &DAT_6606c6f4;
  puVar1 = FUN_6605bab0(local_5c,s_height___6606c654,local_20);
  puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
  puVar1 = FUN_6605ba50(local_74,puVar1,pcVar5);
  FUN_6605bbe0(local_2c,puVar1);
  FUN_6605b770(local_74);
  FUN_6605b770(local_68);
  FUN_6605b770(local_5c);
  iVar3 = (**(code **)(*local_8 + 0x34))(local_8,&local_c);
  if (iVar3 < 0) goto LAB_6600d485;
  if (local_c != 0) {
    if (local_10 == 0) {
      FUN_6605bfd0(local_20,&DAT_6606c2f8);
      pcVar5 = &DAT_6606c404;
      pcVar4 = &DAT_6606c6f4;
      puVar1 = FUN_6605bab0(local_38,s_preroll___6606c644,local_20);
      puVar1 = FUN_6605ba50(local_44,puVar1,pcVar4);
      puVar1 = FUN_6605ba50(local_50,puVar1,pcVar5);
      FUN_6605bbe0(local_2c,puVar1);
      FUN_6605b770(local_50);
      FUN_6605b770(local_44);
      piVar2 = local_38;
    }
    else {
      if (local_10 != 1) goto LAB_6600d2f0;
      iVar3 = FUN_6600d900(local_c,local_20);
      if (iVar3 < 0) goto LAB_6600d485;
      pcVar5 = &DAT_6606c404;
      pcVar4 = &DAT_6606c6f4;
      puVar1 = FUN_6605bab0(local_5c,s_preroll___6606c644,local_20);
      puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
      puVar1 = FUN_6605ba50(local_74,puVar1,pcVar5);
      FUN_6605bbe0(local_2c,puVar1);
      FUN_6605b770(local_74);
      FUN_6605b770(local_68);
      piVar2 = local_5c;
    }
    FUN_6605b770(piVar2);
  }
LAB_6600d2f0:
  iVar3 = FUN_6605bc10(local_20,0x104);
  iVar3 = (**(code **)(*local_8 + 0x54))(local_8,iVar3,0x103);
  if (-1 < iVar3) {
    FUN_6605bc90(local_20,-1);
    if (*(int *)(local_20[0] + -8) != 0) {
      pcVar5 = &DAT_6606c404;
      pcVar4 = &DAT_6606c6f4;
      puVar1 = FUN_6605bab0(local_5c,s_url___6606c638,local_20);
      puVar1 = FUN_6605ba50(local_68,puVar1,pcVar4);
      puVar1 = FUN_6605ba50(local_74,puVar1,pcVar5);
      FUN_6605bbe0(local_2c,puVar1);
      FUN_6605b770(local_74);
      FUN_6605b770(local_68);
      FUN_6605b770(local_5c);
    }
    iVar3 = (**(code **)(*local_8 + 0x5c))(local_8,&local_14);
    if (-1 < iVar3) {
      if (local_14 == 0) {
        FUN_6605bba0(local_2c,s_aspect__false__6606c624);
        FUN_6605bba0(local_2c,&DAT_6606c404);
      }
      iVar3 = (**(code **)(*local_8 + 100))(local_8,&local_c);
      if (-1 < iVar3) {
        if (local_c == 0) {
          FUN_6605bfd0(local_20,&DAT_6606c2f8);
          pcVar4 = &DAT_6606c6f4;
          puVar1 = FUN_6605bab0(local_68,s_maxfps___6606c618,local_20);
          puVar1 = FUN_6605ba50(local_74,puVar1,pcVar4);
          FUN_6605bbe0(local_2c,puVar1);
          FUN_6605b770(local_74);
          FUN_6605b770(local_68);
          FUN_6605bba0(local_2c,&DAT_6606c404);
        }
        FUN_6605bba0(local_2c,&DAT_6606c614);
        FUN_6605bba0(local_2c,&DAT_6606c404);
        if (*(int *)(param_1 + 0x48) == 0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))
                            (*(undefined4 *)(param_1 + 0x70),0x8301,0x20,1);
          if (iVar3 < 0) goto LAB_6600d485;
        }
        (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))
                  (local_2c[0],*(undefined4 *)(local_2c[0] + -8));
      }
    }
  }
LAB_6600d485:
  FUN_6605b770(local_20);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_6605b770(local_2c);
  return iVar3;
}


