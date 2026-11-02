/* Module: espr3260.dll
   Function: FUN_632f4a30
   Address: 632f4a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f4a30(void *this,short *param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float10 fVar11;
  float local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  float local_50;
  int local_4c;
  float *local_48;
  float *local_44;
  undefined4 *local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float local_18;
  float *local_14;
  int local_10;
  float *local_c;
  float *local_8;
  
  local_6c = *(int *)((int)this + 4);
  puVar2 = (undefined4 *)(local_6c + *(int *)((int)this + 0x818) * -4);
  *(undefined4 **)((int)this + 4) = puVar2;
  local_40 = puVar2 + 10;
  iVar3 = 0;
  local_48 = (float *)(puVar2 + *(int *)((int)this + 0x810) + -0x6e);
  pfVar10 = (float *)(puVar2 + 0x82);
  if (0 < *(int *)((int)this + 0x810)) {
    do {
      sVar1 = *param_1;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      *pfVar10 = (float)(int)sVar1;
      pfVar10 = pfVar10 + 1;
    } while (iVar3 < *(int *)((int)this + 0x810));
  }
  FUN_632f7490((undefined4 *)((int)this + 0x2e0),puVar2,0x82);
  local_74 = puVar2[0x80];
  local_78 = (float)puVar2[0x81];
  FUN_632f66e0((float *)(puVar2 + 0x82),*(int *)((int)this + 0x810),0x632fb068,
               (float *)&DAT_632fb058,(float *)((int)this + 0x2c8),&local_78);
  FUN_632f7490(puVar2 + *(int *)((int)this + 0x810),(undefined4 *)((int)this + 0x2e0),0x82);
  local_10 = *param_2;
  if ((local_10 == 0) || (local_10 == 1)) {
    iVar3 = 0x2c;
  }
  else {
    iVar3 = *(int *)((int)this + 0x814) * 0xb;
  }
  pfVar9 = (float *)(*(int *)((int)this + 4) + iVar3 * -4);
  pfVar6 = pfVar9 + -iVar3;
  pfVar10 = pfVar6 + -0xb;
  pfVar8 = pfVar6 + -0x16;
  local_34 = pfVar6 + -0x2b;
  local_30 = pfVar6 + -0x35;
  local_60 = pfVar6 + -0x3f;
  *(float **)((int)this + 4) = local_60;
  local_58 = pfVar8;
  local_54 = pfVar9;
  local_44 = pfVar6;
  FUN_632f9340(local_60,10);
  FUN_632f37d0(this,local_48,pfVar10,10,(float *)0xf0,(float *)&DAT_632ff528);
  FUN_632f6c40(pfVar10,10);
  FUN_632f6c70(pfVar9,pfVar10,(float *)0xa);
  FUN_632f13f0(this,pfVar9,local_34,(int)this + 0x278,10);
  FUN_632f6800(this,local_34,(int)this + 0x278,pfVar9,*(float *)((int)this + 0x814));
  local_38 = (float *)(*(int *)((int)this + 4) + (-0x8f - *(int *)((int)this + 0x810)) * 4);
  *(float **)((int)this + 4) = local_38;
  FUN_632f7490((undefined4 *)((int)this + 0x4e8),local_38,0x8f);
  pfVar10 = local_38 + 0x8f;
  param_1 = (short *)0x0;
  local_3c = pfVar9;
  local_38 = pfVar10;
  if (0 < *(int *)((int)this + 0x810)) {
    local_48 = (float *)((int)local_40 - (int)pfVar10);
    do {
      FUN_632f7dc0(local_3c,pfVar8,*(float *)((int)this + 0x7fc),10);
      FUN_632f7dc0(local_3c,pfVar6 + -0x21,*(float *)((int)this + 0x800),10);
      FUN_632f8ae0(pfVar8,10,(float *)((int)local_48 + (int)pfVar10),pfVar10,0x30);
      FUN_632f9560(this,(int)(pfVar6 + -0x21),10,pfVar10,pfVar10,0x30,(float *)((int)this + 0x774),1
                  );
      param_1 = param_1 + 0x18;
      local_3c = local_3c + 0xb;
      pfVar10 = pfVar10 + 0x30;
    } while ((int)param_1 < *(int *)((int)this + 0x810));
  }
  FUN_632f8160(this,(int)local_34,local_30,param_2 + 1,&local_4c);
  param_2 = param_2 + 6;
  FUN_632f6800(this,local_30,(int)this + 0x74c,local_44,*(float *)((int)this + 0x814));
  FUN_632f7490(local_34,(undefined4 *)((int)this + 0x278),10);
  FUN_632f7490(local_30,(undefined4 *)((int)this + 0x74c),10);
  pfVar10 = local_38;
  if ((local_10 == 0) || (local_10 == 1)) {
    local_38 = (float *)FUN_632f7b30(local_38,*(float *)((int)this + 0x810));
  }
  else {
    local_38 = (float *)FUN_632f7b30(local_38,1.34525e-43);
    local_64 = FUN_632f7b30(pfVar10 + 0x60,2.01787e-43);
  }
  FUN_632f7490(pfVar10 + *(int *)((int)this + 0x810) + -0x8f,(undefined4 *)((int)this + 0x4e8),0x8f)
  ;
  local_8 = (float *)((int)local_38 + -3);
  iVar3 = *(int *)((int)this + 4) + *(int *)((int)this + 0x810) * 4 + 0x23c;
  *(int *)((int)this + 4) = iVar3;
  if ((int)local_8 < 0x14) {
    local_8 = (float *)0x14;
  }
  local_20 = (int)local_8 + 6;
  if (0x8f < local_20) {
    local_20 = 0x8f;
    local_8 = (float *)0x89;
  }
  *(undefined4 **)((int)this + 4) = (undefined4 *)(iVar3 + -0x328);
  FUN_632f7490((undefined4 *)((int)this + 0xc),(undefined4 *)(iVar3 + -0x328),0x9a);
  iVar7 = *(int *)((int)this + 4);
  local_1c = (float *)(iVar3 + -0xc0);
  puVar2 = (undefined4 *)(iVar7 + -0xe8);
  *(undefined4 **)((int)this + 4) = puVar2;
  FUN_632f7490((undefined4 *)((int)this + 0x724),puVar2,10);
  iVar3 = *(int *)((int)this + 4);
  local_34 = (float *)(iVar7 + -0xc0);
  local_30 = (float *)(iVar3 + -0x24);
  local_3c = (float *)(iVar3 + -0x1a4);
  local_2c = (float *)(iVar3 + -0x264);
  local_28 = local_44;
  local_14 = (float *)(iVar3 + -0x3e4);
  param_1 = (short *)0x0;
  pfVar10 = (float *)(iVar3 + -0x4a4);
  *(int *)((int)this + 4) = iVar3 + -0x564;
  if (0 < *(int *)((int)this + 0x810)) {
    local_54 = (float *)((int)local_54 - (int)local_44);
    do {
      local_48 = (float *)((int)local_54 + (int)local_28);
      FUN_632f7dc0(local_48,pfVar8,*(float *)((int)this + 0x7fc),10);
      local_44 = pfVar8 + -0xb;
      FUN_632f7dc0(local_48,local_44,*(float *)((int)this + 0x800),10);
      if ((local_10 == 0) || (local_10 == 1)) {
        local_5c = local_30 + -0x30;
        FUN_632f8ae0(local_28,10,(float *)(local_40 + (int)param_1),local_5c,0x30);
        FUN_632f9560(this,(int)local_28,10,local_5c,local_34,0x30,local_34 + -10,0);
      }
      if (local_10 == 2) {
        FUN_632f8ae0(local_28,10,(float *)(local_40 + (int)param_1),local_1c,0x30);
        FUN_632f9560(this,(int)local_28,10,local_1c,local_34,0x30,local_34 + -10,0);
      }
      FUN_632f8ae0(pfVar8,10,local_34,local_2c,0x30);
      FUN_632f9560(this,(int)local_44,10,local_2c,local_2c,0x30,(float *)((int)this + 0x79c),0);
      FUN_632f7490(pfVar8,pfVar10,0xb);
      FUN_632f9340((undefined4 *)(iVar3 + -0x478),0x25);
      pfVar8 = local_60;
      FUN_632f9560(this,(int)local_28,10,pfVar10,pfVar10,0x30,local_60,0);
      FUN_632f9560(this,(int)local_44,10,pfVar10,pfVar10,0x30,pfVar8,0);
      if ((local_10 == 0) || (local_10 == 1)) {
        FUN_632f7490(local_30 + -0x30,local_1c,0x30);
      }
      pfVar8 = local_8;
      if ((local_10 == 0) || (local_10 == 1)) {
        local_38 = FUN_632f7040((int)local_1c,local_2c,pfVar10,local_8,local_20,(int)param_1,
                                &local_24);
        if (param_1 == (short *)0x0) {
          if ((local_38 == (float *)0x55) && (0 < local_24)) {
            local_24 = 0;
          }
          if ((int)local_38 < 0x56) {
            local_c = (float *)((int)local_38 * 3 + -0x3a + local_24);
          }
          else {
            local_24 = 0;
            local_c = local_38 + 0x1c;
          }
          local_8 = (float *)((int)local_38 + -5);
          if ((int)local_8 < 0x14) {
            local_8 = (float *)0x14;
          }
          local_20 = (int)local_8 + 9;
          pfVar8 = local_8;
          if (0x8f < local_20) {
            local_20 = 0x8f;
            local_8 = (float *)0x86;
            *param_2 = (int)local_c;
            param_2 = param_2 + 1;
            pfVar8 = (float *)0x86;
            goto LAB_632f50a1;
          }
        }
        else {
          local_c = (float *)(((int)local_38 - (int)pfVar8) * 3 + 2 + local_24);
        }
        *param_2 = (int)local_c;
        param_2 = param_2 + 1;
      }
LAB_632f50a1:
      if (local_10 == 2) {
        psVar4 = param_1;
        if (param_1 == (short *)0x60) {
          psVar4 = (short *)0x0;
          local_8 = (float *)(local_64 + -3);
          if ((int)local_8 < 0x14) {
            local_8 = (float *)0x14;
          }
          local_20 = (int)local_8 + 6;
          pfVar8 = local_8;
          if (0x8f < local_20) {
            pfVar8 = (float *)0x89;
            local_20 = 0x8f;
            local_8 = (float *)0x89;
          }
        }
        local_38 = FUN_632f7040((int)local_1c,local_2c,pfVar10,pfVar8,local_20,(int)psVar4,&local_24
                               );
        if ((param_1 == (short *)0x0) || (param_1 == (short *)0x60)) {
          if ((int)local_38 < 0x56) {
            local_c = (float *)((int)local_38 * 3 + -0x3a + local_24);
          }
          else {
            local_c = local_38 + 0x1c;
          }
          local_8 = (float *)((int)local_38 + -5);
          if ((int)local_8 < 0x14) {
            local_8 = (float *)0x14;
          }
          local_20 = (int)local_8 + 9;
          if (0x8f < local_20) {
            local_20 = 0x8f;
            local_8 = (float *)0x86;
          }
        }
        else {
          local_c = (float *)(((int)local_38 - (int)pfVar8) * 3 + 2 + local_24);
        }
        *param_2 = (int)local_c;
        param_2 = param_2 + 1;
      }
      FUN_632f71f0(local_1c,(int)local_38,local_24,0x30);
      pfVar8 = local_2c + -0x30;
      FUN_632f5d40(local_1c,pfVar10,(int)pfVar8,0x30);
      fVar11 = FUN_632f5e60(local_2c,pfVar8,local_30,0x30);
      local_18 = (float)fVar11;
      if ((float10)_DAT_632fa338 < fVar11) {
        local_18 = 1.2;
      }
      if (local_18 < (float)_DAT_632fa340) {
        local_18 = 0.0;
      }
      if ((local_4c == 1) && (_DAT_632fa34c < local_18)) {
        local_18 = 0.95;
      }
      local_5c = (float *)(*(int *)((int)this + 4) + -0xc0);
      *(float **)((int)this + 4) = local_5c;
      FUN_632f96e0((int)local_2c,(int)local_5c,pfVar8,local_18,0x30);
      (**(code **)(*(int *)this + 0x20))(local_48,local_38,local_14);
      iVar7 = iVar3 + -0x564;
      FUN_632f5d40(local_14,pfVar10,iVar7,0x30);
      FUN_632f3890(local_5c,local_3c,iVar7,0x30);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc0;
      if (local_10 == 0) {
        (**(code **)(*(int *)this + 4))(local_3c,local_30 + -0x30,iVar7,param_2);
        (**(code **)(*(int *)this + 0x14))(param_2,local_14,pfVar10);
        (**(code **)(*(int *)this + 0x14))(param_2,iVar7,local_14);
        param_2 = param_2 + 3;
      }
      if (local_10 == 1) {
        iVar7 = 0x30;
        pfVar8 = local_30 + -0x30;
        do {
          iVar7 = iVar7 + -1;
          *pfVar8 = *pfVar8 - *(float *)(((int)local_1c - (int)(local_30 + -0x30)) + (int)pfVar8) *
                              local_18;
          pfVar8 = pfVar8 + 1;
        } while (iVar7 != 0);
        (*(code *)**(undefined4 **)this)(local_3c,local_30 + -0x30,iVar3 + -0x564,param_2);
        (**(code **)(*(int *)this + 0x10))(param_2,local_14,pfVar10);
        (**(code **)(*(int *)this + 0x10))(param_2,iVar3 + -0x564,local_14);
        param_2 = param_2 + 3;
      }
      iVar7 = iVar3 + -0x564;
      if (local_10 == 2) {
        if ((float)_DAT_632fa350 <= *(float *)((int)this + 0x2dc)) {
          (**(code **)(*(int *)this + 8))(local_3c,iVar7,&local_c);
          (**(code **)(*(int *)this + 0x18))(local_c,local_14,pfVar10);
          (**(code **)(*(int *)this + 0x18))(local_c,iVar7,local_14);
        }
        else {
          (**(code **)(*(int *)this + 0xc))();
          (**(code **)(*(int *)this + 0x1c))(local_c,local_14,pfVar10);
          (**(code **)(*(int *)this + 0x1c))(local_c,iVar7,local_14);
        }
        *param_2 = (int)local_c;
        param_2 = param_2 + 1;
      }
      pfVar8 = local_2c;
      FUN_632f5ed0((int)local_2c,(int)(local_2c + -0x30),local_14,(int)local_30,0x30);
      local_c = (float *)FUN_632f7e20(this,pfVar10,0x30,&local_18,&local_50,local_30,local_4c);
      *param_2 = (int)local_c;
      param_2 = param_2 + 1;
      if (local_10 == 2) {
        *(float *)((int)this + 0x2dc) = local_18;
      }
      FUN_632f6390(local_1c,(int)pfVar10,local_18,local_50,0x30);
      local_44 = (float *)(local_40 + (int)(param_1 + 0x13));
      iVar7 = 0x98;
      do {
        iVar5 = iVar7 + 4;
        *(float *)(iVar7 + -0xc0 + (int)local_34) = *local_44;
        local_44 = local_44 + 1;
        iVar7 = iVar5;
      } while (iVar5 < 0xc0);
      FUN_632f9560(this,(int)local_28,10,local_1c,pfVar10,0x30,(float *)((int)this + 0x2a0),1);
      iVar7 = 0x98;
      local_5c = (float *)((int)pfVar10 - (int)pfVar8);
      local_68 = 0xffffff40;
      local_44 = (float *)((int)local_14 - (int)pfVar8);
      pfVar8 = pfVar8 + 0x26;
      local_48 = (float *)((int)this + 0x79c);
      do {
        local_70 = iVar7 + -0xc0;
        iVar5 = iVar7 + -0xc0;
        iVar7 = iVar7 + 4;
        pfVar6 = pfVar8 + 1;
        *(float *)(iVar5 + (int)local_34) =
             *(float *)(iVar5 + (int)local_34) - *(float *)((int)(local_5c + -1) + (int)pfVar6);
        pfVar9 = local_48 + 1;
        *local_48 = *pfVar8 - (pfVar8[-0x30] * local_18 +
                              *(float *)((int)(local_44 + -1) + (int)pfVar6) * local_50);
        pfVar8 = pfVar6;
        local_48 = pfVar9;
      } while (iVar7 < 0xc0);
      local_28 = local_28 + 0xb;
      FUN_632f7490(local_1c + -0x6a,local_1c + -0x9a,0x9a);
      param_1 = param_1 + 0x18;
      pfVar8 = local_58;
    } while ((int)param_1 < *(int *)((int)this + 0x810));
  }
  FUN_632f7490(local_1c + -0x9a,(undefined4 *)((int)this + 0xc),0x9a);
  FUN_632f7490(local_34 + -10,(undefined4 *)((int)this + 0x724),10);
  *(int *)((int)this + 4) = local_6c;
  return;
}


