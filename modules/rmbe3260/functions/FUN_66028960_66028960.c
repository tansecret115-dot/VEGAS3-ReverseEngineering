/* Module: rmbe3260.dll
   Function: FUN_66028960
   Address: 66028960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66028960(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_ac [4];
  undefined4 local_9c;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int *local_84;
  undefined1 local_80 [4];
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [4];
  int *local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  uint local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_2;
  piVar1 = param_1;
  piVar5 = local_ac;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_ac[2] = param_1[0x22];
  local_98 = PTR_s_Video_Stream_6606ddf0;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  local_ac[0] = 0x84;
  local_74 = 0;
  iVar3 = (*(code *)**(undefined4 **)param_2[1])((undefined4 *)param_2[1],&DAT_66065b08,&local_10);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = (**(code **)*local_10)(local_10,&DAT_66065b28,&local_8);
  if (iVar3 < 0) {
    return iVar3;
  }
  local_c = (int *)0x0;
  iVar3 = (*(code *)**(undefined4 **)piVar1[8])((undefined4 *)piVar1[8],&DAT_66065a68,&local_c);
  if (iVar3 < 0) {
    return iVar3;
  }
  local_90 = piVar1[0x2b];
  local_8c = piVar1[0x2c];
  (**(code **)(*local_8 + 0x3c))(local_8,&local_1c,&local_20,&local_14,&local_18);
  if ((((local_1c != piVar1[0x29]) || (local_20 != piVar1[0x2a])) || (local_14 != piVar1[0x2b])) ||
     (local_18 != piVar1[0x2c])) {
    local_70 = local_1c - piVar1[0x29];
    local_6c = local_20 - piVar1[0x2a];
    local_68 = local_14;
    local_64 = local_18;
  }
  (**(code **)(*local_8 + 0x44))(local_8,local_58,local_54);
  local_7c = piVar1[6];
  local_ac[1] = 6;
  iVar3 = (**(code **)(*local_c + 0x2c))(local_c,&param_1);
  local_84 = param_1;
  (**(code **)(*local_8 + 0xc))(local_8,&param_2);
  if ((float)param_1 < (float)param_2) {
    param_2 = param_1;
  }
  local_5c = param_2;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(*local_10 + 0x10))(local_10,local_ac + 3);
  if (piVar1[0x28] == 0) {
    if ((local_ac[3] == 0x52563230) || (local_ac[3] == 0x52563330)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    piVar1[0x28] = iVar4;
  }
  param_1 = (int *)0x0;
  local_c = (int *)0x0;
  param_2 = (int *)0x0;
  if (-1 < iVar3) {
    iVar3 = FUN_660130d0(&param_1);
    if (((-1 < iVar3) &&
        (iVar3 = (**(code **)(*param_1 + 0x14))(param_1,local_ac[3],local_9c,&param_2), -1 < iVar3))
       && ((iVar3 = (**(code **)*param_2)(param_2,&DAT_66066258,&local_c), -1 < iVar3 &&
           (((**(code **)(*local_c + 0x14))(local_c,&local_20), local_20 != 0 || (piVar1[6] == 0))))
          )) {
      piVar1[0x79] = 1;
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  (**(code **)(*local_10 + 0x18))(local_10,&local_1c);
  local_88 = ftol();
  (**(code **)(*local_8 + 0x24))(local_8,local_80);
  (**(code **)(*local_8 + 0x14))(local_8,&local_18);
  local_78 = local_18;
  (**(code **)(*local_8 + 0x1c))(local_8,local_60);
  (**(code **)(*local_8 + 0x5c))(local_8,&local_14);
  local_48 = local_14;
  (**(code **)(*local_8 + 0x6c))(local_8,&local_14);
  local_44 = local_14;
  (**(code **)(*local_8 + 100))(local_8,local_40);
  (**(code **)(*local_8 + 0x74))(local_8,local_3c);
  local_38 = piVar1[0x87];
  local_34 = piVar1[0x88];
  local_30 = piVar1[0x89];
  iVar3 = piVar1[0x8a];
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      local_2c = 1;
      goto LAB_66028ca5;
    }
    if (iVar3 == 2) {
      local_2c = 2;
      goto LAB_66028ca5;
    }
  }
  local_2c = 0;
LAB_66028ca5:
  iVar3 = (**(code **)(*local_8 + 0x4c))(local_8,&local_24);
  local_50 = local_24;
  local_4c = 0;
  if (-1 < iVar3) {
    iVar3 = FUN_6603bf20((void *)piVar1[0x13],piVar2,(int)local_ac);
    iVar3 = FUN_660157a0(iVar3);
    if (-1 < iVar3) {
      if ((int *)*piVar2 == (int *)0x0) {
        if ((-1 < iVar3) && (*piVar2 == 0)) {
          iVar3 = -0x7ff8ffa9;
        }
      }
      else {
        iVar3 = FUN_6603bf80((int *)*piVar2,piVar2 + 4);
        FUN_660157a0(iVar3);
        param_2 = (int *)0x0;
        (**(code **)(*local_10 + 0x38))(local_10,&local_24);
        param_2 = (int *)(local_24 & 0xffff);
        iVar3 = FUN_6603bf40((int *)*piVar2,0x1000d,&param_2);
        FUN_660157a0(iVar3);
        local_20 = 0x59555632;
        iVar3 = FUN_6603bf40((int *)*piVar2,0x10013,&local_20);
        FUN_660157a0(iVar3);
        (**(code **)(*local_8 + 0x2c))(local_8,&local_1c);
        (**(code **)(*local_8 + 0x34))(local_8,&local_14);
        param_1 = (int *)0x0;
        if (local_1c == 0) {
          if (local_14 != 0) {
            param_1 = (int *)0x2;
          }
        }
        else {
          param_1 = (int *)0x3;
        }
        iVar3 = FUN_6603bf40((int *)*piVar2,0x10012,&param_1);
        FUN_660157a0(iVar3);
        (**(code **)(*local_10 + 0x28))(local_10,&local_c);
        iVar3 = FUN_6603bf40((int *)*piVar2,0x1001b,&local_c);
        FUN_660157a0(iVar3);
        if (piVar1[0xe] == 1) {
          local_18 = 4;
        }
        else {
          local_18 = (piVar1[0xe] != 2) + 5;
        }
        iVar3 = FUN_6603bf40((int *)*piVar2,0x10012,&local_18);
        FUN_660157a0(iVar3);
        if ((piVar1[0xe] == 1) || (piVar1[0xe] == 2)) {
          iVar3 = FUN_6603bf40((int *)*piVar2,0x10023,piVar1[0x84]);
          FUN_660157a0(iVar3);
        }
        local_28 = 1;
        iVar3 = FUN_6603bf40((int *)*piVar2,0x1001f,&local_28);
        iVar3 = FUN_660157a0(iVar3);
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar3;
}


