/* Module: rmbe3260.dll
   Function: FUN_66037500
   Address: 66037500
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_66037500(byte *param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  int local_1c [3];
  byte *local_10 [3];
  
  if (param_2 < 10) {
    return (int *)0x0;
  }
  pbVar6 = local_10[0];
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    pbVar6 = (byte *)((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                     (uint)param_1[3]);
  }
  if (pbVar6 < (byte *)0x434f4e55) {
    if (pbVar6 == (byte *)0x434f4e54) {
      piVar2 = operator_new(0x2a);
      if (piVar2 != (int *)0x0) {
        piVar2 = FUN_660367e0(piVar2);
        goto LAB_660375f5;
      }
LAB_660375f3:
      piVar2 = (int *)0x0;
LAB_660375f5:
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
      return piVar2;
    }
    if (pbVar6 != (byte *)0x2e524d46) {
      return (int *)0x0;
    }
    piVar2 = operator_new(0x1a);
    if (piVar2 == (int *)0x0) {
LAB_66037646:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66035fb0(piVar2);
    }
  }
  else {
    if (pbVar6 < (byte *)0x494e4459) {
      if (pbVar6 != (byte *)0x494e4458) {
        if (pbVar6 != (byte *)0x44415441) {
          return (int *)0x0;
        }
        piVar2 = operator_new(0x1a);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = FUN_66036ed0(piVar2);
        }
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        goto LAB_66037657;
      }
      piVar2 = operator_new(0x1c);
      if (piVar2 != (int *)0x0) {
        piVar2 = FUN_66037180(piVar2);
        goto LAB_660375f5;
      }
      goto LAB_660375f3;
    }
    if (pbVar6 == (byte *)0x4d445052) {
      puVar3 = operator_new(0x46);
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_660347a0(puVar3);
      }
      FUN_6605b650(local_10);
      if (piVar2 == (int *)0x0) {
        FUN_6605b770((int *)local_10);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
      piVar4 = FUN_660349d0(piVar2,local_1c);
      FUN_6605b900(local_10,piVar4);
      FUN_6605b770(local_1c);
      iVar5 = FUN_6605bfa0(local_10,s_logical__6606e160);
      if (iVar5 == 0) {
        puVar3 = operator_new(0x62);
        if (puVar3 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_660355a0(puVar3);
        }
        if (piVar4 == (int *)0x0) {
          FUN_6605b770((int *)local_10);
          return (int *)0x0;
        }
        (**(code **)(*piVar4 + 0x1c))(param_1,param_2);
        (**(code **)*piVar2)(1);
        FUN_6605b770((int *)local_10);
        return piVar4;
      }
      pcVar7 = s_audio_x_pn_multirate_realaudio_6606e180;
      pbVar6 = local_10[0];
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_6603775f:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_66037764;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_6603775f;
        pbVar6 = pbVar6 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_66037764:
      if (iVar5 != 0) {
        pcVar7 = s_audio_x_pn_realaudio_6606cc78;
        do {
          bVar1 = *local_10[0];
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_66037793:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_66037798;
          }
          if (bVar1 == 0) break;
          bVar1 = local_10[0][1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_66037793;
          local_10[0] = local_10[0] + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_66037798:
        if (iVar5 != 0) {
          FUN_6605b770((int *)local_10);
          return piVar2;
        }
      }
      puVar3 = operator_new(0x4a);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_66034b30(puVar3);
      }
      if (piVar4 == (int *)0x0) {
        FUN_6605b770((int *)local_10);
        return (int *)0x0;
      }
      (**(code **)(*piVar4 + 0x1c))(param_1,param_2);
      (**(code **)*piVar2)(1);
      FUN_6605b770((int *)local_10);
      return piVar4;
    }
    if (pbVar6 != (byte *)0x50524f50) {
      return (int *)0x0;
    }
    piVar2 = operator_new(0x3a);
    if (piVar2 == (int *)0x0) goto LAB_66037646;
    piVar2 = FUN_66036280(piVar2);
  }
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_66037657:
  (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
  return piVar2;
}


