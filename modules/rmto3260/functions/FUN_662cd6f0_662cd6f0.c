/* Module: rmto3260.dll
   Function: FUN_662cd6f0
   Address: 662cd6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662cd6f0(void *this,byte *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  ushort uVar5;
  int iVar6;
  int local_10;
  byte *local_8;
  
  uVar5 = 0;
  local_8 = (byte *)0x0;
  piVar3 = FUN_662e19e0(param_1,param_2);
  local_10 = FUN_662df800(piVar3,(int *)&param_2);
  if (-1 < local_10) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_6630a3fc);
    FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a738);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_physical_streams___hu_6630a71c);
    FUN_662f0810(*(int **)((int)this + 0x28),s_physical_streams__6630a708);
    if (*(short *)(param_2 + 6) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a700);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_2 + 6));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_data_offsets__6630a6f0);
    uVar5 = 0;
    if (*(short *)(param_2 + 6) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a6e8);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_2 + 6));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_rules___hu_6630a6d8);
    FUN_662f0810(*(int **)((int)this + 0x28),s_rule_to_physical_stream_number_m_6630a6b0);
    uVar5 = 0;
    if (*(short *)(param_2 + 0x10) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a700);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_2 + 0x10));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_properties___hu_6630a698);
    uVar5 = 0;
    if (*(short *)(param_2 + 0x16) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),s_Property___hu_6630a688);
        iVar6 = *(int *)(param_2 + 0x18) + (uint)uVar5 * 0x15;
        FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_6630a3fc);
        FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a738);
        param_1 = (byte *)0x0;
        FUN_662d0970(&local_8,*(undefined4 **)(iVar6 + 7),
                     CONCAT22(extraout_var_00,(ushort)*(byte *)(iVar6 + 6)));
        if (local_8 != (byte *)0x0) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a020);
        }
        iVar2 = *(int *)(iVar6 + 0xb);
        if (iVar2 == 0) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a67c);
          sVar1 = *(short *)(iVar6 + 0xf);
          if ((sVar1 == 1) || (sVar1 == 2)) {
            piVar3 = *(int **)((int)this + 0x28);
            pcVar4 = &DAT_6630a66c;
          }
          else {
            if (sVar1 != 4) goto LAB_662cda7d;
            piVar3 = *(int **)((int)this + 0x28);
            pcVar4 = &DAT_6630a674;
          }
          FUN_662f0810(piVar3,pcVar4);
        }
        else if (iVar2 == 1) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a67c);
          local_10 = FUN_662cfb10(this,local_8,*(undefined1 **)(iVar6 + 0x11),
                                  (uint)*(ushort *)(iVar6 + 0xf));
        }
        else if (iVar2 == 2) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
          FUN_662d0970(&param_1,*(undefined4 **)(iVar6 + 0x11),
                       CONCAT22(extraout_var,*(undefined2 *)(iVar6 + 0xf)));
          if (param_1 != (byte *)0x0) {
            pcVar4 = strtok((char *)param_1,&DAT_6630a684);
            while (pcVar4 != (char *)0x0) {
              FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a680);
              pcVar4 = strtok((char *)0x0,&DAT_6630a684);
            }
            FUN_662d08d0(&param_1);
          }
        }
LAB_662cda7d:
        FUN_662d08d0(&local_8);
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_2 + 0x16));
    }
  }
  return local_10;
}


