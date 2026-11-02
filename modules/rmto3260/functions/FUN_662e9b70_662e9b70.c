/* Module: rmto3260.dll
   Function: FUN_662e9b70
   Address: 662e9b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e9b70(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_48;
  short local_44;
  byte local_40;
  DWORD local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  iVar6 = 0;
  local_3c = GetTickCount();
  iVar3 = *(int *)(*(int *)((int)this + 4) + 0x20);
  local_34 = (*(int *)(*(int *)((int)this + 4) + 0x14) + *(int *)(iVar3 + 4)) -
             *(int *)(iVar3 + 0xc);
  local_38 = *(undefined4 *)((int)this + 0x118);
  if (*(int *)((int)this + 0x88) == 0) {
    iVar6 = FUN_662e4d90(this);
  }
  if ((iVar6 != 0) || (*(int *)((int)this + 0x88) == 0)) {
    *(undefined4 *)((int)this + 0x7c) = 1;
    *(uint *)((int)this + 0x80) = param_1;
    *param_2 = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(uint *)((int)this + 0x80) = param_1;
  local_c = 0xffffffff;
  local_20 = 0;
  if (*(short *)((int)this + 0x6e) != 0) {
    iVar3 = 0;
    local_8 = 0;
    local_18 = (int *)0x0;
    do {
      uVar8 = local_20;
      uVar1 = 0xffffffff;
      local_14 = 0;
      local_1c = -1;
      *(undefined4 *)(iVar3 + 6 + *(int *)((int)this + 0x122)) = 0xffffffff;
      *(undefined4 *)(iVar3 + 10 + *(int *)((int)this + 0x122)) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x1d + *(int *)((int)this + 0x122)) = 0;
      *(undefined4 *)(iVar3 + 0x25 + *(int *)((int)this + 0x122)) = 0;
      *(undefined4 *)(iVar3 + 0x19 + *(int *)((int)this + 0x122)) = 0;
      *(undefined1 *)(iVar3 + 0x14 + *(int *)((int)this + 0x122)) = 0;
      *(undefined4 *)(iVar3 + 0x35 + *(int *)((int)this + 0x122)) = 0;
      *(undefined4 *)(iVar3 + 0x39 + *(int *)((int)this + 0x122)) = 0;
      if (*(int *)(*(int *)((int)this + 0x74) + 10 + (int)local_18) == 0) {
        iVar7 = 0;
        iVar6 = 0;
        iVar3 = 0;
        local_28 = 0;
        local_2c = 0;
        local_20 = 0;
        if (*(ushort *)((int)this + 0x6e) == 0) goto LAB_662e9e65;
        local_18 = *(int **)((int)this + 0xf0);
        goto LAB_662e9e2f;
      }
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x70) + local_8);
      local_28 = puVar4[1];
      if (0 < local_28) {
        local_10 = (int *)*puVar4;
        iVar6 = 0;
        do {
          iVar7 = iVar6;
          local_2c = *local_10;
          uVar8 = *(uint *)(local_2c + 2);
          if (param_1 < uVar8) {
            if (local_14 != 0) goto LAB_662e9d3a;
            *(undefined4 *)(iVar3 + 0x19 + *(int *)((int)this + 0x122)) = 1;
            *(undefined4 *)(iVar3 + 10 + *(int *)((int)this + 0x122)) =
                 *(undefined4 *)(local_2c + 6);
            *(undefined4 *)(iVar3 + 6 + *(int *)((int)this + 0x122)) = *(undefined4 *)(local_2c + 2)
            ;
            *(undefined4 *)(iVar3 + 0xe + *(int *)((int)this + 0x122)) =
                 *(undefined4 *)(local_2c + 10);
            *(undefined4 *)(iVar3 + 0x2d + *(int *)((int)this + 0x122)) =
                 *(undefined4 *)(local_2c + 10);
            *(undefined4 *)(iVar3 + 0x1d + *(int *)((int)this + 0x122)) =
                 *(undefined4 *)(local_2c + 6);
            *(undefined4 *)(iVar3 + 0x25 + *(int *)((int)this + 0x122)) =
                 *(undefined4 *)(local_2c + 2);
            break;
          }
          if (uVar1 <= param_1 - uVar8) break;
          uVar1 = (int)(uVar8 - param_1) >> 0x1f;
          uVar1 = (uVar8 - param_1 ^ uVar1) - uVar1;
          local_10 = local_10 + 1;
          local_14 = 1;
          iVar6 = iVar7 + 1;
          local_1c = iVar7;
        } while (iVar7 + 1 < local_28);
      }
      if (local_14 != 0) {
LAB_662e9d3a:
        iVar6 = *(int *)(*(int *)(local_8 + *(int *)((int)this + 0x70)) + local_1c * 4);
        *(undefined4 *)(iVar3 + 0x2d + *(int *)((int)this + 0x122)) = *(undefined4 *)(iVar6 + 10);
        *(undefined4 *)(iVar3 + 0x1d + *(int *)((int)this + 0x122)) = *(undefined4 *)(iVar6 + 6);
        *(undefined4 *)(iVar3 + 0x25 + *(int *)((int)this + 0x122)) = *(undefined4 *)(iVar6 + 2);
        iVar6 = iVar3 + *(int *)((int)this + 0x122);
        uVar8 = *(uint *)(iVar3 + 0x1d + *(int *)((int)this + 0x122));
        if (uVar8 < local_c) {
          *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(iVar6 + 0x2d);
          local_c = uVar8;
        }
        if (*(uint *)(iVar6 + 0x25) < *(uint *)(iVar6 + 6)) {
          *(undefined4 *)(iVar6 + 0x19) = 1;
          iVar6 = *(int *)((int)this + 0x122) + iVar3;
          *(undefined4 *)(iVar6 + 6) = *(undefined4 *)(iVar6 + 0x25);
          iVar6 = *(int *)((int)this + 0x122) + iVar3;
          *(undefined4 *)(iVar6 + 10) = *(undefined4 *)(iVar6 + 0x1d);
          iVar6 = *(int *)((int)this + 0x122) + iVar3;
          *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(iVar6 + 0x2d);
        }
      }
      local_8 = local_8 + 0x10;
      local_20 = local_20 + 1;
      local_18 = local_18 + 5;
      iVar3 = iVar3 + 0x3d;
    } while ((int)local_20 < (int)(uint)*(ushort *)((int)this + 0x6e));
  }
  goto LAB_662e9e96;
  while( true ) {
    iVar7 = iVar7 + 1;
    local_18 = local_18 + 1;
    if ((int)(uint)*(ushort *)((int)this + 0x6e) <= iVar7) break;
LAB_662e9e2f:
    if (*(short *)(uVar8 * 0x3d + *(int *)((int)this + 0x122)) == *(short *)(*local_18 + 10)) {
      iVar3 = *(int *)(*(int *)((int)this + 0xf0) + iVar7 * 4);
      local_20 = *(int *)(iVar3 + 0x10);
      iVar6 = *(int *)(iVar3 + 0x24);
      iVar3 = *(int *)(iVar3 + 0x20);
      goto LAB_662e9e65;
    }
  }
  iVar3 = 0;
  iVar6 = 0;
LAB_662e9e65:
  if (((iVar6 == 0) && (iVar3 == 0)) && (local_20 == 0)) {
    *(undefined4 *)(uVar8 * 0x3d + 0x39 + *(int *)((int)this + 0x122)) = 1;
  }
  else {
    local_c = 0xffffffff;
  }
LAB_662e9e96:
  uVar8 = local_c;
  if (local_c == 0xffffffff) {
    uVar8 = *(uint *)((int)this + 299);
    *(undefined4 *)((int)this + 0x118) = 0;
  }
  (**(code **)(**(int **)((int)this + 4) + 8))(uVar8,0);
  local_8 = 0;
  FUN_662e2a70(&local_48);
  local_30 = 0;
  local_24 = 0;
  do {
    local_20 = FUN_662e7b40(this,&local_48,&local_30,&local_24);
    iVar6 = -1;
    iVar3 = iVar6;
    if (local_20 == 0) {
LAB_662e9f9c:
      if (local_20 != 0) {
        if ((local_40 & 2) == 2) {
          iVar3 = iVar3 * 0x3d;
          iVar6 = *(int *)((int)this + 0x122) + iVar3;
          if ((*(uint *)(iVar6 + 6) < local_48) || (*(int *)(iVar6 + 0x19) == 0)) {
            *(undefined4 *)(iVar6 + 0x19) = 1;
            *(int *)(*(int *)((int)this + 0x122) + 10 + iVar3) = local_24;
            *(uint *)(*(int *)((int)this + 0x122) + 6 + iVar3) = local_48;
            *(int *)(*(int *)((int)this + 0x122) + 0xe + iVar3) = *(int *)((int)this + 0x118) + -1;
          }
        }
        else if (local_20 == 0) goto LAB_662ea015;
        local_8 = 0;
        if (local_20 != 0) {
          (**(code **)(*(int *)this + 0x14))(local_20);
          goto LAB_662ea02b;
        }
      }
LAB_662ea015:
      if (*(int *)((int)this + 0x84) == 0) {
        *(undefined4 *)((int)this + 0x7c) = 1;
      }
      local_8 = 1;
    }
    else {
      iVar7 = 0;
      *(int *)((int)this + 0x118) = *(int *)((int)this + 0x118) + 1;
      if (*(ushort *)((int)this + 0x6e) != 0) {
        psVar2 = *(short **)((int)this + 0x122);
        do {
          iVar3 = iVar7;
          if (*psVar2 == local_44) break;
          iVar7 = iVar7 + 1;
          psVar2 = (short *)((int)psVar2 + 0x3d);
          iVar3 = iVar6;
        } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x6e));
      }
      if (iVar3 < 0) {
        return 0x80040082;
      }
      piVar5 = (int *)(iVar3 * 0x3d + 0x39 + *(int *)((int)this + 0x122));
      if (*piVar5 == 0) {
        if (local_48 <= param_1) goto LAB_662e9f9c;
        *piVar5 = 1;
        uVar8 = 0;
        local_8 = 1;
        if (*(ushort *)((int)this + 0x6e) != 0) {
          piVar5 = (int *)(*(int *)((int)this + 0x122) + 0x39);
          do {
            if (*piVar5 == 0) {
              local_8 = 0;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar5 = (int *)((int)piVar5 + 0x3d);
          } while (uVar8 < *(ushort *)((int)this + 0x6e));
        }
        (**(code **)(*(int *)this + 0x14))(local_20);
        if (local_8 != 0) break;
      }
      else {
        (**(code **)(*(int *)this + 0x14))(local_20);
      }
    }
LAB_662ea02b:
  } while (local_8 == 0);
  iVar3 = -1;
  iVar6 = 0;
  local_20 = 0xffffffff;
  if (*(short *)((int)this + 0x6e) != 0) {
    local_18 = (int *)0x0;
    do {
      if (*(int *)((int)this + 0x7c) != 0) break;
      iVar7 = *(int *)((int)this + 0x122);
      if (*(int *)((int)local_18 + iVar7 + 0x19) == 0) {
        *(undefined1 *)((int)local_18 + iVar7 + 0x14) = 0;
      }
      else {
        uVar8 = *(uint *)((int)local_18 + iVar7 + 10);
        if (uVar8 < local_20) {
          iVar3 = iVar6;
          local_20 = uVar8;
        }
        *(undefined1 *)((int)local_18 + iVar7 + 0x14) = 1;
      }
      iVar6 = iVar6 + 1;
      local_18 = (int *)((int)local_18 + 0x3d);
    } while (iVar6 < (int)(uint)*(ushort *)((int)this + 0x6e));
  }
  if (iVar3 < 0) {
    (**(code **)(**(int **)((int)this + 4) + 8))(local_34,0);
    *(undefined4 *)((int)this + 0x118) = local_38;
    *param_2 = param_1;
  }
  else {
    (**(code **)(**(int **)((int)this + 4) + 8))
              (*(undefined4 *)(*(int *)((int)this + 0x122) + 10 + iVar3 * 0x3d),0);
    *param_2 = param_1;
    *(undefined4 *)((int)this + 0x118) =
         *(undefined4 *)(*(int *)((int)this + 0x122) + 0xe + iVar3 * 0x3d);
  }
  GetTickCount();
  FUN_662ea140(s_Seek_Time___lu_with_reqtime____l_6630b3c0);
  return 0;
}


