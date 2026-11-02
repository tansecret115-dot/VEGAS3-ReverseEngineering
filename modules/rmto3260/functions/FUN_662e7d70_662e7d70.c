/* Module: rmto3260.dll
   Function: FUN_662e7d70
   Address: 662e7d70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662e7d70(void *this,uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  do {
    local_14 = 1;
    if (*(int *)((int)this + 0x88) == 0) {
      local_c = FUN_662e4d90(this);
    }
    if ((local_c != 0) || (*(int *)((int)this + 0x88) == 0)) {
      return 0;
    }
    local_8 = 0;
    uVar4 = FUN_662e7b40(this,param_1,param_2,&local_8);
    if (uVar4 == 0) {
      return 0;
    }
    iVar5 = *(int *)((int)this + 0x118) + 1;
    *(int *)((int)this + 0x118) = iVar5;
    if ((*(int *)((int)this + 0x84) == 0) && (*(int *)((int)this + 0x7c) != 0)) {
      local_c = 0;
      do {
        if (local_c != 0) break;
        (**(code **)(*(int *)this + 0x68))(param_1,local_8,iVar5 + -1,*param_2);
        if (*(uint *)((int)this + 0x80) < *param_1) {
          iVar5 = 0;
          local_c = 1;
          local_10 = 0;
          if (*(short *)((int)this + 0x6e) != 0) {
            do {
              if (*(short *)(iVar5 + *(int *)((int)this + 0x122)) == (short)param_1[1]) {
                *(undefined4 *)(iVar5 + *(int *)((int)this + 0x122) + 0x35) = 1;
              }
              if (*(int *)(iVar5 + 0x35 + *(int *)((int)this + 0x122)) == 0) {
                local_c = 0;
              }
              local_10 = local_10 + 1;
              iVar5 = iVar5 + 0x3d;
            } while (local_10 < (int)(uint)*(ushort *)((int)this + 0x6e));
          }
        }
        piVar1 = *(int **)((int)this + 4);
        if (uVar4 != 0) {
          uVar2 = *(uint *)(piVar1[8] + 0xc);
          if ((uVar2 == uVar4) || ((uVar2 < uVar4 && (uVar4 < (uint)piVar1[6])))) {
            piVar1 = (int *)(piVar1[8] + 0x14);
            *piVar1 = *piVar1 + -1;
          }
          else {
            (**(code **)(*piVar1 + 0x28))(uVar4);
          }
        }
        uVar4 = 0;
        if (local_c == 0) {
          uVar4 = FUN_662e7b40(this,param_1,param_2,&local_8);
        }
        iVar5 = *(int *)((int)this + 0x118) + 1;
        *(int *)((int)this + 0x118) = iVar5;
      } while (uVar4 != 0);
      local_c = (**(code **)(*(int *)this + 0x18))(*(undefined4 *)((int)this + 0x80),local_18);
      if (((local_c != 0) || (*(int *)((int)this + 0x7c) != 0)) ||
         (uVar4 = FUN_662e7b40(this,param_1,param_2,&local_8), uVar4 == 0)) {
        *(undefined4 *)((int)this + 0x24) = 0x40040;
        return 0;
      }
    }
    if (*(int *)((int)this + 0x84) == 0) {
      local_c = (**(code **)(*(int *)this + 0x68))
                          (param_1,local_8,*(int *)((int)this + 0x118) + -1,*param_2);
    }
    if (local_c != 0) {
      piVar1 = *(int **)((int)this + 4);
      if (uVar4 == 0) {
        return 0;
      }
      iVar5 = piVar1[8];
      if ((*(uint *)(iVar5 + 0xc) != uVar4) &&
         ((uVar4 <= *(uint *)(iVar5 + 0xc) || ((uint)piVar1[6] <= uVar4)))) {
        (**(code **)(*piVar1 + 0x28))(uVar4);
        return 0;
      }
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + -1;
      return 0;
    }
    iVar5 = 0;
    *(uint *)((int)this + 0x126) = *param_1;
    if (*(ushort *)((int)this + 0x6e) != 0) {
      psVar6 = *(short **)((int)this + 0x122);
      do {
        if (*psVar6 == (short)param_1[1]) {
          iVar5 = iVar5 * 0x3d;
          iVar3 = *(int *)((int)this + 0x122);
          if (*(char *)(iVar3 + 0x14 + iVar5) != '\0') {
            if (*(int *)(iVar3 + 10 + iVar5) == local_8) {
              *(undefined1 *)(iVar3 + 0x14 + iVar5) = 0;
            }
            else {
              piVar1 = *(int **)((int)this + 4);
              if (uVar4 != 0) {
                uVar2 = *(uint *)(piVar1[8] + 0xc);
                if ((uVar2 != uVar4) && ((uVar4 <= uVar2 || ((uint)piVar1[6] <= uVar4)))) {
                  (**(code **)(*piVar1 + 0x28))(uVar4);
                  uVar4 = 0;
                  local_14 = 0;
                  goto LAB_662e7fdb;
                }
                piVar1 = (int *)(piVar1[8] + 0x14);
                *piVar1 = *piVar1 + -1;
              }
              uVar4 = 0;
              local_14 = 0;
            }
          }
LAB_662e7fdb:
          if (*(char *)(iVar5 + 0x14 + *(int *)((int)this + 0x122)) == '\0') {
            *(undefined2 *)((int)param_1 + 6) =
                 *(undefined2 *)(iVar5 + *(int *)((int)this + 0x122) + 0x12);
            psVar6 = (short *)(iVar5 + 0x12 + *(int *)((int)this + 0x122));
            *psVar6 = *psVar6 + 1;
            *(uint *)(iVar5 + 2 + *(int *)((int)this + 0x122)) = *param_1;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        psVar6 = (short *)((int)psVar6 + 0x3d);
      } while (iVar5 < (int)(uint)*(ushort *)((int)this + 0x6e));
    }
    if (local_14 != 0) {
      return uVar4;
    }
  } while( true );
}


