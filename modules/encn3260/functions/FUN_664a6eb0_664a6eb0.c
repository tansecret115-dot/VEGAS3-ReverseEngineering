/* Module: encn3260.dll
   Function: FUN_664a6eb0
   Address: 664a6eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a73d5) */

undefined4 FUN_664a6eb0(int param_1,uint *param_2)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  void *this;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4 [2];
  uint *local_9c;
  undefined4 local_98;
  uint local_90;
  uint local_8c [5];
  uint local_78;
  int local_74 [2];
  void *local_6c;
  int local_68 [4];
  void *local_58;
  int local_54 [4];
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28 [2];
  void *local_20;
  int local_1c [3];
  int local_10;
  void *local_c;
  int *local_8;
  
  puVar5 = param_2;
  puVar7 = local_a4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_34 = 0;
  local_28[0] = 0;
  piVar6 = (int *)(param_1 + -0xc);
  local_28[1] = 0;
  local_20 = (void *)0x0;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_8 = piVar6;
  (**(code **)(*(int *)(param_1 + -0xc) + 4))(piVar6);
  if (DAT_664f07c8 != 0) {
    FUN_664a7a70((int)piVar6);
    DAT_664f07c8 = 0;
  }
  piVar6 = *(int **)(param_1 + 0x54);
  if (piVar6 == (int *)0x0) {
    local_34 = 0x80004005;
  }
  else {
    uVar1 = *param_2;
    if (uVar1 < 0x103) {
      if (uVar1 < 0x100) {
        if ((uVar1 == 0x84) && (*(int *)(*(int *)(param_1 + 0x60) + 0x1f8) != 0)) {
          piVar6 = *(int **)(*(int *)(param_1 + 0x60) + 0x1fc);
          (**(code **)(*piVar6 + 0x14))(piVar6,param_2);
        }
      }
      else {
        piVar8 = *(int **)(*(int *)(param_1 + 0x60) + 0x70);
        if (piVar8 == (int *)0x0) {
          (**(code **)(*piVar6 + 0x14))(piVar6,param_2);
          local_c = (void *)(param_1 + 0x24);
          do {
            local_58 = local_c;
            local_2c = *(int *)(param_1 + 0x30);
            local_68[2] = -(uint)(*(int *)((int)local_c + 0xc) != 0);
            local_54[0] = 0;
            local_68[3] = local_68[2];
            local_54[1] = 0;
            if (local_68[2] != 0) {
              FUN_664c4010(local_c,local_68 + 3,local_54 + 1,local_54);
            }
            piVar6 = local_68 + 2;
            piVar8 = local_28;
            for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
            while( true ) {
              if (local_28[0] == 0) goto switchD_664a706e_default;
              (**(code **)(*(int *)(local_1c[0] + 0xc) + 0xc))(local_1c[0] + 0xc,param_2);
              if (*(int *)(param_1 + 0x30) != local_2c) break;
              local_28[0] = local_28[1];
              if (local_28[1] != 0) {
                FUN_664c4010(local_20,local_28 + 1,local_1c + 1,local_1c);
              }
            }
          } while( true );
        }
        if (piVar8 == local_8) {
          if (param_2[1] != *(uint *)(param_1 + 0x138)) {
            (**(code **)(*piVar6 + 0x14))(piVar6,param_2);
          }
        }
        else {
          (**(code **)(piVar8[3] + 0xc))(piVar8 + 3,param_2);
        }
      }
    }
    else {
      switch(uVar1) {
      case 0x3001:
      case 0x3002:
      case 0x3003:
      case 0x3004:
      case 0x3005:
        local_1c[2] = *(int *)param_2[2];
        local_10 = ((int *)param_2[2])[1];
        if ((*(HRGN *)(param_1 + 300) != (HRGN)0x0) &&
           (BVar2 = PtInRegion(*(HRGN *)(param_1 + 300),local_1c[2],local_10), BVar2 != 0)) {
          BVar2 = PtInRegion(*(HRGN *)(param_1 + 0x128),local_1c[2],local_10);
          if (BVar2 == 0) {
            local_c = (void *)(param_1 + 0x24);
            do {
              local_6c = local_c;
              local_2c = *(int *)(param_1 + 0x30);
              local_74[0] = -(uint)(*(int *)((int)local_c + 0xc) != 0);
              local_68[0] = 0;
              local_74[1] = local_74[0];
              local_68[1] = 0;
              if (local_74[0] != 0) {
                FUN_664c4010(local_c,local_74 + 1,local_68 + 1,local_68);
              }
              piVar6 = local_74;
              piVar8 = local_28;
              for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar8 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar8 = piVar8 + 1;
              }
              while( true ) {
                if ((local_28[0] == 0) ||
                   ((**(code **)(*(int *)(local_1c[0] + 0xc) + 0xc))(local_1c[0] + 0xc,param_2),
                   param_2[5] != 0)) goto switchD_664a706e_default;
                param_2[5] = 0;
                if (*(int *)(param_1 + 0x30) != local_2c) break;
                local_28[0] = local_28[1];
                if (local_28[1] != 0) {
                  FUN_664c4010(local_20,local_28 + 1,local_1c + 1,local_1c);
                }
              }
            } while( true );
          }
          *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x200) = *(undefined4 *)(param_1 + 0x54);
          if (*param_2 == 0x3001) {
            *(int **)(*(int *)(param_1 + 0x60) + 0x70) = local_8;
            puVar3 = (undefined4 *)(**(code **)(*(int *)(param_1 + -4) + 0x1c))(param_1 + -4);
            if ((puVar3 != (undefined4 *)0x0) && ((HWND)*puVar3 != (HWND)0x0)) {
              SetFocus((HWND)*puVar3);
            }
          }
          iVar4 = FUN_664a95c0((int)local_8);
          local_1c[2] = local_1c[2] + (iVar4 - *(int *)(param_1 + 200));
          iVar4 = FUN_664a95d0((int)local_8);
          local_10 = local_10 + (iVar4 - *(int *)(param_1 + 0xcc));
          puVar5 = param_2;
          puVar7 = local_a4;
          for (iVar4 = 6; piVar6 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          local_9c = (uint *)(local_1c + 2);
          this = (void *)FUN_664a9d00((int)local_8);
          piVar8 = *(int **)((int)this + 0x168);
          if (piVar8 != piVar6) {
            if (piVar8 != (int *)0x0) {
              local_b4 = &local_30;
              local_30 = 0xffffffff;
              local_2c = -1;
              local_b8 = *(undefined4 *)(param_1 + 0x138);
              local_bc = 0x3007;
              local_b0 = 0;
              local_ac = 0;
              local_a8 = 0;
              (**(code **)(piVar8[3] + 0xc))(piVar8 + 3,&local_bc);
            }
            local_44 = local_1c + 2;
            *(int **)((int)this + 0x168) = local_8;
            local_54[3] = *(undefined4 *)(param_1 + 0x138);
            local_54[2] = 0x3006;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            (**(code **)(**(int **)(param_1 + 0x54) + 0x14))(*(int **)(param_1 + 0x54),local_54 + 2)
            ;
            FUN_664aa6d0(this,2,100);
          }
          if (param_2[1] != *(uint *)(param_1 + 0x138)) {
            puVar5 = local_a4;
            puVar7 = local_8c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            local_8c[2] = local_98;
            local_8c[3] = local_9c[1] << 0x10 | *local_9c;
            switch(*param_2) {
            case 0x3001:
              local_8c[0] = 0x201;
              break;
            case 0x3002:
              local_8c[0] = 0x202;
              break;
            case 0x3003:
              local_8c[0] = 0x204;
              break;
            case 0x3004:
              local_8c[0] = 0x205;
              break;
            case 0x3005:
              local_8c[0] = 0x200;
            }
            (**(code **)(**(int **)(param_1 + 0x54) + 0x14))(*(int **)(param_1 + 0x54),local_8c);
            param_2[5] = local_78;
          }
          piVar6 = *(int **)(param_1 + 0x54);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x14))(piVar6,local_a4);
            param_2[5] = param_2[5] | local_90;
          }
          piVar6 = *(int **)(param_1 + 0x54);
          if ((piVar6 != (int *)0x0) && (*param_2 == 0x3005)) {
            local_54[3] = *(undefined4 *)(param_1 + 0x138);
            local_54[2] = 0x20;
            local_44 = (int *)0x0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            (**(code **)(*piVar6 + 0x14))(piVar6,local_54 + 2);
          }
        }
        break;
      case 0x3006:
      case 0x3007:
        (**(code **)(*piVar6 + 0x14))(piVar6,param_2);
      }
    }
  }
switchD_664a706e_default:
  (**(code **)(*local_8 + 8))(local_8);
  return local_34;
}


