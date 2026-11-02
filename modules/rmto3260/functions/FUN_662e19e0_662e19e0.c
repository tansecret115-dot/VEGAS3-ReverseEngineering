/* Module: rmto3260.dll
   Function: FUN_662e19e0
   Address: 662e19e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_662e19e0(byte *param_1,uint param_2)

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
        piVar2 = FUN_662e0cc0(piVar2);
        goto LAB_662e1ad5;
      }
LAB_662e1ad3:
      piVar2 = (int *)0x0;
LAB_662e1ad5:
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
LAB_662e1b26:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_662e04b0(piVar2);
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
          piVar2 = FUN_662e13b0(piVar2);
        }
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        goto LAB_662e1b37;
      }
      piVar2 = operator_new(0x1c);
      if (piVar2 != (int *)0x0) {
        piVar2 = FUN_662e1670(piVar2);
        goto LAB_662e1ad5;
      }
      goto LAB_662e1ad3;
    }
    if (pbVar6 == (byte *)0x4d445052) {
      puVar3 = operator_new(0x46);
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_662dec30(puVar3);
      }
      FUN_662eefd0(local_10);
      if (piVar2 == (int *)0x0) {
        FUN_662ef0f0((int *)local_10);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
      piVar4 = FUN_662dedc0(piVar2,local_1c);
      FUN_662ef280(local_10,piVar4);
      FUN_662ef0f0(local_1c);
      iVar5 = FUN_662ef820(local_10,s_logical__6630a12c);
      if (iVar5 == 0) {
        puVar3 = operator_new(0x62);
        if (puVar3 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_662df990(puVar3);
        }
        if (piVar4 == (int *)0x0) {
          FUN_662ef0f0((int *)local_10);
          return (int *)0x0;
        }
        (**(code **)(*piVar4 + 0x1c))(param_1,param_2);
        (**(code **)*piVar2)(1);
        FUN_662ef0f0((int *)local_10);
        return piVar4;
      }
      pcVar7 = s_audio_x_pn_multirate_realaudio_6630a024;
      pbVar6 = local_10[0];
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_662e1c3f:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_662e1c44;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_662e1c3f;
        pbVar6 = pbVar6 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_662e1c44:
      if (iVar5 != 0) {
        pcVar7 = s_audio_x_pn_realaudio_6630a044;
        do {
          bVar1 = *local_10[0];
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_662e1c73:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_662e1c78;
          }
          if (bVar1 == 0) break;
          bVar1 = local_10[0][1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_662e1c73;
          local_10[0] = local_10[0] + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_662e1c78:
        if (iVar5 != 0) {
          FUN_662ef0f0((int *)local_10);
          return piVar2;
        }
      }
      puVar3 = operator_new(0x4a);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_662def00(puVar3);
      }
      if (piVar4 == (int *)0x0) {
        FUN_662ef0f0((int *)local_10);
        return (int *)0x0;
      }
      (**(code **)(*piVar4 + 0x1c))(param_1,param_2);
      (**(code **)*piVar2)(1);
      FUN_662ef0f0((int *)local_10);
      return piVar4;
    }
    if (pbVar6 != (byte *)0x50524f50) {
      return (int *)0x0;
    }
    piVar2 = operator_new(0x3a);
    if (piVar2 == (int *)0x0) goto LAB_662e1b26;
    piVar2 = FUN_662e0760(piVar2);
  }
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_662e1b37:
  (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
  return piVar2;
}


