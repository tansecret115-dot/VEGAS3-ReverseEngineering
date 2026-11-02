/* Module: erv23260.dll
   Function: FUN_6380e5b0
   Address: 6380e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380e5b0(void *this,int *param_1)

{
  bool bVar1;
  byte **ppbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  byte **ppbVar7;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  byte *local_c;
  uint *local_8;
  
  local_c = (byte *)0x0;
  ppbVar7 = (byte **)(*(int *)((int)this + 8) +
                     (*(int *)((int)this + 0x124) * *param_1 + param_1[1]) * 0x7c);
  if (ppbVar7 != (byte **)0x0) {
    local_10 = 0;
    do {
      iVar3 = local_10;
      pbVar5 = ppbVar7[0x16];
      if (pbVar5 != (byte *)0x0) {
        local_c = *(byte **)((int)this + 0xcc);
      }
      else {
        *(undefined4 *)(local_10 + *(int *)((int)this + 0x248)) = 0;
      }
      local_14 = (uint)(pbVar5 == (byte *)0x0);
      switch(ppbVar7[0x16]) {
      default:
        goto switchD_6380e627_caseD_0;
      case (byte *)0x2:
      case (byte *)0x6:
        local_c = *(byte **)((int)this + 0xcc);
        break;
      case (byte *)0x4:
        local_c = *(byte **)((int)this + 0xcc);
        break;
      case (byte *)0x7:
      case (byte *)0xa:
        local_c = *(byte **)((int)this + 0xd0);
      }
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
switchD_6380e627_caseD_0:
      if (local_14 == 0) {
        FUN_6380f340(this,(int *)ppbVar7);
      }
      local_24 = ppbVar7[0x1c];
      local_28 = ppbVar7[0x1d];
      if (*(int *)(iVar3 + *(int *)((int)this + 0x248)) == 0) {
        local_8 = *(uint **)((int)this + 0xd4);
        pbVar5 = (byte *)0x0;
        do {
          uVar4 = (uint)((byte *)0x3 < pbVar5);
          if (ppbVar7[0x16] == (byte *)0x9) {
            FUN_6380fcd0(this,(int)local_8,(int *)ppbVar7,(uint)pbVar5,uVar4,
                         *(int *)((int)this + 200),*(int *)((int)this + 0xcc),
                         *(int *)((int)this + 0xd0));
          }
          else if (((*(int *)((int)this + 0x164) == 0) || (uVar4 != 0)) ||
                  (ppbVar7[0x16] == (byte *)0x0)) {
            FUN_6380f490(this,local_8,(int *)ppbVar7,(uint)pbVar5,uVar4,*(int *)((int)this + 200),
                         local_c);
          }
          else {
            FUN_6380f980(this,(int)local_8,ppbVar7,pbVar5,*(int *)((int)this + 200),(int)local_c);
          }
          FUN_638175c0((int *)local_8,8);
          local_8 = local_8 + 0x40;
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 < (byte *)0x6);
        local_20 = (byte *)0x0;
        if (*(int *)((int)this + 0x178) != 0) {
          FUN_63816940(this,(int *)ppbVar7,*(int **)((int)this + 0xd4),(int *)&local_20);
        }
        local_8 = *(uint **)((int)this + 0xd4);
        local_18 = *(int **)((int)this + 0xdc);
        piVar6 = *(int **)((int)this + 0xd8);
        local_1c = 0;
        do {
          FUN_638109c0(local_8,(int)piVar6,(int)local_20);
          FUN_63810bc0(this,(uint)*(byte *)(ppbVar7 + 0x1b),piVar6,local_18,local_14,
                       (uint)(3 < local_1c),*(int *)((int)this + 400));
          local_8 = local_8 + 0x40;
          piVar6 = piVar6 + 0x40;
          local_18 = local_18 + 0x40;
          local_1c = local_1c + 1;
        } while (local_1c < 6);
        uVar4 = FUN_63810d20(this,*(int *)((int)this + 0xd8),*(int *)((int)this + 0xdc),
                             (int *)&local_24,(int *)&local_28,local_14);
      }
      else {
        uVar4 = 0;
      }
      bVar1 = false;
      *(char *)((int)ppbVar7 + 0x66) = (char)uVar4;
      if ((ppbVar7[0x16] == (byte *)0x0) || ((char)uVar4 != '\0')) {
LAB_6380e815:
        bVar1 = true;
      }
      else {
        iVar3 = 0;
        ppbVar2 = ppbVar7 + 3;
        do {
          if ((ppbVar2[-1] != (byte *)0x0) || (*ppbVar2 != (byte *)0x0)) goto LAB_6380e815;
          iVar3 = iVar3 + 1;
          ppbVar2 = ppbVar2 + 2;
        } while (iVar3 < 4);
      }
      ppbVar7[0x1a] = (byte *)(uint)!bVar1;
      ppbVar7[0x17] = local_20;
      ppbVar7 = (byte **)ppbVar7[0x1e];
      if (ppbVar7 != (byte **)0x0) {
        ppbVar7[0x1c] = local_24;
        ppbVar7[0x1d] = local_28;
      }
      if (*(int *)((int)this + 0x30) == 0) {
        if ((int)uVar4 < 1) {
          uVar4 = *(uint *)(*(int *)((int)this + 0x24c) + local_10);
          if (*(uint *)((int)this + 0x38) < uVar4) {
            *(uint *)((int)this + 0x38) = uVar4;
          }
        }
        else {
          uVar4 = *(uint *)(*(int *)((int)this + 0x24c) + local_10);
          if (uVar4 < *(uint *)((int)this + 0x34)) {
            *(uint *)((int)this + 0x34) = uVar4;
          }
        }
      }
      local_10 = local_10 + 4;
    } while (ppbVar7 != (byte **)0x0);
  }
  if ((1 < *(uint *)((int)this + 0x3c)) && (*(int *)((int)this + 0x30) == 0)) {
    if (*(int *)((int)this + 0x34) == 0x7fffffff) {
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    uVar4 = (uint)*(byte *)((int)this + 0x1d4) * 0x32;
    iVar3 = FUN_6380dad0((int)this);
    if (iVar3 <= (int)uVar4) {
      uVar4 = FUN_6380dad0((int)this);
    }
    *(uint *)((int)this + 0x30) = uVar4;
    if (400 < uVar4) {
      uVar4 = 400;
    }
    *(uint *)((int)this + 0x30) = uVar4;
    if (*(byte *)((int)this + 0x1d4) < 7) {
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    else if (*(byte *)((int)this + 0x1d4) < 0xb) {
      *(int *)((int)this + 0x30) = (int)uVar4 / 2;
    }
  }
  if (*(int *)((int)this + 0x158) != 0) {
    (**(code **)(*(int *)this + 0x28))(param_1);
  }
  return;
}


