/* Module: vegas30.exe
   Function: FUN_005bd2c0
   Address: 005bd2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005bd2c0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piStack_a8;
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  iVar5 = 0;
  puVar6 = local_80;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_80[1] = *(undefined4 *)(param_1 + 4);
  local_80[2] = *(undefined4 *)(param_1 + 8);
  local_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_9c = 0;
  local_6c = *(undefined4 *)(param_1 + 0x14);
  uStack_a0 = 0x80;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  local_80[0] = 0x80;
  local_64 = *(undefined4 *)(param_1 + 0x1c);
  local_60 = 0;
  local_50 = *(undefined4 *)(param_1 + 0x20);
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = *(undefined4 *)(param_1 + 0x24);
  local_48 = *(undefined4 *)(param_1 + 0x28);
  local_44 = *(undefined4 *)(param_1 + 0x2c);
  local_40 = *(undefined4 *)(param_1 + 0x30);
  local_3c = *(undefined4 *)(param_1 + 0x34);
  local_38 = *(undefined4 *)(param_1 + 0x38);
  local_20 = *(undefined4 *)(param_1 + 0x100);
  local_34 = *(undefined4 *)(param_1 + 0x3c);
  local_30 = 0;
  local_2c = 0;
  local_1c = *(undefined4 *)(param_1 + 0x104);
  local_28 = 0;
  local_24 = 0;
  local_10 = *(undefined4 *)(param_1 + 0x10c);
  local_c = *(undefined4 *)(param_1 + 0x110);
  local_8 = *(int *)(param_1 + 0x114);
  local_14 = *(undefined4 *)(param_1 + 0x124);
  local_4 = *(undefined4 *)(param_1 + 0x118);
  local_18 = *(undefined4 *)(param_1 + 0x108);
  puStack_a4 = local_80;
  piStack_a8 = param_2;
  local_80[3] = uVar1;
  iVar2 = (**(code **)(*param_2 + 0x10))();
  iVar4 = local_8;
  if (((-1 < iVar2) && (local_8 != 0)) &&
     (piVar7 = param_2, iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffff68,4,0),
     -1 < iVar2)) {
    if (0 < (int)piStack_a8) {
      do {
        lVar3 = tSFVIDEOFILTERCACHE::Persist
                          (*(IStream **)(*(int *)(*(int *)(param_1 + 0x40) + 8) + iVar5 * 4),
                           (int)param_2);
        if (lVar3 < 0) {
          return lVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)piStack_a8);
    }
    if (*(undefined4 **)(param_1 + 0x44) == (undefined4 *)0x0) {
      piStack_a8 = (int *)0x0;
    }
    else {
      piStack_a8 = (int *)**(undefined4 **)(param_1 + 0x44);
    }
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&piStack_a8,4,0);
    if (-1 < iVar2) {
      iVar5 = 0;
      if (0 < (int)piVar7) {
        do {
          iVar2 = tSFVIDEOFILTERCACHE::Persist
                            (*(IStream **)(*(int *)(*(int *)(param_1 + 0x44) + 8) + iVar5 * 4),
                             (int)param_2);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)piVar7);
      }
      FUN_00522af0(param_2,iVar4);
    }
  }
  return iVar2;
}


