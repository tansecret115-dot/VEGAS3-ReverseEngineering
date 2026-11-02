/* Module: rmto3260.dll
   Function: FUN_662f68f0
   Address: 662f68f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f68f0(byte param_1)

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
  if (DAT_66311d74 == 1) {
    return 0;
  }
  puVar2 = operator_new(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_66311d6c = (undefined4 *)0x0;
  }
  else {
    DAT_66311d6c = FUN_662f93d0(puVar2);
  }
  if (DAT_66311d6c == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (0 < (int)DAT_66311d6c[3]) {
    local_10 = DAT_66311d6c[1];
    puVar2 = (undefined4 *)FUN_66301b70(&local_10);
    pcVar5 = (char *)*puVar2;
  }
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_66311d70 = (void *)0x0;
  }
  else {
    DAT_66311d70 = (void *)FUN_66301840(puVar2);
  }
  do {
    if (pcVar5 == (char *)0x0) break;
    iVar6 = FUN_662fe860(pcVar5);
    if (iVar6 != 0) {
      FUN_662fea60((int)pcVar5);
      break;
    }
    uVar3 = FUN_662fecb0((int)pcVar5);
    local_c = 0;
    if ((uVar3 & 0xffff) != 0) {
      do {
        pvVar4 = operator_new(0x4c);
        if (pvVar4 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
          pvVar4 = extraout_ECX;
        }
        else {
          puVar2 = FUN_662f8f50(pvVar4,pcVar5 + 0x218,(short)local_c);
          pvVar4 = extraout_ECX_00;
        }
        iVar6 = FUN_662f85b0(pvVar4,pcVar5,puVar2);
        if ((iVar6 == 0) && (iVar6 = FUN_662f9090(puVar2,5,(int *)&local_14,&local_6), iVar6 == 0))
        {
          sVar1 = *local_14;
          if ((param_1 & 1) == 0) {
LAB_662f6a2b:
            if ((param_1 & 2) != 0) {
              if (sVar1 == 1) goto LAB_662f6a55;
              if (sVar1 == 2) {
                FUN_66301a50(DAT_66311d70,puVar2);
                goto LAB_662f6a7d;
              }
            }
            if (((param_1 & 4) == 0) || (sVar1 != 3)) {
              if (puVar2 != (undefined4 *)0x0) {
                (**(code **)*puVar2)(1);
              }
              goto LAB_662f6a7d;
            }
          }
          else if (sVar1 != 0) {
            if (sVar1 == 2) {
              FUN_66301a50(DAT_66311d70,puVar2);
              goto LAB_662f6a7d;
            }
            goto LAB_662f6a2b;
          }
LAB_662f6a55:
          FUN_66301a50(DAT_66311d70,puVar2);
        }
        else if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
LAB_662f6a7d:
        if (iVar6 == -0x7ffbfdbb) {
          iVar6 = 0;
        }
        local_c = local_c + 1;
      } while (local_c < (int)(uVar3 & 0xffff));
    }
    FUN_662fea60((int)pcVar5);
    if (local_10 == 0) {
      pcVar5 = (char *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_66301b70(&local_10);
      pcVar5 = (char *)*puVar2;
    }
  } while (iVar6 == 0);
  DAT_66311d74 = (uint)(iVar6 == 0);
  return iVar6;
}


