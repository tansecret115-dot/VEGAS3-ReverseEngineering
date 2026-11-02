/* Module: rmbe3260.dll
   Function: FUN_66043f30
   Address: 66043f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66043f30(byte param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  char *pcVar5;
  int iVar6;
  short *local_14;
  int local_10;
  int local_c;
  ushort local_6;
  
  iVar6 = 0;
  pcVar5 = (char *)0x0;
  if (DAT_66075318 == 1) {
    return 0;
  }
  puVar2 = operator_new(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_66075310 = (undefined4 *)0x0;
  }
  else {
    DAT_66075310 = FUN_66046c50(puVar2);
  }
  if (DAT_66075310 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (0 < (int)DAT_66075310[3]) {
    local_10 = DAT_66075310[1];
    puVar2 = (undefined4 *)FUN_66058ad0(&local_10);
    pcVar5 = (char *)*puVar2;
  }
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_66075314 = (void *)0x0;
  }
  else {
    DAT_66075314 = (void *)FUN_660587a0(puVar2);
  }
  do {
    if (pcVar5 == (char *)0x0) break;
    iVar6 = FUN_6604ad80(pcVar5);
    if (iVar6 != 0) {
      FUN_6604af80((int)pcVar5);
      break;
    }
    uVar3 = FUN_6604b1d0((int)pcVar5);
    local_c = 0;
    if ((uVar3 & 0xffff) != 0) {
      do {
        pvVar4 = operator_new(0x4c);
        if (pvVar4 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
          pvVar4 = extraout_ECX;
        }
        else {
          puVar2 = FUN_660467d0(pvVar4,pcVar5 + 0x218,(short)local_c);
          pvVar4 = extraout_ECX_00;
        }
        iVar6 = FUN_66045e10(pvVar4,pcVar5,puVar2);
        if ((iVar6 == 0) && (iVar6 = FUN_66046910(puVar2,5,(int *)&local_14,&local_6), iVar6 == 0))
        {
          sVar1 = *local_14;
          if ((param_1 & 1) == 0) {
LAB_6604406b:
            if ((param_1 & 2) != 0) {
              if (sVar1 == 1) goto LAB_66044095;
              if (sVar1 == 2) {
                FUN_660589b0(DAT_66075314,puVar2);
                goto LAB_660440bd;
              }
            }
            if (((param_1 & 4) == 0) || (sVar1 != 3)) {
              if (puVar2 != (undefined4 *)0x0) {
                (**(code **)*puVar2)(1);
              }
              goto LAB_660440bd;
            }
          }
          else if (sVar1 != 0) {
            if (sVar1 == 2) {
              FUN_660589b0(DAT_66075314,puVar2);
              goto LAB_660440bd;
            }
            goto LAB_6604406b;
          }
LAB_66044095:
          FUN_660589b0(DAT_66075314,puVar2);
        }
        else if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
LAB_660440bd:
        if (iVar6 == -0x7ffbfdbb) {
          iVar6 = 0;
        }
        local_c = local_c + 1;
      } while (local_c < (int)(uVar3 & 0xffff));
    }
    FUN_6604af80((int)pcVar5);
    if (local_10 == 0) {
      pcVar5 = (char *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_66058ad0(&local_10);
      pcVar5 = (char *)*puVar2;
    }
  } while (iVar6 == 0);
  DAT_66075318 = (uint)(iVar6 == 0);
  return iVar6;
}


