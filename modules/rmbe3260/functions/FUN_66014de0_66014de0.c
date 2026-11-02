/* Module: rmbe3260.dll
   Function: FUN_66014de0
   Address: 66014de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_66014de0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  BOOL BVar6;
  char *pcVar7;
  bool bVar8;
  int local_40 [3];
  double local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar3 = param_1;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    FUN_6603c1b0((undefined4 *)param_1[0x11]);
    piVar3[0x11] = 0;
  }
  if ((piVar3[9] == 0) || (param_1 = (int *)piVar3[0x16], (short)param_1 == 0)) goto LAB_6601513e;
  pbVar4 = (byte *)piVar3[3];
  pcVar7 = s_audio_x_pn_realaudio_6606cc78;
  do {
    bVar1 = *pcVar7;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_66014e41:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_66014e46;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar7[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_66014e41;
    pcVar7 = pcVar7 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_66014e46:
  if (iVar5 == 0) {
    if ((DAT_660750a8 == 0) && (DAT_660750ac == 0)) {
      BVar6 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660750a8);
      if ((BVar6 == 0) ||
         (BVar6 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660750b0), BVar6 == 0))
      goto LAB_66014f14;
LAB_66014ef7:
      local_34 = (double)(ulonglong)DAT_660750a8;
      ftol();
    }
    else {
      BVar6 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660750b0);
      if (BVar6 != 0) goto LAB_66014ef7;
LAB_66014f14:
      GetTickCount();
    }
    FUN_6605b430(0x7fffffff,&DAT_6606c2f8);
  }
  local_1c = 0.0;
  local_24 = 0.0;
  if ((short)param_1 != 0) {
    local_14 = (uint)param_1 & 0xffff;
    local_8 = 0;
    do {
      puVar2 = *(undefined4 **)(local_8 + piVar3[0x15]);
      iVar5 = FUN_6603c050((int *)*puVar2);
      FUN_660157a0(iVar5);
      FUN_6605b650(local_40);
      FUN_6605bfd0(local_40,s__s__s_6606cd0c);
      param_1 = (int *)0x0;
      (**(code **)(*(int *)piVar3[0x1f] + 0x2c))((int *)piVar3[0x1f],local_40[0],&param_1);
      local_10 = 0;
      FUN_6605bfd0(local_40,s__s__s_6606cd0c);
      (**(code **)(*(int *)piVar3[0x1f] + 0x18))((int *)piVar3[0x1f],local_40[0],&local_10);
      local_c = 0;
      FUN_6605bfd0(local_40,s__s__s_6606cd0c);
      (**(code **)(*(int *)piVar3[0x1f] + 0x18))((int *)piVar3[0x1f],local_40[0],&local_c);
      FUN_6603c010((int *)*puVar2,&local_34,&local_2c);
      local_1c = (double)CONCAT44(uStack_28,local_2c) + local_1c;
      local_24 = local_34 + local_24;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 0x1c))(param_1);
      }
      FUN_6605b430(0x7fffffff,s__s__s___d_bps___Time_in_Codec____6606cda0);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
      FUN_6605b770(local_40);
      local_8 = local_8 + 4;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  if (*(double *)(piVar3 + 0xf) == _DAT_660664c0) {
    local_34 = 0.0;
  }
  else {
    local_34 = ((local_1c - local_24) * _DAT_660664c8) / *(double *)(piVar3 + 0xf);
  }
  FUN_6605b430(0x7fffffff,s_PNEngine__Sum_Time_in_Codecs_____6606cd60);
  FUN_6605b430(0x7fffffff,s_Total__Sum_Time_in_Encode____0lf_6606cd3c);
  (**(code **)(piVar3[0x12] + 0x24))(piVar3 + 0x12,0);
LAB_6601513e:
  (**(code **)(*piVar3 + 0x3c))(piVar3);
  return;
}


