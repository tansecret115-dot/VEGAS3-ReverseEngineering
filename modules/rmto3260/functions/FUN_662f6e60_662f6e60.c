/* Module: rmto3260.dll
   Function: FUN_662f6e60
   Address: 662f6e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f6e60(void *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  UINT UVar6;
  void *this_00;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  CHAR local_130;
  undefined4 local_12f [65];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_1a;
  void *local_14;
  int local_10;
  void *local_c;
  int local_8;
  
  iVar9 = 0;
  local_8 = 0;
  local_c = (void *)0x0;
  local_14 = (void *)0x0;
  puVar2 = FUN_66301d80(DAT_66311d70,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = -0x7ffbfdbb;
    iVar9 = -0x7ffbfdbb;
  }
  else {
    piVar3 = (int *)FUN_66301bb0((int)puVar2);
    local_c = (void *)*piVar3;
  }
  if (iVar9 == 0) {
    *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 2);
    *(uint *)((int)this + 0x10) = uVar5;
    *(undefined2 *)((int)this + 0x32) = *(undefined2 *)(param_2 + 6);
    iVar4 = FUN_662f6d90(this,uVar5);
    if (iVar4 == 0) {
      local_8 = -0x7ffbfdbc;
      iVar9 = -0x7ffbfdbc;
    }
    if (iVar9 == 0) {
      uVar5 = FUN_662f9600(DAT_66311d6c,*(undefined4 **)((int)local_c + 4));
      if (uVar5 == 0) {
        local_8 = -0x7ffbfdbb;
      }
      else {
        local_130 = DAT_66311c80;
        puVar2 = local_12f;
        for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        UVar6 = GetSystemDirectoryA(&local_130,0x104);
        if (UVar6 == 0) {
          uVar5 = 0xffffffff;
          pcVar7 = &DAT_66311c80;
          do {
            pcVar11 = pcVar7;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar7 = pcVar11 + -uVar5;
          pcVar11 = &local_130;
          for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        iVar9 = -1;
        pcVar7 = &local_130;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          uVar5 = 0xffffffff;
          pcVar7 = &local_130;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if (*(char *)((int)local_12f + (~uVar5 - 3)) != '\\') {
            uVar5 = 0xffffffff;
            pcVar7 = &DAT_6630b51c;
            do {
              pcVar11 = pcVar7;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar11 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar11;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            iVar9 = -1;
            pcVar7 = &local_130;
            do {
              pcVar10 = pcVar7;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar10 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar10;
            } while (cVar1 != '\0');
            pcVar7 = pcVar11 + -uVar5;
            pcVar11 = pcVar10 + -1;
            for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar11 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
        }
        uVar5 = 0xffffffff;
        pcVar7 = s_Real_Codecs_6630b9e4;
        do {
          pcVar11 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar9 = -1;
        pcVar7 = &local_130;
        do {
          pcVar10 = pcVar7;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar10 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar10;
        } while (cVar1 != '\0');
        pcVar7 = pcVar11 + -uVar5;
        pcVar11 = pcVar10 + -1;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
        this_00 = operator_new(0x25f);
        if (this_00 == (void *)0x0) {
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = FUN_662fe310(this_00,*(char **)((int)local_c + 4));
        }
        *(char **)this = pcVar7;
      }
      iVar9 = local_8;
      if (local_8 == 0) {
        FUN_662f9090(local_c,2,&local_10,(ushort *)((int)&param_1 + 2));
        if (*(ushort *)((int)this + 0x14) < *(ushort *)(local_10 + 8)) {
          local_8 = -0x7ffbfdbe;
          iVar9 = -0x7ffbfdbe;
        }
        if (iVar9 == 0) {
          FUN_662f9090(local_c,2,&local_10,(ushort *)((int)&param_1 + 2));
          iVar4 = *(int *)((int)this + 0x10);
          if ((*(int *)(local_10 + 2) == iVar4) &&
             (*(short *)(local_10 + 8) == *(short *)((int)this + 0x14))) {
            *(int *)((int)this + 0x16) = iVar4;
            *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x14);
            *(undefined4 *)((int)this + 0x1c) = 0;
          }
          else {
            iVar4 = FUN_662fd010(iVar4,(uint)*(ushort *)((int)this + 0x14),*(int *)(local_10 + 2),
                                 (uint)*(ushort *)(local_10 + 8),0,&local_14);
            if (iVar4 == -1) {
              local_8 = -0x7ffbfdbc;
              iVar9 = -0x7ffbfdbc;
            }
            else {
              *(undefined4 *)((int)this + 0x16) = *(undefined4 *)(local_10 + 2);
              *(undefined2 *)((int)this + 0x1a) = *(undefined2 *)(local_10 + 8);
            }
            *(undefined4 *)((int)this + 0x1c) = 1;
          }
          if (iVar9 == 0) {
            local_20 = *(undefined4 *)((int)this + 0x16);
            local_1c = *(undefined2 *)((int)this + 0x32);
            local_1a = CONCAT22(*(undefined2 *)((int)local_c + 8),*(undefined2 *)((int)this + 0x1a))
            ;
            iVar9 = FUN_662feb00(*(void **)this,(int)&local_28);
            if (iVar9 == 0) {
              if ((short)local_1a != 0) {
                *(int *)((int)this + 0x2a) = local_28 / (int)(local_1a & 0xffff);
              }
              if (*(int *)((int)this + 0x1c) == 0) {
                *(undefined4 *)((int)this + 0x16) = local_20;
              }
              else {
                local_8 = iVar9;
                iVar4 = FUN_662fda20(*(int *)((int)this + 0x2a),(int)local_14);
                *(int *)((int)this + 0x38) = iVar4;
                FUN_662fd160(local_14);
              }
              *(undefined4 *)((int)this + 0x2e) = local_24;
            }
          }
        }
      }
    }
  }
  *(uint *)((int)this + 0x52) = (uint)(iVar9 == 0);
  if (iVar9 != 0) {
    *(int *)((int)this + 0x487) = iVar9;
  }
  return iVar9;
}


