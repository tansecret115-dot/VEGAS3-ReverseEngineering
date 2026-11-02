/* Module: erv33260.dll
   Function: FUN_6707dce0
   Address: 6707dce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6707dce0(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  int *piVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\x01';
  iVar3 = *(int *)((int)this + 0xc0);
  iVar12 = param_1[2];
  iVar8 = param_1[3];
  piVar10 = (int *)(*param_1 * iVar12 + param_1[1]);
  if (*(int *)((int)this + 200) != 0) {
    FUN_6707f060(this,param_1,param_2);
  }
  piVar1 = (int *)((int)piVar10 + iVar8 * iVar12);
  if (piVar10 < piVar1) {
    iVar12 = (int)piVar10 * 0xc;
    local_18 = (int)piVar10 * 0x10;
    do {
      local_10 = (uint)*(byte *)(*(int *)((int)this + 0x8c) + 4 + iVar12);
      *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar12) = 0;
      *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 300);
      iVar8 = *(int *)(param_2 + 0x28);
      if (((iVar8 == 2) || (iVar8 == 1)) || (iVar8 == 0)) {
        param_1._3_1_ =
             (**(code **)((int)this + 0x238))
                       (*(int *)(*(int *)((int)this + 0x90) + local_18) +
                        *(int *)(*(int *)((int)this + 0x5c) + 4),*(undefined4 *)((int)this + 0x9c),
                        local_10);
      }
      else {
        param_1._3_1_ = '\0';
      }
      if (*(int *)((int)this + 200) == 0) {
        if (param_1._3_1_ == '\0') {
          FUN_67083020(this,(int)piVar10,(int *)&local_c,*(undefined4 *)((int)this + 0xc0));
          bVar6 = true;
        }
        else {
          FUN_67082dd0(this,piVar10,(int *)&local_14,&local_1c);
          FUN_67083020(this,(int)piVar10,(int *)&local_c,*(undefined4 *)((int)this + 0xc0));
          bVar6 = local_c < local_14;
        }
        *(bool *)(*(int *)((int)this + 0x8c) + 6 + iVar12) = bVar6;
        *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar12) = 0xffffff;
        *(undefined4 *)((int)this + 0x164) = 0xffffffff;
LAB_6707df0c:
        *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + 1;
      }
      else {
        FUN_67083160((byte *)((int)this + 0x5c),(char *)piVar10,(uint *)((int)this + 0x164),param_2)
        ;
        *(undefined4 *)((int)this + 0x168) = *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar12);
        *(undefined1 *)((int)this + 0x160) =
             *(undefined1 *)(*(int *)((int)this + 0x8c) + iVar12 + 6);
        uVar7 = local_10;
        if (0x16 < local_10) {
          uVar7 = 0x16;
        }
        if ((param_1._3_1_ == '\0') ||
           (*(uint *)((int)this + 0x164) < (uint)(byte)(&DAT_67091278)[uVar7] * 0x46)) {
          FUN_67083020(this,(int)piVar10,(int *)&local_c,*(undefined4 *)((int)this + 0xc0));
LAB_6707de78:
          uVar5 = 1;
          uVar7 = local_c;
        }
        else {
          FUN_67082dd0(this,piVar10,(int *)&local_14,&local_1c);
          FUN_67083020(this,(int)piVar10,(int *)&local_c,*(undefined4 *)((int)this + 0xc0));
          if (local_c < local_14) goto LAB_6707de78;
          uVar5 = 0;
          uVar7 = local_14;
        }
        if (uVar7 < *(uint *)((int)this + 0x164)) {
          *(undefined1 *)(*(int *)((int)this + 0x8c) + 6 + iVar12) = uVar5;
          *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar12) = 0xffffff;
          goto LAB_6707df0c;
        }
      }
      iVar8 = FUN_67081fd0(this,(uint)piVar10);
      if (iVar8 != 0) {
        puVar9 = (undefined4 *)(*(int *)((int)this + 0x8c) + iVar12);
        local_10 = (uint)*(byte *)(puVar9 + 1);
        *puVar9 = 0;
        *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 300);
        FUN_67082dd0(this,piVar10,(int *)&local_14,&local_1c);
        *(undefined1 *)(*(int *)((int)this + 0x8c) + 6 + iVar12) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar12) = 0xffffff;
        *(undefined4 *)((int)this + 0x164) = 0xffffffff;
        FUN_67081fd0(this,(uint)piVar10);
      }
      do {
        FUN_6707ad70(*(void **)((int)this + 4),(int)piVar10);
        FUN_67081b10(this,(uint)piVar10,local_10);
        if (*(char *)(*(int *)((int)this + 0x8c) + 6 + iVar12) == '\x01') {
          FUN_6707b280(*(void **)((int)this + 4),(short *)(iVar3 + 0x240),*(uint *)(iVar3 + 0x5e0),
                       (undefined *)0x3,0,local_10);
        }
        if (*(int *)(*(int *)((int)this + 0x8c) + iVar12) != 0) {
          cVar2 = *(char *)(*(int *)((int)this + 0x8c) + iVar12 + 6);
          puVar11 = (undefined *)(uint)(cVar2 == '\0');
          if (cVar2 == '\x01') {
            puVar11 = (undefined *)0x2;
          }
          uVar7 = 0;
          do {
            if (uVar7 == 0x10) {
              cVar2 = *(char *)(*(int *)((int)this + 0x8c) + 6 + iVar12);
              if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                puVar11 = (undefined *)0x1;
              }
              else {
                puVar11 = (undefined *)0x0;
              }
            }
            uVar4 = *(uint *)(iVar3 + 0x5e4 + uVar7 * 4);
            if (uVar4 != 0) {
              FUN_6707b280(*(void **)((int)this + 4),(short *)(uVar7 * 0x20 + iVar3 + 0x260),uVar4,
                           puVar11,(uint)(0xf < uVar7),local_10);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x18);
        }
        if ((*(char *)((int)this + 0x138) == '\0') ||
           (FUN_6707f740(this,&local_5,(int)piVar10,local_10), local_5 == '\0')) goto LAB_6707e081;
        *(uint *)((int)this + 0x13c) = local_10;
      } while (1 < *(byte *)(*(int *)((int)this + 0x8c) + 6 + iVar12));
      piVar10 = (int *)((int)piVar10 + -1);
      local_18 = local_18 + -0x10;
      iVar12 = iVar12 + -0xc;
LAB_6707e081:
      if ((*(byte *)(*(int *)((int)this + 0x8c) + 5 + iVar12) & 2) == 0) {
        *(undefined4 *)((int)this + 0xd0) = 0;
        *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 0x10;
      }
      else {
        *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + 0x10;
      }
      bVar6 = FUN_6707d670(*(int *)((int)this + 4));
      if (CONCAT31(extraout_var,bVar6) == 0) {
        return 0;
      }
      piVar10 = (int *)((int)piVar10 + 1);
      local_18 = local_18 + 0x10;
      iVar12 = iVar12 + 0xc;
    } while (piVar10 < piVar1);
  }
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 200);
  return 0;
}


