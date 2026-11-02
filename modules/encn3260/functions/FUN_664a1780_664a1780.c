/* Module: encn3260.dll
   Function: FUN_664a1780
   Address: 664a1780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_664a1780(void *this,HWND param_1,UINT param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int *piVar1;
  byte bVar2;
  SHORT SVar3;
  int iVar4;
  undefined4 *puVar5;
  HDC pHVar6;
  HWND pHVar7;
  HWND hWndTo;
  void *pvVar8;
  int iVar9;
  tagPAINTSTRUCT local_8c;
  uint local_4c;
  uint local_48;
  UINT local_44;
  HWND local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  int local_28;
  HWND local_24;
  uint *local_20;
  LONG *local_1c;
  undefined4 local_18;
  int local_14;
  tagPOINT local_10;
  int local_8;
  
  iVar9 = 0;
  *param_5 = 0;
  local_2c = (int *)((int)this + 4);
  local_8 = 0;
  (**(code **)(*(int *)((int)this + 4) + 4))(local_2c);
  if (*(int *)((int)this + 0x34) != 0) {
    local_3c = param_3;
    local_44 = param_2;
    local_40 = param_1;
    local_38 = param_4;
    local_34 = 0;
    local_30 = 0;
    if (param_2 == 0x200) {
      local_10.y = param_4 >> 0x10;
      local_10.x = param_4 & 0xffff;
      FUN_664ae590(&DAT_664f0658,&local_10,*(undefined4 **)((int)this + 0x2c),
                   -(uint)(this != (void *)0x0) & (uint)local_2c,(int *)0x0);
    }
    if ((param_2 == 2) && ((*(byte *)((int)this + 0x60) & 2) != 0)) {
      *(byte *)((int)this + 0x60) = *(byte *)((int)this + 0x60) & 0xfd;
      local_44 = 0x4002;
      iVar4 = (**(code **)(**(int **)((int)this + 0x34) + 0x14))
                        (*(int **)((int)this + 0x34),&local_44);
      if (iVar4 == 0) {
        *param_5 = local_34;
        iVar9 = local_30;
      }
      else {
        local_44 = 2;
      }
    }
    iVar4 = (**(code **)(*(int *)((int)this + 0xc) + 0x18))((int)this + 0xc);
    if (((iVar4 != 0) && (DAT_664f071c != 0)) && (param_2 == 0x204)) {
      do {
        pvVar8 = this;
        this = *(void **)((int)pvVar8 + 0x4c);
      } while (*(void **)((int)pvVar8 + 0x4c) != (void *)0x0);
      if (((pvVar8 != (void *)0x0) && (*(int *)((int)pvVar8 + 0x34) != 0)) &&
         (puVar5 = (undefined4 *)(**(code **)(*(int *)((int)pvVar8 + 8) + 0x1c))((int)pvVar8 + 8),
         puVar5 != (undefined4 *)0x0)) {
        local_24 = (HWND)*puVar5;
        local_1c = (LONG *)0x0;
        local_18 = 0;
        local_14 = 0;
        local_28 = 0x102;
        local_20 = (uint *)0x1b;
        (**(code **)(**(int **)((int)pvVar8 + 0x34) + 0x14))
                  (*(int **)((int)pvVar8 + 0x34),&local_28);
      }
      (**(code **)(*local_2c + 8))(local_2c);
      return 1;
    }
    if (((local_30 == 0) && (piVar1 = *(int **)((int)this + 0x34), piVar1 != (int *)0x0)) &&
       (iVar4 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_44), iVar4 == 0)) {
      *param_5 = local_34;
      iVar9 = local_30;
    }
    if (*(int *)((int)this + 0x34) == 0) goto LAB_664a1b91;
    if (((((*(byte *)((int)this + 0x61) & 2) != 0) && (param_2 == 0x14)) && (iVar9 == 0)) &&
       (*(int *)((int)this + 0xbc) != 0)) {
      if ((*(byte *)((int)this + 0x60) & 0x20) == 0) {
        *(undefined4 *)(*(int *)((int)this + 0xbc) + 0x483) = 1;
      }
      else {
        *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x483) = 1;
      }
    }
    if ((((*(byte *)((int)this + 0x61) & 2) != 0) && (*(int *)((int)this + 0xbc) != 0)) &&
       ((param_2 == 0x46 || (param_2 == *(UINT *)((int)this + 0x9a))))) {
      FUN_664a4b60((int)this);
    }
    if (((param_2 == 0xf) && (iVar9 == 0)) && (*(int *)((int)this + 0x34) != 0)) {
      pHVar6 = BeginPaint(param_1,&local_8c);
      local_20 = *(uint **)((int)this + 0x5c);
      if (local_20 == (uint *)0x0) {
        if (param_1 == *(HWND *)((int)this + 0xf1)) {
          local_20 = *(uint **)((int)this + 0xc0);
        }
        else {
          local_20 = *(uint **)((int)this + 0xbc);
        }
      }
      else {
        FUN_664aea50(local_20,pHVar6);
      }
      local_1c = (LONG *)0x0;
      local_18 = 0;
      local_14 = 0;
      local_28 = 0x2001;
      local_24 = param_1;
      if ((((*(byte *)((int)this + 0x61) & 2) == 0) ||
          ((bVar2 = *(byte *)((int)this + 0x60) & 0x20, bVar2 == 0 &&
           (param_1 == *(HWND *)((int)this + 0x111))))) ||
         ((bVar2 != 0 && (param_1 == *(HWND *)((int)this + 0xf1))))) {
        (**(code **)(**(int **)((int)this + 0x34) + 0x14))(*(int **)((int)this + 0x34),&local_28);
      }
      iVar9 = 1;
      *param_5 = 0;
      EndPaint(param_1,&local_8c);
    }
    if ((((*(byte *)((int)this + 0x60) & 0x20) != 0) && (iVar9 == 0)) && (DAT_664f0718 == 0)) {
      pHVar7 = GetParent(*(HWND *)((int)this + 0xf1));
      PostMessageA(pHVar7,param_2,param_3,param_4);
      iVar9 = 1;
    }
    switch(param_2) {
    case 0x200:
      local_8 = 0x3005;
      break;
    case 0x201:
      local_8 = 0x3001;
      break;
    case 0x202:
      local_8 = 0x3002;
      break;
    case 0x204:
      local_8 = 0x3003;
      break;
    case 0x205:
      local_8 = 0x3004;
    }
    if (local_8 != 0) {
      local_48 = param_4 >> 0x10;
      local_4c = param_4 & 0xffff;
      local_10.y = (LONG)((param_3 & 4) != 0);
      if ((param_3 & 8) != 0) {
        local_10.y = local_10.y + 2;
      }
      SVar3 = GetAsyncKeyState(0x12);
      if (((int)SVar3 & 0x10000U) != 0) {
        local_10.y = local_10.y + 4;
      }
      local_28 = local_8;
      local_1c = &local_10.y;
      local_20 = &local_4c;
      local_24 = param_1;
      local_18 = 0;
      local_14 = 0;
      iVar4 = (**(code **)(**(int **)((int)this + 0x34) + 0x14))
                        (*(int **)((int)this + 0x34),&local_28);
      if (iVar4 == 0) {
        *param_5 = local_18;
        iVar9 = local_14;
      }
    }
  }
  if (((*(int *)((int)this + 0x4c) != 0) && (iVar9 == 0)) && (param_2 == 0x205)) {
    if ((*(byte *)((int)this + 0x60) & 0x20) == 0) {
      pHVar7 = *(HWND *)((int)this + 0x111);
    }
    else {
      pHVar7 = *(HWND *)((int)this + 0xf1);
    }
    hWndTo = GetParent(pHVar7);
    local_10.y = param_4 >> 0x10;
    local_10.x = param_4 & 0xffff;
    MapWindowPoints(pHVar7,hWndTo,&local_10,1);
    iVar9 = FUN_664a1780(*(void **)((int)this + 0x4c),hWndTo,0x205,param_3,
                         local_10.y << 0x10 | local_10.x,param_5);
  }
LAB_664a1b91:
  (**(code **)(*local_2c + 8))(local_2c);
  return iVar9;
}


