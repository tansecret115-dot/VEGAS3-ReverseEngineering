/* Module: vegas30.exe
   Function: FUN_005bfba0
   Address: 005bfba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bfba0(int param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int *piVar8;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30 [4];
  undefined1 local_20 [32];
  
  if ((*(uint *)(param_1 + 0x10) & 0x800000) != 0) {
    if (param_4 == (int *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = *param_4;
    }
    if ((local_7c + -1 < 0) || (puVar4 = (uint *)param_4[2], puVar4 == (uint *)0x0)) {
      local_30[0] = 0;
      local_30[1] = 0;
      local_30[2] = 0xffffffff;
      local_30[3] = 0x7fffffff;
      puVar4 = local_30;
      local_7c = 1;
    }
    local_74 = param_1;
    local_5c = FUN_005be610(0,local_20);
    local_70 = 0;
    if (0 < local_5c) {
      do {
        iVar3 = local_70;
        iVar1 = FUN_005be910(local_70,local_20);
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            iVar2 = FUN_005bec40(iVar3,iVar5,local_20,0,0,&local_68,0,&local_48);
            if (iVar2 != 0) {
              if (local_68 == 0) {
                piVar8 = &local_6c;
                local_6c = 0;
              }
              else {
                bVar7 = CARRY4(local_48,param_2);
                local_48 = local_48 + param_2;
                local_44 = local_44 + param_3 + (uint)bVar7;
                piVar8 = (int *)0x0;
              }
              FUN_005bee80(iVar3,iVar5,local_20,0,&local_48,0,piVar8,0);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        if (0 < local_7c) {
          local_6c = local_7c;
          do {
            uVar6 = *puVar4 + param_2;
            iVar5 = puVar4[1] + param_3 + (uint)CARRY4(*puVar4,param_2);
            local_58 = puVar4[2] + uVar6;
            local_54 = puVar4[3] + iVar5 + (uint)CARRY4(puVar4[2],uVar6);
            local_78 = 0;
            local_50 = uVar6;
            local_4c = iVar5;
            if (0 < iVar1) {
              do {
                iVar2 = FUN_005bec40(iVar3,local_78,local_20,0,&local_38,&local_64,0,0);
                if ((((iVar2 != 0) && (local_64 != 0)) && (iVar3 = local_70, iVar5 <= local_34)) &&
                   ((iVar5 < local_34 || (uVar6 <= local_38)))) {
                  iVar2 = puVar4[3] + iVar5 + (uint)CARRY4(puVar4[2],uVar6);
                  if ((local_34 <= iVar2) && ((local_34 < iVar2 || (local_38 < puVar4[2] + uVar6))))
                  {
                    if ((local_34 <= local_54) && ((local_34 < local_54 || (local_38 < local_58))))
                    {
                      local_58 = local_38;
                      local_54 = local_34;
                    }
                    if ((local_4c <= local_34) && ((local_4c < local_34 || (local_50 < local_38))))
                    {
                      local_50 = local_38;
                      local_4c = local_34;
                    }
                  }
                }
                local_78 = local_78 + 1;
              } while (local_78 < iVar1);
            }
            if ((local_54 <= local_4c) &&
               (((local_54 < local_4c || (local_58 <= local_50)) && (iVar5 = 0, 0 < iVar1)))) {
              do {
                iVar2 = FUN_005bec40(iVar3,iVar5,local_20,0,0,&local_60,0,&local_40);
                if (((((iVar2 != 0) && (local_60 == 0)) && (local_54 <= local_3c)) &&
                    ((local_54 < local_3c || (local_58 <= local_40)))) &&
                   ((local_3c <= local_4c && ((local_3c < local_4c || (local_40 <= local_50)))))) {
                  local_78 = 1;
                  local_40 = 0xffffffff;
                  local_3c = 0x7fffffff;
                  FUN_005bee80(iVar3,iVar5,local_20,0,&local_40,0,&local_78,0);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar1);
            }
            local_6c = local_6c + -1;
          } while (local_6c != 0);
          local_6c = 0;
        }
        FUN_005bf6b0(iVar3,local_20,0);
        local_70 = iVar3 + 1;
      } while (local_70 < local_5c);
    }
  }
  return;
}


