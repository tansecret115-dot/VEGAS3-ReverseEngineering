/* Module: rmme3260.dll
   Function: FUN_66203460
   Address: 66203460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66203460(int *param_1,int *param_2)

{
  int *piVar1;
  int *this;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int local_14;
  uint local_c;
  int *local_8;
  
  this = param_1;
  *param_2 = 0;
  local_8 = (int *)0x0;
  piVar1 = param_1 + 0xf;
  if ((param_1[0xf] == 0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0xe] + 0xc))((int *)param_1[0xe],&DAT_6626a628,piVar1),
     *piVar1 == 0)) {
    return iVar2;
  }
  iVar2 = (**(code **)(*this + 0x48))();
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(*(int *)this[0xe] + 0xc))((int *)this[0xe],&DAT_6626a5f8,&local_8),
     -1 < iVar2)) {
    iVar4 = *local_8;
    iVar2 = *(int *)(this[0x15] + -8) + 1;
    iVar3 = FUN_662506b0(this + 0x15,*(int *)(this[0x15] + -8));
    iVar2 = (**(code **)(iVar4 + 0x10))(local_8,iVar3,iVar2);
    FUN_66250730(this + 0x15,-1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)*piVar1 + 0x2c))((int *)*piVar1,s_ASMRuleBook_6626f1d8,local_8);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if ((((((-1 < iVar2) &&
           (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                              ((int *)*piVar1,s_StreamNumber_6626f1c8,(short)this[0x18]), -1 < iVar2
           )) && (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                                    ((int *)*piVar1,s_MaxBitRate_6626f1bc,
                                     *(undefined4 *)((int)this + 0x6e)), -1 < iVar2)) &&
         ((iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                             ((int *)*piVar1,s_AvgBitRate_6626f1b0,*(undefined4 *)((int)this + 0x72)
                             ), -1 < iVar2 &&
          (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                             ((int *)*piVar1,s_MaxPacketSize_6626f1a0,
                              *(undefined4 *)((int)this + 0x76)), -1 < iVar2)))) &&
        ((iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                            ((int *)*piVar1,s_AvgPacketSize_6626f190,
                             *(undefined4 *)((int)this + 0x7a)), -1 < iVar2 &&
         ((iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                             ((int *)*piVar1,s_StartTime_6626f184,*(undefined4 *)((int)this + 0x7e))
          , -1 < iVar2 &&
          (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                             ((int *)*piVar1,s_Preroll_6626f17c,*(undefined4 *)((int)this + 0x82)),
          -1 < iVar2)))))) &&
       (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                          ((int *)*piVar1,s_Duration_6626f170,*(undefined4 *)((int)this + 0x86)),
       -1 < iVar2)) {
      if ((1 < *(ushort *)((int)this + 0x8a)) &&
         (iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))
                            ((int *)*piVar1,s_IsInterleaved_6626f160,*(ushort *)((int)this + 0x8a)),
         iVar2 < 0)) {
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)this[0xe] + 0xc))((int *)this[0xe],&DAT_6626a5f8,&local_8);
      if (-1 < iVar2) {
        iVar4 = *(int *)(*(int *)((int)this + 0x62) + -8);
        iVar3 = *local_8;
        iVar2 = iVar4 + 1;
        iVar4 = FUN_662506b0((void *)((int)this + 0x62),iVar4);
        iVar2 = (**(code **)(iVar3 + 0x10))(local_8,iVar4,iVar2);
        FUN_66250730((void *)((int)this + 0x62),-1);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*(int *)*piVar1 + 0x2c))
                            ((int *)*piVar1,s_StreamName_6626f154,local_8);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)(*(int *)this[0xe] + 0xc))((int *)this[0xe],&DAT_6626a5f8,&local_8),
           -1 < iVar2)) {
          iVar4 = *local_8;
          iVar2 = *(int *)(this[0x10] + -8) + 1;
          iVar3 = FUN_662506b0(this + 0x10,*(int *)(this[0x10] + -8));
          iVar2 = (**(code **)(iVar4 + 0x10))(local_8,iVar3,iVar2);
          FUN_66250730(this + 0x10,-1);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*(int *)*piVar1 + 0x2c))
                              ((int *)*piVar1,s_MimeType_6626f148,local_8);
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if ((-1 < iVar2) &&
             (iVar2 = (**(code **)(*(int *)this[0xe] + 0xc))
                                ((int *)this[0xe],&DAT_6626a5f8,&local_8), -1 < iVar2)) {
            puVar5 = operator_new(6);
            if (puVar5 == (ushort *)0x0) {
              return -0x7ff8fff2;
            }
            *puVar5 = *(ushort *)(this + 0x13);
            *(int *)(puVar5 + 1) = this[0x14];
            (**(code **)(*local_8 + 0x14))(local_8,(uint)*(ushort *)(this + 0x13) * 2 + 2);
            puVar6 = (undefined1 *)(**(code **)(*local_8 + 0x1c))(local_8);
            *puVar6 = *(undefined1 *)((int)puVar5 + 1);
            puVar6[1] = (char)*puVar5;
            local_14 = 0;
            if (*puVar5 != 0) {
              do {
                puVar6[2] = *(undefined1 *)(*(int *)(puVar5 + 1) + 1 + local_14 * 2);
                puVar6[3] = *(undefined1 *)(*(int *)(puVar5 + 1) + local_14 * 2);
                local_14 = local_14 + 1;
                puVar6 = puVar6 + 2;
              } while (local_14 < (int)(uint)*puVar5);
            }
            iVar2 = (**(code **)(*(int *)*piVar1 + 0x1c))
                              ((int *)*piVar1,s_RMFF_1_0_Flags_6626f138,local_8);
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
            operator_delete(puVar5);
            if (-1 < iVar2) {
              param_1 = (int *)0x0;
              iVar2 = (**(code **)(*(int *)this[0xe] + 0xc))
                                ((int *)this[0xe],&DAT_6626a5f8,&param_1);
              if (-1 < iVar2) {
                local_c = 0;
                iVar2 = FUN_66203d20(this,(int *)&local_c,(int *)0x0);
                if (-1 < iVar2) {
                  puVar7 = operator_new(local_c);
                  if (puVar7 == (undefined4 *)0x0) {
                    iVar2 = -0x7ff8fff2;
                  }
                  else {
                    iVar2 = FUN_66203e90(this,puVar7);
                    if ((-1 < iVar2) &&
                       (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,puVar7,local_c), -1 < iVar2))
                    {
                      iVar2 = (**(code **)(*(int *)*piVar1 + 0x1c))
                                        ((int *)*piVar1,s_OpaqueData_6626f12c,param_1);
                    }
                    operator_delete(puVar7);
                  }
                }
                if (param_1 != (int *)0x0) {
                  (**(code **)(*param_1 + 8))(param_1);
                  param_1 = (int *)0x0;
                }
                if (-1 < iVar2) {
                  piVar1 = (int *)*piVar1;
                  *param_2 = (int)piVar1;
                  (**(code **)(*piVar1 + 4))(piVar1);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


