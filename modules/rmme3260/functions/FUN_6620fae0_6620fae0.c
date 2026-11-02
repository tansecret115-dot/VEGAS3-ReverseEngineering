/* Module: rmme3260.dll
   Function: FUN_6620fae0
   Address: 6620fae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620fae0(void *this,char *param_1,uint param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_30 [3];
  int local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar1 = 0;
  iVar6 = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  if (*(int *)((int)this + 0xf4) != 0) {
    iVar7 = 0;
    do {
      if (iVar1 == 0) {
LAB_6620fb1e:
        puVar2 = FUN_66250280(local_24,*(char **)(iVar7 + 0x10 + *(int *)((int)this + 0x100)));
        iVar3 = _stricmp((char *)*puVar2,param_1);
        FUN_66250210(local_24);
        iVar1 = local_c;
        iVar6 = local_8;
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar7 + *(int *)((int)this + 0x100));
          if (0 < iVar3) {
            puVar4 = *(ushort **)(iVar7 + *(int *)((int)this + 0x100) + 4);
            do {
              if (param_2 == *puVar4) {
                local_c = 1;
                local_18 = CONCAT22(local_18._2_2_,puVar4[1]);
              }
              puVar4 = puVar4 + 2;
              iVar3 = iVar3 + -1;
              iVar1 = local_c;
            } while (iVar3 != 0);
          }
        }
      }
      else {
        if (iVar6 != 0) break;
        if (iVar1 == 0) goto LAB_6620fb1e;
      }
      if (iVar6 == 0) {
        puVar2 = FUN_66250280(local_30,*(char **)(iVar7 + 0x10 + *(int *)((int)this + 0x100)));
        iVar3 = _stricmp((char *)*puVar2,param_3);
        FUN_66250210(local_30);
        iVar1 = local_c;
        iVar6 = local_8;
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar7 + *(int *)((int)this + 0x100));
          if (0 < iVar3) {
            puVar4 = *(ushort **)(iVar7 + *(int *)((int)this + 0x100) + 4);
            do {
              if (param_4 == *puVar4) {
                local_8 = 1;
                local_14 = CONCAT22(local_14._2_2_,puVar4[1]);
              }
              puVar4 = puVar4 + 2;
              iVar3 = iVar3 + -1;
              iVar6 = local_8;
            } while (iVar3 != 0);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar7 = iVar7 + 0x14;
    } while (local_10 < *(uint *)((int)this + 0xf4));
  }
  if ((iVar1 != 0) && (iVar6 != 0)) {
    uVar5 = FUN_66226580((void *)((int)this + 0x128),(ushort)local_18,(ushort)local_14);
    return uVar5;
  }
  return 0x80004005;
}


