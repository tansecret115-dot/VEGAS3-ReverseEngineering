/* Module: rmme3260.dll
   Function: FUN_662314f0
   Address: 662314f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662314f0(void *this,int param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 extraout_var;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  ushort uVar13;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x91) + 4))();
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) & 0xfe;
  if ((param_1 != 0) && (*(int *)((int)this + 0x6f) == 0)) {
    *(int *)((int)this + 0x6f) = param_1;
  }
  if (*(int *)((int)this + 0x6f) == 0) {
    if (param_2 != (int *)0x0) {
      iVar12 = **(int **)((int)this + 0x3c);
      uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      uVar4 = (**(code **)(*param_2 + 0x1c))(param_2,uVar4);
      (**(code **)(iVar12 + 0x10))(uVar4);
    }
    puVar10 = *(undefined4 **)((int)this + 0x3c);
    iVar12 = puVar10[3];
    iVar1 = puVar10[2];
    if (iVar12 - iVar1 < 0) {
      uVar5 = (uint)*(ushort *)(puVar10 + 5);
    }
    else {
      uVar5 = 0;
    }
    uVar3 = (**(code **)*puVar10)();
    uVar2 = (ulonglong)((iVar12 - iVar1) + uVar5 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar3;
    uVar5 = (uint)uVar2;
    if ((*(byte *)((int)this + 0x6e) & 0x10) != 0) {
      uVar3 = *(ushort *)((int)this + 0x7f);
      if (uVar3 != 0) {
        if (uVar3 <= (ushort)uVar2) {
          uVar5 = (uint)uVar3;
        }
        pvVar6 = operator_new(uVar5);
        (**(code **)(**(int **)((int)this + 0x3c) + 0xc))(pvVar6,uVar5);
        *(short *)((int)this + 0x7f) = *(short *)((int)this + 0x7f) - (short)uVar5;
        if (*(short *)((int)this + 0x7f) == 0) {
          *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) & 0xef;
        }
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        puVar10 = *(undefined4 **)((int)this + 0x3c);
        iVar12 = puVar10[3];
        iVar1 = puVar10[2];
        if (iVar12 - iVar1 < 0) {
          uVar5 = (uint)*(ushort *)(puVar10 + 5);
        }
        else {
          uVar5 = 0;
        }
        uVar3 = (**(code **)*puVar10)();
        uVar5 = (uint)((ulonglong)((iVar12 - iVar1) + uVar5 & 0xffff) /
                      (ulonglong)(longlong)(int)(uint)uVar3);
      }
    }
    if (((*(byte *)((int)this + 0x6e) & 0x20) == 0) && (1 < (ushort)uVar5)) {
      pvVar6 = *(void **)((int)this + 0x73);
      if (pvVar6 == (void *)0x0) {
LAB_66231641:
        uVar7 = uVar5 + 1;
        if (uVar7 < 0x101) {
          uVar7 = 0x100;
        }
        *(short *)((int)this + 0x77) = (short)uVar7;
        pvVar6 = operator_new(uVar7 & 0xffff);
        *(void **)((int)this + 0x73) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          local_8 = -0x7ff8fff2;
          goto LAB_66231a29;
        }
      }
      else if ((uint)*(ushort *)((int)this + 0x77) < uVar5 + 1) {
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        goto LAB_66231641;
      }
      (**(code **)(**(int **)((int)this + 0x3c) + 0xc))(*(undefined4 *)((int)this + 0x73),uVar5);
      *(undefined1 *)(uVar5 + *(int *)((int)this + 0x73)) = 0;
      pcVar8 = FUN_66265690(*(LPCSTR *)((int)this + 0x73),&DAT_6626fb18);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = FUN_66265690(*(LPCSTR *)((int)this + 0x73),&DAT_6626fb14);
        if (pcVar8 != (char *)0x0) goto LAB_662316ed;
        if ((ushort)uVar5 < 4) {
LAB_662316db:
          (**(code **)(**(int **)((int)this + 0x3c) + 0x10))
                    (*(undefined4 *)((int)this + 0x73),uVar5);
          goto LAB_66231a29;
        }
        pcVar8 = FUN_66265690(*(LPCSTR *)((int)this + 0x73),&DAT_6626fb0c);
        if (pcVar8 == (char *)0x0) goto LAB_662316db;
        pcVar8 = pcVar8 + 4;
      }
      else {
LAB_662316ed:
        pcVar8 = pcVar8 + 2;
      }
      *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) | 0x20;
      pcVar9 = FUN_66265690(*(LPCSTR *)((int)this + 0x73),s_HTTP_1_0_200_OK_6626fafc);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = FUN_66265690(*(LPCSTR *)((int)this + 0x73),s_200_OK_6626faf4);
        if (pcVar9 == (char *)0x0) {
          local_8 = -0x7ffbfff8;
        }
      }
      if (local_8 != 0) goto LAB_66231a29;
      (**(code **)(**(int **)((int)this + 0x3c) + 0x10))
                (pcVar8,CONCAT22((short)(uVar5 - (int)pcVar8 >> 0x10),
                                 (short)(uVar5 - (int)pcVar8) + *(short *)((int)this + 0x73)));
      puVar10 = *(undefined4 **)((int)this + 0x3c);
      iVar12 = puVar10[3];
      iVar1 = puVar10[2];
      if (iVar12 - iVar1 < 0) {
        uVar5 = (uint)*(ushort *)(puVar10 + 5);
      }
      else {
        uVar5 = 0;
      }
      uVar3 = (**(code **)*puVar10)();
      uVar5 = (uint)((ulonglong)((iVar12 - iVar1) + uVar5 & 0xffff) /
                    (ulonglong)(longlong)(int)(uint)uVar3);
    }
    if (local_8 == 0) {
      uVar3 = (ushort)uVar5;
      if (((uVar3 != 0) && ((*(byte *)((int)this + 0x6d) & 2) == 0)) &&
         ((*(byte *)((int)this + 0x6e) & 0x20) != 0)) {
        if (uVar3 < 3) goto LAB_66231a29;
        (**(code **)(**(int **)((int)this + 0x3c) + 0xc))(*(undefined4 *)((int)this + 100),uVar5);
        pcVar8 = *(char **)((int)this + 100);
        if (*pcVar8 == 'H') {
          *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) | 2;
          uVar3 = (ushort)pcVar8[1];
          if (uVar3 + 2 < uVar5) {
            (**(code **)(**(int **)((int)this + 0x3c) + 0x10))
                      (pcVar8 + uVar3 + 2,(uVar5 - CONCAT22(extraout_var,uVar3)) + -2);
          }
          local_8 = FUN_66232150(this,*(char *)(*(int *)((int)this + 100) + 2));
          if (local_8 == 0) {
            puVar10 = *(undefined4 **)((int)this + 0x3c);
            uVar5 = puVar10[3] - puVar10[2];
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + *(ushort *)(puVar10 + 5);
              uVar3 = (**(code **)*puVar10)();
            }
            else {
              uVar3 = (**(code **)*puVar10)();
            }
LAB_66231973:
            uVar5 = (uint)((ulonglong)(uVar5 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar3);
          }
        }
        else {
          if (*pcVar8 != 'r') {
            *(undefined4 *)((int)this + 0x6f) = 0x800400c0;
            return 0x800400c0;
          }
          if (uVar3 < 9) {
            (**(code **)(**(int **)((int)this + 0x3c) + 0x10))(pcVar8,uVar5);
            goto LAB_66231a29;
          }
          *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) | 2;
          local_8 = FUN_66232150(this,pcVar8[3]);
          if (local_8 == 0) {
            pcVar9 = pcVar8 + 7;
            *(ushort *)((int)this + 0x7f) = CONCAT11(pcVar8[5],pcVar8[6]);
            *(short *)((int)this + 0x7f) = *(short *)((int)this + 0x7f) + 1;
            uVar7 = (uVar5 - (int)pcVar9) + *(int *)((int)this + 100);
            uVar5 = (uint)*(ushort *)((int)this + 0x7f);
            if ((int)uVar7 < (int)(uint)*(ushort *)((int)this + 0x7f)) {
              uVar5 = uVar7;
            }
            (**(code **)(**(int **)((int)this + 0x3c) + 0x10))(pcVar9,uVar5);
            puVar10 = *(undefined4 **)((int)this + 0x3c);
            iVar12 = puVar10[3];
            iVar1 = puVar10[2];
            if (iVar12 - iVar1 < 0) {
              uVar5 = (uint)*(ushort *)(puVar10 + 5);
            }
            else {
              uVar5 = 0;
            }
            uVar3 = (**(code **)*puVar10)();
            uVar2 = (ulonglong)((iVar12 - iVar1) + uVar5 & 0xffff) /
                    (ulonglong)(longlong)(int)(uint)uVar3;
            uVar7 = (uint)uVar2;
            uVar3 = (ushort)uVar2;
            uVar5 = CONCAT22((short)((uint)pcVar9 >> 0x10),*(ushort *)((int)this + 0x7f));
            if (uVar3 < *(ushort *)((int)this + 0x7f)) {
              uVar5 = uVar7;
            }
            pvVar6 = operator_new(uVar5 & 0xffff);
            (**(code **)(**(int **)((int)this + 0x3c) + 0xc))(pvVar6,uVar5);
            uVar13 = (ushort)uVar5;
            *(short *)((int)this + 0x7f) = *(short *)((int)this + 0x7f) - uVar13;
            if (*(short *)((int)this + 0x7f) != 0) {
              *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) | 0x10;
            }
            if ((uVar13 != 0) && (uVar13 < uVar3)) {
              (**(code **)(**(int **)((int)this + 0x3c) + 0x10))
                        ((uVar5 & 0xffff) + *(int *)((int)this + 100),uVar7 - uVar5);
            }
            if (pvVar6 != (void *)0x0) {
              operator_delete(pvVar6);
            }
            puVar10 = *(undefined4 **)((int)this + 0x3c);
            if ((int)(puVar10[3] - puVar10[2]) < 0) {
              uVar5 = (uint)*(ushort *)(puVar10 + 5);
            }
            else {
              uVar5 = 0;
            }
            uVar5 = (puVar10[3] - puVar10[2]) + uVar5;
            uVar3 = (**(code **)*puVar10)();
            goto LAB_66231973;
          }
        }
      }
      if (((local_8 == 0) && ((*(byte *)((int)this + 0x6c) & 4) != 0)) &&
         (((ushort)uVar5 != 0 &&
          (((*(byte *)((int)this + 0x6d) & 2) != 0 && ((*(byte *)((int)this + 0x6e) & 0x20) != 0))))
         )) {
        local_8 = 0;
        iVar12 = FUN_662321c0((int)this);
        if (iVar12 != 0) {
          *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) & 0xfb;
          if (*(ushort *)((int)this + 0x36) < (ushort)uVar5) {
            uVar5 = (uint)*(ushort *)((int)this + 0x36);
          }
          puVar10 = operator_new(0x28);
          if (puVar10 == (undefined4 *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)FUN_662522d0(puVar10);
          }
          (**(code **)(*piVar11 + 4))(piVar11);
          (**(code **)(**(int **)((int)this + 0x3c) + 0xc))(*(undefined4 *)((int)this + 100),uVar5);
          (**(code **)(*piVar11 + 0x10))(piVar11,*(undefined4 *)((int)this + 100),uVar5);
          (**(code **)(**(int **)((int)this + 0x14) + 0x10))(*(int **)((int)this + 0x14),0,piVar11);
          (**(code **)(*piVar11 + 8))(piVar11);
        }
      }
    }
  }
LAB_66231a29:
  if ((local_8 != 0) && (*(int *)((int)this + 0x6f) == 0)) {
    *(int *)((int)this + 0x6f) = local_8;
  }
  if (*(int *)((int)this + 0x6f) != 0) {
    if ((*(byte *)((int)this + 0x6c) & 4) != 0) {
      iVar12 = FUN_662321c0((int)this);
      if (iVar12 != 0) {
        *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) & 0xfb;
        (**(code **)(**(int **)((int)this + 0x14) + 0x10))
                  (*(int **)((int)this + 0x14),*(undefined4 *)((int)this + 0x6f),0);
      }
    }
    if (*(int *)((int)this + 0x6f) != 0) goto LAB_66231a7e;
  }
  FUN_66231130(this);
  FUN_66230df0((int)this);
LAB_66231a7e:
  (**(code **)(**(int **)((int)this + 0x91) + 8))();
  return 0;
}


