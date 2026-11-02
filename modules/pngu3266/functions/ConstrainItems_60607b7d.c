/* Module: pngu3266.dll
   Function: ConstrainItems
   Address: 60607b7d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNConstraintLayoutMgr::ConstrainItems(void) */

void __thiscall CPNConstraintLayoutMgr::ConstrainItems(CPNConstraintLayoutMgr *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int local_80 [3];
  undefined4 *local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
                    /* 0x17b7d  878  ?ConstrainItems@CPNConstraintLayoutMgr@@QAEXXZ */
  FUN_605f28b6(local_80,this + 0x14,-(uint)(*(int *)(this + 0x20) != 0));
  piVar3 = *(int **)this;
  local_1c = *(int *)(this + 0x20);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,&local_4c);
    for (; local_1c != 0; local_1c = local_1c + -1) {
      local_8 = local_74[1];
      local_5c = local_74[2];
      local_14 = (int *)*local_74;
      local_58 = local_74[3];
      local_54 = local_74[4];
      local_50 = local_74[5];
      (**(code **)(*local_14 + 0x14))(local_14,&local_6c);
      local_3c = local_6c;
      local_38 = local_68;
      local_34 = local_64;
      local_30 = local_60;
      if ((local_8 & 0x10000000) != 0x10000000) {
        bVar4 = (byte)local_8;
        if ((bVar4 & 1) == 1) {
          local_3c = (local_4c - *(int *)(this + 4)) + local_5c;
        }
        if ((bVar4 & 0x10) == 0x10) {
          local_34 = (local_44 - *(int *)(this + 0xc)) + local_54;
        }
        if ((local_8 & 0x100) == 0x100) {
          local_38 = (local_48 - *(int *)(this + 8)) + local_58;
        }
        if ((local_8 & 0x1000) == 0x1000) {
          local_30 = (local_40 - *(int *)(this + 0x10)) + local_50;
        }
        if ((bVar4 & 2) == 2) {
          local_3c = (uint)((((local_5c - *(int *)(this + 4)) * 100) /
                            (*(int *)(this + 0xc) - *(int *)(this + 4))) * (local_44 - local_4c)) /
                     100 + local_4c;
        }
        if ((bVar4 & 0x20) == 0x20) {
          local_34 = local_44 -
                     (uint)((((*(int *)(this + 0xc) - local_54) * 100) /
                            (*(int *)(this + 0xc) - *(int *)(this + 4))) * (local_44 - local_4c)) /
                     100;
        }
        if ((local_8 & 0x200) == 0x200) {
          local_38 = (uint)((((local_58 - *(int *)(this + 8)) * 100) /
                            (*(int *)(this + 0x10) - *(int *)(this + 8))) * (local_40 - local_48)) /
                     100 + local_48;
        }
        if ((local_8 & 0x2000) == 0x2000) {
          local_30 = local_40 -
                     (uint)((((*(int *)(this + 0x10) - local_50) * 100) /
                            (*(int *)(this + 0x10) - *(int *)(this + 8))) * (local_40 - local_48)) /
                     100;
        }
        uVar1 = local_8 & 0xf0;
        if (uVar1 == 0) {
          local_34 = (local_54 - local_5c) + local_3c;
        }
        uVar2 = local_8 & 0xf;
        if (uVar2 == 0) {
          local_3c = (local_5c - local_54) + local_34;
        }
        if ((local_8 & 0xf000) == 0) {
          local_30 = (local_50 - local_58) + local_38;
        }
        if ((local_8 & 0xf00) == 0) {
          local_38 = (local_58 - local_50) + local_30;
        }
        if ((local_8 & 0x10000) == 0x10000) {
          local_18 = ((local_54 - local_5c) * 100) / (*(int *)(this + 0xc) - *(int *)(this + 4));
          if (uVar2 != 0) {
            local_34 = (uint)((local_44 - local_4c) * local_18) / 100 + local_3c;
          }
          if (uVar1 != 0) {
            local_3c = local_34 - (uint)((local_44 - local_4c) * local_18) / 100;
          }
        }
        if ((local_8 & 0x20000) == 0x20000) {
          iVar5 = ((local_50 - local_58) * 100) / (*(int *)(this + 0x10) - *(int *)(this + 8));
          if (uVar2 != 0) {
            local_30 = (uint)((local_40 - local_48) * iVar5) / 100 + local_38;
          }
          if (uVar1 != 0) {
            local_38 = local_30 - (uint)((local_40 - local_48) * iVar5) / 100;
          }
        }
        local_10 = 0;
        local_c = 0;
        if ((local_68 != local_38) || (local_6c != local_3c)) {
          local_10 = 1;
        }
        if ((local_64 - local_6c != local_34 - local_3c) ||
           (local_60 - local_68 != local_30 - local_38)) {
          local_c = 1;
        }
        if (local_10 == 0) {
LAB_60607ec9:
          if (local_c != 0) {
            local_28 = local_30 - local_38;
            local_2c = local_34 - local_3c;
            (**(code **)(*local_14 + 0x1c))(local_14,&local_2c);
          }
        }
        else if (local_c == 0) {
          if (local_10 == 0) goto LAB_60607ec9;
          local_24 = local_3c;
          local_20 = local_38;
          (**(code **)(*local_14 + 0x18))(local_14,&local_24);
        }
        else {
          (**(code **)(*local_14 + 0x20))(local_14,&local_3c);
        }
      }
      FUN_6060285c(local_80);
    }
  }
  return;
}


