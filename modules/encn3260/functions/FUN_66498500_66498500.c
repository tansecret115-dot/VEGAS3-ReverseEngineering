/* Module: encn3260.dll
   Function: FUN_66498500
   Address: 66498500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66498500(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint local_c;
  int local_8;
  
  iVar8 = 0;
  if ((*(byte *)(param_1 + 8) & 0x80) != 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)((int)param_1 + 0x22);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x80;
  iVar2 = puVar1[3];
  iVar3 = puVar1[2];
  if (iVar2 - iVar3 < 0) {
    uVar7 = (uint)*(ushort *)(puVar1 + 5);
  }
  else {
    uVar7 = 0;
  }
  uVar6 = (**(code **)*puVar1)();
  uVar5 = (ulonglong)((iVar2 - iVar3) + uVar7 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar6;
  uVar7 = (uint)uVar5;
  sVar9 = (short)uVar5;
  local_c = uVar7;
  if (sVar9 != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x22) + 0xc))(*(undefined4 *)((int)param_1 + 0x3e),uVar7)
    ;
    iVar8 = (**(code **)(*(int *)param_1[5] + 0x38))(*(undefined4 *)((int)param_1 + 0x3e),&local_c);
  }
  if (((iVar8 == -0x7ffbffb2) || (iVar8 == -0x7ffbffac)) || (iVar8 == 0)) {
    if ((short)local_c != sVar9) {
      (**(code **)(**(int **)((int)param_1 + 0x22) + 0x10))
                (*(int *)((int)param_1 + 0x3e) + (local_c & 0xffff),uVar7 - local_c);
    }
    local_8 = 0;
  }
  else {
    local_8 = FUN_66497130(iVar8);
  }
  if (local_8 == 0) {
    if ((*(byte *)(param_1 + 8) & 4) != 0) {
      puVar1 = *(undefined4 **)((int)param_1 + 0x22);
      iVar8 = puVar1[3];
      iVar2 = puVar1[2];
      if (iVar8 - iVar2 < 0) {
        uVar7 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar7 = 0;
      }
      uVar6 = (**(code **)*puVar1)();
      if ((short)((ulonglong)((iVar8 - iVar2) + uVar7 & 0xffff) /
                 (ulonglong)(longlong)(int)(uint)uVar6) == 0) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
        (**(code **)(*(int *)param_1[4] + 0x14))((int *)param_1[4],0);
      }
    }
    if (local_8 == 0) {
      if (param_1 == (int *)0xffffffd6) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x3a);
      }
      if (0 < iVar8) {
        FUN_66498880((int)param_1);
      }
    }
  }
  if (local_8 == 0) {
    puVar1 = *(undefined4 **)((int)param_1 + 0x22);
    if (puVar1 == (undefined4 *)0x0) {
LAB_6649867c:
      if (param_1 == (int *)0xffffffd6) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x3a);
      }
      if (iVar8 < 1) goto LAB_664986a4;
    }
    else {
      iVar8 = puVar1[3];
      iVar2 = puVar1[2];
      if (iVar8 - iVar2 < 0) {
        uVar7 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar7 = 0;
      }
      uVar6 = (**(code **)*puVar1)();
      if ((short)((ulonglong)((iVar8 - iVar2) + uVar7 & 0xffff) /
                 (ulonglong)(longlong)(int)(uint)uVar6) == 0) goto LAB_6649867c;
    }
    piVar4 = (int *)param_1[0x14];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))(piVar4,1,param_1[0x12],0x32,0);
    }
  }
LAB_664986a4:
  if ((*(byte *)((int)param_1 + 0x21) & 1) == 0) {
    if (local_8 != 0) goto LAB_66498779;
  }
  else {
    puVar1 = *(undefined4 **)((int)param_1 + 0x22);
    iVar8 = puVar1[3];
    iVar2 = puVar1[2];
    if (iVar8 - iVar2 < 0) {
      uVar7 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar6 = (**(code **)*puVar1)();
    if ((short)((ulonglong)((iVar8 - iVar2) + uVar7 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar6) == 0) {
      if (param_1 == (int *)0xffffffd6) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x3a);
      }
      if (iVar8 == 0) goto LAB_664986f7;
    }
    if (local_8 != 0) {
LAB_664986f7:
      *(byte *)((int)param_1 + 0x21) = *(byte *)((int)param_1 + 0x21) & 0xfe;
      (**(code **)(*param_1 + 8))(param_1);
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x7f;
      return local_8;
    }
  }
  if ((*(byte *)((int)param_1 + 0x21) & 1) == 0) {
    puVar1 = *(undefined4 **)((int)param_1 + 0x22);
    iVar8 = puVar1[3];
    iVar2 = puVar1[2];
    if (iVar8 - iVar2 < 0) {
      uVar7 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar6 = (**(code **)*puVar1)();
    if ((short)((ulonglong)((iVar8 - iVar2) + uVar7 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar6) == 0) {
      if (param_1 == (int *)0xffffffd6) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x3a);
      }
      if (iVar8 < 1) goto LAB_66498779;
    }
    *(byte *)((int)param_1 + 0x21) = *(byte *)((int)param_1 + 0x21) | 1;
    (**(code **)(*param_1 + 4))(param_1);
  }
LAB_66498779:
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x7f;
  return local_8;
}


