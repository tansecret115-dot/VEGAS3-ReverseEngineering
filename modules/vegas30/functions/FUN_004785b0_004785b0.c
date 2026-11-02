/* Module: vegas30.exe
   Function: FUN_004785b0
   Address: 004785b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004785b0(int param_1,int param_2,HDC param_3,int param_4,int param_5,int *param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int y;
  HPEN h;
  int iVar2;
  int iVar3;
  HGDIOBJ pvVar4;
  int iVar5;
  COLORREF color;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int *local_a0;
  HGDIOBJ local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  POINT local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  POINT local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  POINT local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_7 == 0) {
    if (param_8 == 0) {
      color = (&DAT_0063e314)[param_4];
    }
    else {
      color = (&DAT_0064bf48)[param_4];
    }
  }
  else {
    color = (&DAT_0064bf58)[param_4];
  }
  local_98 = param_4 * 4;
  local_88 = -(uint)(param_8 != 0);
  local_94 = **(uint **)(param_2 + 0x30);
  if (local_94 != 0) {
    h = CreatePen(0,param_5,color);
    local_9c = SelectObject(param_3,h);
    FUN_00478b70(&DAT_0064bf68,param_4,color);
    iVar3 = *(int *)(*(int *)(param_2 + 0x30) + 8);
    FUN_00479160(param_1,param_2,0,&local_b0,1);
    local_ac = local_ac + local_88;
    local_a8 = 0;
    if (local_94 != 0) {
      local_a0 = (int *)(iVar3 + 0xc);
      while (y = local_ac, iVar3 = local_b0, local_b0 <= param_6[2]) {
        local_78 = local_a8 + 1;
        if (local_78 < local_94) {
          FUN_00479160(param_1,param_2,local_78,&local_b0,1);
          local_ac = local_ac + local_88;
          if (*param_6 <= local_b0) {
            MoveToEx(param_3,iVar3,y,(LPPOINT)0x0);
            iVar1 = *local_a0;
            iVar2 = local_b0;
            iVar5 = local_ac;
            if (iVar1 == 1) goto LAB_0047897b;
            if (iVar1 == 2) {
              local_28 = local_b0;
              local_30 = (iVar3 + local_b0 * 2) / 3;
              local_2c = local_ac;
              local_38.x = (local_b0 + iVar3 * 2) / 3;
              local_24 = local_ac;
              local_38.y = (y + local_ac * 2) / 3;
              PolyBezierTo(param_3,&local_38,3);
            }
            else if (iVar1 == -2) {
              local_58 = local_b0;
              local_68.y = y;
              local_68.x = (local_b0 + iVar3 * 2) / 3;
              local_60 = (iVar3 + local_b0 * 2) / 3;
              local_54 = local_ac;
              local_5c = (local_ac + y * 2) / 3;
              PolyBezierTo(param_3,&local_68,3);
            }
            else if (iVar1 == 4) {
              local_40 = local_b0;
              local_50.y = y;
              local_50.x = (local_b0 - iVar3) / 3 + iVar3;
              local_48 = (iVar3 - local_b0) / 3 + local_b0;
              local_44 = local_ac;
              local_3c = local_ac;
              PolyBezierTo(param_3,&local_50,3);
            }
            else if (iVar1 == -4) {
              local_90 = local_b0;
              local_8c = local_ac;
              MoveToEx(param_3,iVar3,y,(LPPOINT)0x0);
              local_a4 = local_90 - iVar3;
              local_70 = ftol();
              local_a4 = local_8c - y;
              local_14 = ftol();
              local_20.y = local_14 + y;
              local_20.x = local_70 + iVar3;
              local_10 = local_90;
              local_18 = local_90 - local_70;
              local_14 = local_8c - local_14;
              local_c = local_8c;
              PolyBezierTo(param_3,&local_20,3);
            }
            else {
              pvVar4 = GetStockObject(7);
              local_9c = SelectObject(param_3,pvVar4);
              LineTo(param_3,local_b0,local_ac);
              SelectObject(param_3,local_9c);
            }
            goto LAB_00478983;
          }
        }
        else {
          if (local_b0 < param_6[2]) {
            MoveToEx(param_3,local_b0,local_ac,(LPPOINT)0x0);
            iVar2 = param_6[2];
            iVar5 = y;
LAB_0047897b:
            LineTo(param_3,iVar2,iVar5);
          }
LAB_00478983:
          if (*param_6 <= iVar3 + 4) {
            iVar2 = FUN_00478b00(local_a8,param_2,param_1);
            local_7c = ((param_5 < 2) - 1 & 7) + 1 + (-(uint)(iVar2 != 0) & 0x10);
            local_74 = (uint)(param_5 < 2) + local_98 * 2;
            local_80 = (1 < param_5) + 3;
            local_a8 = (1 < param_5) + 3;
            local_84 = iVar3 - local_80;
            if (iVar3 - local_80 <= *(int *)(param_1 + 0x20)) {
              local_84 = *(int *)(param_1 + 0x20);
            }
            local_a4 = local_80 + iVar3;
            if (*(int *)(param_1 + 0x28) <= local_80 + iVar3) {
              local_a4 = *(int *)(param_1 + 0x28);
            }
            iVar2 = y - local_a8;
            if ((int)(y - local_a8) <= *(int *)(param_1 + 0x24)) {
              iVar2 = *(int *)(param_1 + 0x24);
            }
            iVar5 = local_a8 + y;
            if (*(int *)(param_1 + 0x2c) <= (int)(local_a8 + y)) {
              iVar5 = *(int *)(param_1 + 0x2c);
            }
            BitBlt(param_3,local_84,iVar2,local_a4 - local_84,iVar5 - iVar2,DAT_0064bf68,
                   (local_84 - iVar3) + local_80 + local_74 + DAT_0064bf78,
                   (iVar2 - y) + local_a8 + local_7c + DAT_0064bf7c,0xcc0020);
            iVar3 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) +
                    (uint)CARRY4(*(uint *)(param_1 + 0x38),*(uint *)(param_1 + 0x30));
            if ((iVar3 < local_a0[-2]) ||
               ((iVar3 <= local_a0[-2] &&
                (*(uint *)(param_1 + 0x38) + *(uint *)(param_1 + 0x30) <= (uint)local_a0[-3]))))
            break;
          }
        }
        local_a8 = local_78;
        local_a0 = local_a0 + 4;
        if (local_94 <= local_78) break;
      }
    }
    pvVar4 = SelectObject(param_3,local_9c);
    DeleteObject(pvVar4);
  }
  return;
}


