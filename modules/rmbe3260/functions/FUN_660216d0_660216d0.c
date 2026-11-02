/* Module: rmbe3260.dll
   Function: FUN_660216d0
   Address: 660216d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_660216d0(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 local_58;
  undefined4 local_54;
  int local_50 [4];
  char *local_40 [3];
  char *local_34 [3];
  undefined1 local_28 [4];
  int local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  FUN_6605b650(local_34);
  local_8 = (int *)0x0;
  iVar1 = (**(code **)**(undefined4 **)((int)param_1 + 0x7c))
                    (*(undefined4 **)((int)param_1 + 0x7c),&DAT_66065898,&local_8);
  if (-1 < iVar1) {
    FUN_6605b650((undefined4 *)&local_64);
    local_18 = (int *)0x0;
    (**(code **)(*local_8 + 0x18))(local_8,&local_18);
    local_20 = (int *)0x0;
    if (local_18 != (int *)0x0) {
      piVar2 = (int *)0x0;
      do {
        local_1c = 0;
        (**(code **)(*local_8 + 0x1c))(local_8,piVar2,&local_1c);
        local_c = (int *)0x0;
        iVar1 = (**(code **)(**(int **)((int)param_1 + 0x1da) + 0xc))
                          (*(int **)((int)param_1 + 0x1da),local_1c,&local_c);
        if (iVar1 < 0) break;
        FUN_6605b650(local_50);
        FUN_6605b650(local_40);
        uVar5 = 0x100;
        iVar1 = *local_c;
        iVar3 = FUN_6605bc10(local_40,0xff);
        (**(code **)(iVar1 + 0x18))(local_c,iVar3,uVar5);
        FUN_6605bc90(local_40,-1);
        (**(code **)(*local_c + 0x1c))(local_c,local_28);
        uVar5 = 0xff;
        iVar1 = FUN_6605bc10(local_34,0xff);
        FUN_6602e290(0x5dd003f,iVar1,uVar5);
        FUN_6605bc90(local_34,-1);
        ftol();
        FUN_6605bfd0(local_50,local_34[0]);
        FUN_6605bbe0(&local_64,local_50);
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
        FUN_6605b770((int *)local_40);
        FUN_6605b770(local_50);
        if (*(int *)((int)param_1 + 0xc0) == 0) break;
        local_20 = (int *)((int)local_20 + 1);
        piVar2 = (int *)((uint)local_20 & 0xffff);
      } while (piVar2 < local_18);
    }
    iVar1 = FUN_66021bc0(param_1,0x6606dd84,(char *)CONCAT22(uStack_62,local_64));
    FUN_6605b770((int *)&local_64);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_8 + 0x20))(local_8,&local_10);
      if ((iVar1 < 0) || (*(int *)((int)param_1 + 0xa8) == 0)) {
        uVar4 = 0x2c;
      }
      else {
        switch(local_10) {
        default:
          uVar4 = 0x15;
          break;
        case 1:
          uVar4 = 0x16;
          break;
        case 2:
          uVar4 = 0x17;
          break;
        case 3:
          uVar4 = 0x18;
        }
      }
      uVar5 = 0xff;
      iVar3 = FUN_6605bc10(local_34,0xff);
      FUN_6602e290(uVar4 | 0x5dd0000,iVar3,uVar5);
      FUN_6605bc90(local_34,-1);
      if (-1 < iVar1) {
        iVar1 = FUN_66021bc0(param_1,0x6606dd74,local_34[0]);
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_8 + 0x28))(local_8,&local_10);
        if ((iVar1 < 0) || (*(int *)((int)param_1 + 0xac) == 0)) {
          uVar4 = 0x2d;
        }
        else {
          switch(local_10) {
          default:
            uVar4 = 0x33;
            break;
          case 1:
            uVar4 = 0x2a;
            break;
          case 2:
            uVar4 = 0x29;
            break;
          case 3:
            uVar4 = 0x2b;
          }
        }
        uVar5 = 0xff;
        iVar3 = FUN_6605bc10(local_34,0xff);
        FUN_6602e290(uVar4 | 0x5dd0000,iVar3,uVar5);
        FUN_6605bc90(local_34,-1);
        if (-1 < iVar1) {
          iVar1 = FUN_66021bc0(param_1,0x6606dd64,local_34[0]);
        }
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  iVar3 = FUN_66052ce0(&local_54);
  local_64 = (undefined2)*(undefined4 *)(iVar3 + 4);
  uStack_62 = (undefined2)((uint)*(undefined4 *)(iVar3 + 4) >> 0x10);
  local_60 = *(undefined4 *)(iVar3 + 8);
  local_5c = (undefined2)*(undefined4 *)(iVar3 + 0xc);
  uStack_5a = (undefined2)((uint)*(undefined4 *)(iVar3 + 0xc) >> 0x10);
  local_58 = *(undefined2 *)(iVar3 + 0x10);
  FUN_6605bfd0(local_34,s__d__d__d__d___2d___2d_6606dd4c);
  if ((-1 < iVar1) && (iVar1 = FUN_66021bc0(param_1,0x6606dd3c,local_34[0]), -1 < iVar1)) {
    iVar1 = FUN_66021bc0(param_1,0x6606dd28,local_34[0]);
  }
  local_14 = (int *)0x0;
  iVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x1d6))
                    (*(undefined4 **)((int)param_1 + 0x1d6),&DAT_66064f88,&local_14);
  if ((-1 < iVar3) &&
     ((**(code **)(*local_14 + 0x10))(local_14,s_Clock_Start_Time_6606dd14), local_14 != (int *)0x0)
     ) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  FUN_66039200(*(int **)((int)param_1 + 0x1d6),1);
  local_24 = 1;
  iVar3 = (**(code **)(**(int **)((int)param_1 + 0x78) + 0x14))
                    (*(int **)((int)param_1 + 0x78),&local_24);
  if ((-1 < iVar3) && (local_24 == 0)) {
    local_18 = (int *)0x0;
    iVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x1d6))
                      (*(undefined4 **)((int)param_1 + 0x1d6),&DAT_66064f88,&local_18);
    if ((-1 < iVar3) &&
       ((**(code **)(*local_18 + 0xc))(local_18,s_List_Broadcast_6606db88), local_18 != (int *)0x0))
    {
      (**(code **)(*local_18 + 8))(local_18);
    }
  }
  if (-1 < iVar1) {
    local_20 = (int *)0x0;
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x1d6) + 0x10))
                      (*(int **)((int)param_1 + 0x1d6),s_Indexable_6606c20c,local_28);
    if (iVar3 < 0) {
      iVar1 = (**(code **)(**(int **)((int)param_1 + 0x1d6) + 0xc))
                        (*(int **)((int)param_1 + 0x1d6),s_Indexable_6606c20c,1);
    }
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x1d6) + 0x30))
                      (*(int **)((int)param_1 + 0x1d6),s_Generated_By_6606c268,&local_20);
    if (iVar3 < 0) {
      FUN_6605b7e0(local_40,s_RealMedia_Build_Engine_6606dcfc);
      FUN_6605bba0(local_40,s_6_0_11_201_6606c3b8);
      FUN_6605bba0(local_40,&DAT_6606c518);
      FUN_6605bba0(local_40,s_Windows_6606dcf4);
      iVar1 = FUN_66021bc0(param_1,0x6606c268,local_40[0]);
      FUN_6605b770((int *)local_40);
      FUN_6605b770((int *)local_34);
      return iVar1;
    }
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
  }
  FUN_6605b770((int *)local_34);
  return iVar1;
}


