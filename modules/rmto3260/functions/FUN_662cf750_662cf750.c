/* Module: rmto3260.dll
   Function: FUN_662cf750
   Address: 662cf750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662cf750(void *this,void *param_1)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  undefined2 extraout_var;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  int local_14;
  char *local_c;
  byte *local_8;
  
  uVar4 = 0;
  local_8 = (byte *)0x0;
  local_14 = FUN_662df800(param_1,(int *)&param_1);
  if (-1 < local_14) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_6630a3fc);
    FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a738);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_physical_streams___hu_6630a71c);
    FUN_662f0810(*(int **)((int)this + 0x28),s_physical_streams__6630a708);
    if (*(short *)((int)param_1 + 6) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a700);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 6));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_data_offsets__6630a6f0);
    uVar4 = 0;
    if (*(short *)((int)param_1 + 6) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a6e8);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 6));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_rules___hu_6630a6d8);
    FUN_662f0810(*(int **)((int)this + 0x28),s_rule_to_physical_stream_number_m_6630a6b0);
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0x10) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a700);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 0x10));
    }
    FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
    FUN_662f0810(*(int **)((int)this + 0x28),s_num_properties___hu_6630a698);
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0x16) != 0) {
      do {
        FUN_662f0810(*(int **)((int)this + 0x28),s_Property___hu_6630a688);
        iVar5 = *(int *)((int)param_1 + 0x18) + (uint)uVar4 * 0x15;
        FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_6630a3fc);
        iVar2 = FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a738);
        local_c = (char *)0x0;
        FUN_662d0970(&local_8,*(undefined4 **)(iVar5 + 7),
                     CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)*(byte *)(iVar5 + 6)));
        if (local_8 != (byte *)0x0) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a020);
        }
        iVar2 = *(int *)(iVar5 + 0xb);
        if (iVar2 == 0) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a67c);
          sVar1 = *(short *)(iVar5 + 0xf);
          if ((sVar1 == 1) || (sVar1 == 2)) {
            piVar6 = *(int **)((int)this + 0x28);
            pcVar3 = &DAT_6630a66c;
          }
          else {
            if (sVar1 != 4) goto LAB_662cface;
            piVar6 = *(int **)((int)this + 0x28);
            pcVar3 = &DAT_6630a674;
          }
          FUN_662f0810(piVar6,pcVar3);
        }
        else if (iVar2 == 1) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a67c);
          local_14 = FUN_662cfb10(this,local_8,*(undefined1 **)(iVar5 + 0x11),
                                  (uint)*(ushort *)(iVar5 + 0xf));
        }
        else if (iVar2 == 2) {
          FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
          FUN_662d0970(&local_c,*(undefined4 **)(iVar5 + 0x11),
                       CONCAT22(extraout_var,*(undefined2 *)(iVar5 + 0xf)));
          if (local_c != (char *)0x0) {
            pcVar3 = strtok(local_c,&DAT_6630a684);
            while (pcVar3 != (char *)0x0) {
              FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a680);
              pcVar3 = strtok((char *)0x0,&DAT_6630a684);
            }
            FUN_662d08d0(&local_c);
          }
        }
LAB_662cface:
        FUN_662d08d0(&local_8);
        FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a1a4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 0x16));
    }
  }
  return local_14;
}


