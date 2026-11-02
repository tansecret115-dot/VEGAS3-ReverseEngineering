/* Module: erv23260.dll
   Function: FUN_638076e0
   Address: 638076e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638076e0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  int iVar8;
  byte bVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  uint local_19c [72];
  int local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 uStack_70;
  float local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  uint *local_30;
  int local_2c;
  int *local_28;
  float local_24;
  float local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  float local_c;
  uint local_8;
  
  local_28 = (int *)0x0;
  local_38 = (int *)0x0;
  local_54 = *(int *)(*(int *)((int)this + 0x5c0) + 0x808);
  local_50 = 0;
  local_8 = 0;
  if (*param_2 != 3) {
    FUN_63809310((int)this);
  }
LAB_63807723:
  (**(code **)(**(int **)((int)this + 0x6c4) + 8))();
  FUN_63808600(this,param_1,*param_2);
  FUN_6380c130(this,&local_5c);
  local_44 = 0;
  local_3c = 1;
  while( true ) {
    *(uint *)((int)this + 0x750) = (uint)*(byte *)((int)this + 0x668);
    iVar5 = FUN_637fd280(*(int *)((int)this + 0x6c4));
    local_34 = (int *)((uint)(iVar5 * 3) / *(uint *)((int)this + 0x6dc) >> 2);
    local_4c = *(int *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x73c) = 0;
    iVar5 = *(int *)((int)this + 0x5ec);
    if ((iVar5 == 4) || (iVar5 == 5)) {
      fVar10 = *(float *)((int)this + 0x6f0);
    }
    else {
      fVar10 = *(float *)((uint)*(byte *)((int)this + 0x666) * 0x77c + 0x774 +
                         *(int *)((int)this + 0x5c0));
    }
    local_30 = *(uint **)((uint)*(byte *)((int)this + 0x666) * 0x77c + 0x64c +
                         *(int *)((int)this + 0x5c0));
    if (local_30 == (uint *)0x0) {
      local_30 = *(uint **)((*(byte *)((int)this + 0x666) + 1) * 0x77c + *(int *)((int)this + 0x5c0)
                           );
    }
    local_c = fVar10;
    if (((iVar5 != 0) && (iVar5 != 4)) && (iVar5 = FUN_638088e0((int)this), iVar5 != 0)) {
      *(undefined4 *)(*(int *)((int)this + 0x700) + 0x14) = *(undefined4 *)((int)fVar10 + 0x14);
      fVar10 = *(float *)((int)this + 0x700);
      local_c = fVar10;
    }
    if ((*param_2 == 3) && (*(int *)((int)this + 0x54) == 2)) {
      *(undefined4 *)((int)this + 0x724) = 0;
      uVar6 = FUN_6380baa0((*(int *)((int)this + 0x58) * -0x1e + 310000U) / 10000);
      *(char *)((int)this + 0x668) = (char)uVar6;
      *(uint *)((int)this + 0x750) = uVar6 & 0xff;
      if (*(int *)(param_1 + 0x20) != 0) {
        uVar6 = FUN_6380baa0((*(int *)((int)this + 0x58) * -0x1e + 310000U) / 10000);
        local_7c = FUN_6380baa0((*(int *)((int)this + 0x10) * -0x1e + 310000U) / 10000);
        uVar12 = 0;
        uStack_70 = 0;
        local_78 = 0;
        local_24 = (float)uVar6 / (float)local_7c;
        local_74 = uVar6;
        if (*(int *)(*(int *)((int)this + 0x5c0) + 0x8c8) != 0) {
          do {
            iVar5 = *(int *)(param_1 + 0x1c);
            local_10 = (int *)(uint)*(byte *)(uVar12 + iVar5);
            bVar3 = ftol();
            bVar9 = bVar3;
            if (0x1f < bVar3) {
              bVar9 = 0x1f;
            }
            if (bVar9 == 0) {
              bVar3 = 1;
            }
            else if (0x1f < bVar3) {
              bVar3 = 0x1f;
            }
            *(byte *)(uVar12 + iVar5) = bVar3;
            uVar12 = uVar12 + 1;
            fVar10 = local_c;
          } while (uVar12 < *(uint *)(*(int *)((int)this + 0x5c0) + 0x8c8));
        }
      }
    }
    FUN_638087c0(this,0,*(void **)((int)this + 0x6c4));
    iVar5 = (**(code **)(**(int **)((int)this + 0x5c4) + 4))
                      ((int)this + 0x5d8,this,*(undefined4 *)((int)this + 0x6c4),fVar10,param_1,
                       local_30,*(undefined4 *)
                                 ((uint)*(byte *)((int)this + 0x666) * 0x77c + 0x648 +
                                 *(int *)((int)this + 0x5c0)));
    if (iVar5 != 0) {
      return iVar5;
    }
    *(undefined4 *)((int)this + 0x748) = 0;
    local_2c = 0;
    if ((*(int *)((int)this + 0x8c) != 0) && (*(int *)((int)this + 0x90) != 0)) {
      uVar6 = (*(int *)((int)this + 0x90) * *(int *)((int)this + 0x6e4) + 99U) / 100;
      *(uint *)((int)this + 0x748) = uVar6;
      if ((uVar6 != 0) && (uVar12 = 0, uVar6 != 0)) {
        do {
          if (*(uint *)((int)this + 0x6e4) <= *(uint *)((int)this + 0x744)) {
            *(undefined4 *)((int)this + 0x744) = 0;
          }
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x18))(0,*(undefined4 *)((int)this + 0x744));
          uVar12 = uVar12 + 1;
          *(int *)((int)this + 0x744) = *(int *)((int)this + 0x744) + 1;
        } while (uVar12 < *(uint *)((int)this + 0x748));
      }
    }
    if ((*(int *)((int)this + 0x720) == 0) || (*(int *)((int)this + 0x60c) != 0)) break;
    local_18 = *(int *)((int)this + 0x6e0);
    local_14 = *(int *)((int)this + 0x6dc);
    local_20 = 0.0;
    local_1c = 0;
    if (*(int *)((int)this + 0x5ec) != 0) {
      (**(code **)(**(int **)((int)this + 0x5c4) + 0x34))(&local_20);
    }
    if ((*param_2 == 0) || (*param_2 == 4)) {
      *(undefined4 *)((int)this + 0x724) = *(undefined4 *)((int)this + 0x364);
    }
    else {
      *(undefined4 *)((int)this + 0x724) = *(undefined4 *)((int)this + 0x104);
    }
    puVar1 = (undefined1 *)((int)this + 0x704);
    if (*(int *)((int)this + 0x724) == 0) {
      *puVar1 = *(undefined1 *)((int)this + 0x668);
    }
    else {
      *puVar1 = 3;
      if (*(uint *)((int)this + 0x754) != 0) {
        if (*(int *)((int)this + 0x5ec) == 3) {
          iVar5 = -(*(uint *)((int)this + 0x758) / *(uint *)((int)this + 0x754));
        }
        else {
          iVar5 = *(int *)((int)this + 0x758);
        }
        *(uint *)((int)this + 0x724) = (uint)((iVar5 + 100) * *(int *)((int)this + 0x724)) / 100;
      }
    }
    local_2c = (**(code **)(**(int **)((int)this + 0x5c4) + 0x14))(&local_20,puVar1,&local_8);
    if (local_2c != 0) goto LAB_63807fe7;
    if ((*(int *)((int)this + 0x5ec) != 1) ||
       (iVar5 = (**(code **)(**(int **)((int)this + 0x5c4) + 0x44))(),
       uVar6 = iVar5 - *(int *)((int)this + 0x748),
       ((uVar6 & ((int)uVar6 < 0) - 1) * 100) / *(uint *)((int)this + 0x6e4) < 0x42)) {
      (**(code **)(**(int **)((int)this + 0x6c4) + 8))();
      *(char *)((int)this + 0x668) = (char)local_8;
      *(uint *)((int)this + 0x750) = local_8 & 0xff;
      FUN_637fa780(*(void **)((int)this + 0x6c4),0,0,(uint)*(byte *)((int)this + 0x668));
      FUN_638087c0(this,0,*(void **)((int)this + 0x6c4));
      FUN_6380cb00(this,(uint *)&local_20,(uint)*(byte *)((int)this + 0x668));
      uVar6 = 0;
      if (local_14 * local_18 != 1) {
        do {
          if (0x83 < *(uint *)(*(int *)((int)this + 0x74c) + uVar6 * 4)) {
            (**(code **)(**(int **)((int)this + 0x5c4) + 0x18))(0,uVar6);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_14 * local_18 - 1U);
      }
      bVar4 = FUN_637fd290(*(int *)((int)this + 0x6c4));
      if (CONCAT31(extraout_var_00,bVar4) != 0) goto LAB_6380802b;
LAB_63807fe7:
      local_2c = FUN_638084f0(this);
      if (local_2c != 0) {
        *(undefined1 *)((int)this + 0x740) = 1;
        return local_2c;
      }
      goto LAB_63808097;
    }
    *param_2 = 0;
    if (*(int *)((int)this + 0x20) == 1) {
      *(undefined4 *)((int)this + 0x6c8) = *(undefined4 *)((int)this + 0x24);
    }
    FUN_637fa610(*(void **)((int)this + 0x6c4),0);
    *(undefined1 *)((int)this + 0x668) = (undefined1)local_8;
    (**(code **)(**(int **)((int)this + 0x6c4) + 8))();
    FUN_63808600(this,param_1,*param_2);
  }
  local_30 = local_19c;
  local_48 = (int *)((int)this + 0x378);
  local_c = 0.0;
  local_40 = 0;
  local_10 = local_34;
  do {
    fVar10 = local_c;
    if ((uint)*(float *)((int)this + 0x6dc) <= (uint)local_c) {
LAB_6380802b:
      if ((*param_2 == 0) || (*param_2 == 4)) {
        iVar5 = *(int *)((int)this + 0x6dc);
        *(undefined4 *)((int)this + 0x5bc) = 0;
        if (iVar5 != 0) {
          piVar7 = (int *)((int)this + 0x378);
          do {
            iVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            iVar5 = iVar5 + -1;
            *(int *)((int)this + 0x5bc) = *(int *)((int)this + 0x5bc) + iVar8 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        iVar5 = *(int *)((int)this + 0x6dc);
        *(undefined4 *)((int)this + 0x35c) = 0;
        if (iVar5 != 0) {
          piVar7 = (int *)((int)this + 0x118);
          do {
            iVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            iVar5 = iVar5 + -1;
            *(int *)((int)this + 0x35c) = *(int *)((int)this + 0x35c) + iVar8 + -1;
          } while (iVar5 != 0);
        }
      }
LAB_63808097:
      local_4c = FUN_637fa830(*(void **)((int)this + 0x6c4),param_3);
      *(int *)((int)this + 0x734) = local_4c;
      if (local_4c == 0) {
        *(undefined1 *)((int)this + 0x740) = 1;
        return 1;
      }
      if ((*(int *)((int)this + 0x5ec) == 3) ||
         ((*(int *)(*(int *)((int)this + 0x5c0) + 0x80) == 1 &&
          (*(uint *)(*(int *)((int)this + 0x5c0) + 0x834) < 0x15)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) ||
         (((*(int *)(*(int *)((int)this + 0x5c0) + 0x80) == 1 && (*(int *)((int)this + 0x20) == 1))
          && (*(int *)((int)this + 0x24) == 1)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      iVar5 = local_2c;
      if (!bVar4) {
        iVar5 = *(int *)((int)this + 0x6f8);
        local_50 = *(uint *)(iVar5 + 8);
        local_24 = *(float *)(iVar5 + 4);
        local_10 = *(int **)(iVar5 + 0x10);
        local_34 = *(int **)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        iVar5 = *(int *)((int)this + 0x5c8);
        if (iVar5 == 0) {
          uVar14 = 0;
          uVar11 = 0;
          param_1 = 0;
          param_2 = (int *)0x0;
        }
        else {
          uVar14 = *(undefined4 *)(iVar5 + 4);
          uVar11 = *(undefined4 *)(iVar5 + 8);
          param_2 = *(int **)(iVar5 + 0x10);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x14);
          param_1 = *(int *)(iVar5 + 0xc);
        }
        FUN_637fa630(*(void **)((int)this + 0x6c4),&local_54,&local_58);
        (**(code **)(**(int **)(*(int *)((int)this + 0x5c0) + 0x8a8) + 0x44))(local_54,local_58);
        (**(code **)(**(int **)(*(int *)((int)this + 0x5c0) + 0x8a8) + 0x48))((int)this + 0x5d8);
        iVar5 = FUN_637f3f60(*(void **)(*(int *)((int)this + 0x5c0) + 0x8a8),param_3,local_4c,
                             local_24,local_50,local_34,local_10,uVar14,uVar11,param_1,param_2,0,
                             (&PTR_FUN_63830010)[*(int *)(*(int *)((int)this + 0x5c0) + 0x78)]);
        if (iVar5 != 0) {
          *(undefined1 *)((int)this + 0x740) = 1;
          FUN_63809980(*(int *)((int)this + 0x5d0));
          FUN_63809980(*(int *)((int)this + 0x5d4));
          iVar8 = FUN_638025b0(*(void **)((int)this + 0x5c0),*(int *)this,(int *)&local_10,
                               (int *)&param_3);
          if (iVar8 != 0) {
            return iVar5;
          }
          param_2 = local_10;
          if ((int)param_3 < (int)local_10) {
            return iVar5;
          }
          iVar8 = (int)local_10 * 0x77c;
          do {
            iVar2 = iVar8 + 0x84 + *(int *)((int)this + 0x5c0);
            if (*(int *)(iVar8 + 0xc0 + *(int *)((int)this + 0x5c0)) == *(int *)this) {
              if (*(int *)(iVar2 + 0xbc) != 4) {
                *(undefined1 *)((int)this + 0x740) = 1;
              }
              FUN_63809980(*(int *)(iVar2 + 0x5d0));
              FUN_63809980(*(int *)(iVar2 + 0x5d4));
            }
            param_2 = (int *)((int)param_2 + 1);
            iVar8 = iVar8 + 0x77c;
          } while ((int)param_2 <= (int)param_3);
          return iVar5;
        }
        local_18 = *(int *)((int)this + 0x6e0);
        local_20 = 0.0;
        local_1c = 0;
        local_14 = *(int *)((int)this + 0x6dc);
        (**(code **)(**(int **)((int)this + 0x5c4) + 0x38))
                  (&local_20,*(undefined4 *)((int)this + 0x6f8));
        iVar5 = 0;
      }
      uVar6 = *(uint *)((int)this + 0x10c);
      if (-1 < (int)uVar6) {
        if (uVar6 < 9) {
          *(undefined1 *)((int)this + 0x66c) = 0;
          *(uint *)((int)this + 0x10c) = uVar6 + 1;
          *(undefined1 *)((int)this + 0x66d) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
          *(undefined1 *)((int)this + 0x66c) = 1;
          *(undefined1 *)((int)this + 0x66d) = 0xb4;
        }
      }
      if ((*(int *)((int)this + 0x5ec) == 0) || (*(int *)((int)this + 0x5ec) == 4)) {
        if (local_44 == 0) {
          *(undefined4 *)((int)this + 0x368) = 0x10;
        }
        else {
          iVar8 = FUN_6380baa0(local_44 / *(uint *)((int)this + 0x6dc) & 0xff);
          *(int *)((int)this + 0x368) = iVar8;
        }
      }
      else if (local_44 == 0) {
        *(undefined4 *)((int)this + 0x108) = 0x10;
      }
      else {
        iVar8 = FUN_6380baa0(local_44 / *(uint *)((int)this + 0x6dc));
        *(int *)((int)this + 0x108) = iVar8;
      }
      if ((*(int *)((int)this + 0x614) != 0) && (*(int *)((int)this + 0x88) != 0)) {
        *(undefined4 *)((int)this + 0x88) = 0;
      }
      FUN_637fa610(*(void **)((int)this + 0x6c4),1);
      return iVar5;
    }
    local_18 = *(int *)((int)this + 0x6e0);
    local_24 = (float)((int)local_c * local_18);
    uVar6 = (uint)local_c % *(uint *)((int)this + 0x6e8);
    local_1c = 0;
    local_14 = 1;
    if ((uVar6 == 0) && (local_c != 0.0)) {
      local_3c = local_3c << 1;
      local_40 = local_40 + 1;
    }
    local_20 = local_c;
    if ((((local_4c == 0) && (*(int *)((int)this + 0x74) == 0)) && (uVar6 != 0)) || (local_c == 0.0)
       ) {
      uVar6 = *(uint *)((int)this + 0x750);
    }
    else {
      uVar6 = FUN_6380bd80(this,*(uint *)((int)this + 0x750),(float)local_28,local_c,
                           *(uint *)((int)this + 0x94),local_5c,(char)local_50);
    }
    iVar5 = local_40;
    *local_30 = uVar6;
    local_44 = local_44 + uVar6;
    FUN_637fa780(*(void **)((int)this + 0x6c4),iVar5,(int)fVar10,uVar6);
    if ((((*(int *)((int)this + 0x74) == 0) && (local_40 != 0)) &&
        ((uint)fVar10 % *(uint *)((int)this + 0x6e8) == 0)) &&
       ((local_54 != 0 || ((uVar6 != *(uint *)((int)this + 0x750) && (local_4c == 0)))))) {
      *(uint *)((int)this + 0x73c) = *(uint *)((int)this + 0x73c) | local_3c;
    }
    else {
      *(uint *)((int)this + 0x73c) = *(uint *)((int)this + 0x73c) & ~local_3c;
    }
    if ((*(uint *)((int)this + 0x73c) & local_3c) != 0) {
      FUN_637fb260(*(void **)((int)this + 0x6c4),0);
      *(uint *)((int)this + 0x750) = uVar6;
      (**(code **)(**(int **)((int)this + 0x5c4) + 8))(local_20);
    }
    *(char *)((int)this + 0x704) = (char)uVar6;
    if (*(uint *)(*(int *)((int)this + 0x5c0) + 0x834) < 0x1f) {
      *(undefined4 *)((int)this + 0x71c) = 4;
    }
    iVar5 = local_18;
    fVar10 = local_24;
    fVar13 = local_24;
    if ((uint)local_24 < (uint)(local_18 + (int)local_24)) {
      do {
        if (0x83 < *(uint *)(*(int *)((int)this + 0x74c) + (int)fVar13 * 4)) {
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x18))(0,fVar13);
          iVar5 = local_18;
          fVar10 = local_24;
        }
        fVar13 = (float)((int)fVar13 + 1);
      } while ((uint)fVar13 < (uint)(iVar5 + (int)fVar10));
    }
    if ((*(int *)((int)this + 0x60c) == 0) || (*(int *)((int)this + 0x614) == 0)) {
      (**(code **)(**(int **)((int)this + 0x5c4) + 0x14))(&local_20,(int)this + 0x704,&local_8);
      FUN_6380cb00(this,(uint *)&local_20,uVar6);
    }
    else {
      local_6c = local_20;
      local_68 = local_1c;
      local_60 = local_14;
      local_64 = 1;
      local_8 = 0;
      uVar12 = local_1c;
      if (local_1c < iVar5 + local_1c) {
        do {
          local_68 = uVar12;
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x14))(&local_6c,(int)this + 0x704,&local_58)
          ;
          FUN_6380cb00(this,(uint *)&local_6c,uVar6);
          local_8 = local_8 + local_58;
          uVar12 = uVar12 + 1;
          uVar6 = *(uint *)((int)this + 0x750);
        } while (uVar12 < local_1c + local_18);
      }
    }
    fVar10 = local_c;
    if (((*(int *)((int)this + 0x5ec) == 1) && (3 < (uint)local_c)) &&
       (iVar5 = (**(code **)(**(int **)((int)this + 0x5c4) + 0x44))(),
       uVar12 = iVar5 - *(int *)((int)this + 0x748),
       0x41 < (uint)((int)((uVar12 & ((int)uVar12 < 0) - 1) * 100) /
                    (((int)fVar10 + 1) * *(int *)((int)this + 0x6e0))))) break;
    bVar4 = FUN_637fd290(*(int *)((int)this + 0x6c4));
    if (CONCAT31(extraout_var,bVar4) == 0) {
      local_2c = FUN_638084f0(this);
      if (local_2c != 0) {
        *(undefined1 *)((int)this + 0x740) = 1;
        return local_2c;
      }
      goto LAB_63808097;
    }
    local_28 = (int *)FUN_637fd230(*(int *)((int)this + 0x6c4));
    piVar7 = local_10;
    local_50 = (uint)(local_10 < local_28);
    if ((*param_2 == 0) || (*param_2 == 4)) {
      *local_48 = local_8 + 1;
      iVar8 = *(int *)(*(int *)((int)this + 0x5c0) + 0x78);
      iVar5 = (int)this + 0x360;
    }
    else {
      local_48[-0x98] = local_8 + 1;
      iVar8 = *(int *)(*(int *)((int)this + 0x5c0) + 0x78);
      iVar5 = (int)this + 0x100;
    }
    FUN_6380bb50(iVar5,uVar6,local_8,(int)local_28 - (int)local_38,(uint)(iVar8 == 3));
    local_38 = local_28;
    local_c = (float)((int)local_c + 1);
    local_10 = (int *)((int)piVar7 + (int)local_34);
    local_30 = local_30 + 1;
    local_48 = local_48 + 1;
  } while( true );
  *param_2 = 0;
  if (*(int *)((int)this + 0x20) == 1) {
    *(undefined4 *)((int)this + 0x6c8) = *(undefined4 *)((int)this + 0x24);
  }
  FUN_637fa610(*(void **)((int)this + 0x6c4),0);
  goto LAB_63807723;
}


