/* Module: vegas30.exe
   Function: FUN_00475c60
   Address: 00475c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475c60(HDC param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  HGDIOBJ pvVar8;
  int iVar9;
  double local_48;
  double local_40;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  piVar1 = (int *)param_3[0x12];
  iVar9 = piVar1[1];
  iVar7 = *piVar1;
  if (*param_3 == iVar7) {
    bVar4 = false;
    if ((*(int *)(iVar7 + 4) == 3) && (piVar1[9] != 0)) {
      if ((*(byte *)(piVar1 + 0x32) & 2) == 0) {
        piVar5 = *(int **)(iVar7 + 0x200);
      }
      else {
        piVar5 = *(int **)(iVar7 + 0x204);
      }
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        bVar4 = true;
      }
    }
    uVar2 = param_3[0x13];
    if (((uVar2 & 0x20) == 0) || (bVar4)) {
      if (1 < DAT_00647724) {
        if (*(float *)(iVar7 + 0x60) != (float)_DAT_006106d0) {
          if (((*(byte *)(iVar7 + 0x10) & 2) == 0) &&
             ((*(uint *)(*(int *)(iVar7 + 8) + 0x10) & 0x20000) == 0)) {
            if ((uVar2 & 0x80) == 0) {
              pvVar8 = *(HGDIOBJ *)(param_4 + 8);
            }
            else {
              pvVar8 = *(HGDIOBJ *)(param_4 + 0x10);
            }
          }
          else if ((uVar2 & 0x80) == 0) {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0xc);
          }
          else {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0x14);
          }
          SelectObject(param_1,pvVar8);
          local_18 = param_3[8];
          iVar6 = param_3[10];
          iVar7 = FUN_00476330(iVar7,(double)*(float *)(iVar7 + 0x60));
          MoveToEx(param_1,local_18,iVar7,(LPPOINT)0x0);
          LineTo(param_1,iVar6 + 1,iVar7);
        }
        uVar2 = param_3[0x13];
        if ((((uVar2 & 0x20000) != 0) && (iVar9 != 0)) &&
           (*(float *)(iVar9 + 0x60) != (float)_DAT_006106d0)) {
          if (((*(byte *)(iVar9 + 0x10) & 2) == 0) &&
             ((*(uint *)(*(int *)(iVar9 + 8) + 0x10) & 0x20000) == 0)) {
            if ((uVar2 & 0x400) == 0) {
              pvVar8 = *(HGDIOBJ *)(param_4 + 8);
            }
            else {
              pvVar8 = *(HGDIOBJ *)(param_4 + 0x10);
            }
          }
          else if ((uVar2 & 0x400) == 0) {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0xc);
          }
          else {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0x14);
          }
          SelectObject(param_1,pvVar8);
          local_18 = param_3[8];
          __alldiv(*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x3c),2,0);
          iVar7 = ftol();
          iVar7 = iVar7 + *(int *)(param_4 + 0x44);
          if (iVar7 < -0x4000) {
            iVar7 = -0x4000;
          }
          else if (0x3fff < iVar7) {
            iVar7 = 0x3fff;
          }
          iVar6 = param_3[10] + 1;
          if (iVar7 <= param_3[10] + 1) {
            iVar6 = iVar7;
          }
          iVar9 = FUN_00476330(iVar9,(double)*(float *)(iVar9 + 0x60));
          MoveToEx(param_1,local_18,iVar9,(LPPOINT)0x0);
          LineTo(param_1,iVar6,iVar9);
        }
      }
    }
    else {
      uVar3 = *(undefined4 *)(param_4 + 0x38);
      __alldiv(uVar3,*(undefined4 *)(param_4 + 0x3c),2,0);
      iVar6 = ftol();
      iVar6 = iVar6 + *(int *)(param_4 + 0x44);
      if (iVar6 < -0x4000) {
        local_18 = -0x4000;
      }
      else {
        local_18 = 0x3fff;
        if (iVar6 < 0x4000) {
          local_18 = iVar6;
        }
      }
      __alldiv(uVar3,*(undefined4 *)(param_4 + 0x3c),2,0);
      local_10 = ftol();
      local_10 = local_10 + *(int *)(param_4 + 0x44);
      if (local_10 < -0x4000) {
        local_10 = -0x4000;
      }
      else if (0x3fff < local_10) {
        local_10 = 0x3fff;
      }
      if (local_18 != local_10) {
        if ((float)piVar1[0xc] <= (float)_DAT_00610fd8) {
          local_40 = 0.0;
        }
        else {
          local_40 = (double)*(float *)(iVar7 + 0x60);
        }
        if ((float)piVar1[0xb] <= (float)_DAT_00610fd8) {
          local_48 = 0.0;
        }
        else {
          local_48 = (double)*(float *)(iVar7 + 0x60);
        }
        local_14 = FUN_00476330(iVar7,local_40._0_4_,(int)((ulonglong)local_40 >> 0x20));
        local_c = FUN_00476330(iVar7,local_48._0_4_,(int)((ulonglong)local_48 >> 0x20));
        MoveToEx(param_1,local_18,local_14,(LPPOINT)0x0);
        if (((*(byte *)(iVar7 + 0x10) & 2) == 0) &&
           ((*(uint *)(*(int *)(iVar7 + 8) + 0x10) & 0x20000) == 0)) {
          if ((*(byte *)(param_3 + 0x13) & 0x80) == 0) {
            pvVar8 = *(HGDIOBJ *)(param_4 + 8);
          }
          else {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0x10);
          }
        }
        else if ((*(byte *)(param_3 + 0x13) & 0x80) == 0) {
          pvVar8 = *(HGDIOBJ *)(param_4 + 0xc);
        }
        else {
          pvVar8 = *(HGDIOBJ *)(param_4 + 0x14);
        }
        SelectObject(param_1,pvVar8);
        FUN_00475560(param_1,&local_18,piVar1[9]);
        if ((iVar9 != 0) && (piVar1[0x1f] != 0)) {
          uVar3 = *(undefined4 *)(param_4 + 0x38);
          __alldiv(uVar3,*(undefined4 *)(param_4 + 0x3c),2,0);
          iVar7 = ftol();
          iVar7 = iVar7 + *(int *)(param_4 + 0x44);
          if (iVar7 < -0x4000) {
            local_18 = -0x4000;
          }
          else {
            local_18 = 0x3fff;
            if (iVar7 < 0x4000) {
              local_18 = iVar7;
            }
          }
          __alldiv(uVar3,*(undefined4 *)(param_4 + 0x3c),2,0);
          iVar7 = ftol();
          iVar7 = iVar7 + *(int *)(param_4 + 0x44);
          if (iVar7 < -0x4000) {
            local_10 = -0x4000;
          }
          else {
            local_10 = 0x3fff;
            if (iVar7 < 0x4000) {
              local_10 = iVar7;
            }
          }
          if ((float)piVar1[0x22] <= (float)_DAT_00610fd8) {
            local_40 = 0.0;
          }
          else {
            local_40 = (double)*(float *)(iVar9 + 0x60);
          }
          if ((float)piVar1[0x21] <= (float)_DAT_00610fd8) {
            local_48 = 0.0;
          }
          else {
            local_48 = (double)*(float *)(iVar9 + 0x60);
          }
          local_14 = FUN_00476330(iVar9,local_40._0_4_,(int)((ulonglong)local_40 >> 0x20));
          local_c = FUN_00476330(iVar9,local_48._0_4_,(int)((ulonglong)local_48 >> 0x20));
          MoveToEx(param_1,local_18,local_14,(LPPOINT)0x0);
          if ((param_3[0x13] & 0x400U) == 0) {
            pvVar8 = *(HGDIOBJ *)(param_4 + 8);
          }
          else {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0x10);
          }
          SelectObject(param_1,pvVar8);
          if (((*(byte *)(iVar9 + 0x10) & 2) == 0) &&
             ((*(uint *)(*(int *)(iVar9 + 8) + 0x10) & 0x20000) == 0)) {
            if ((param_3[0x13] & 0x400U) == 0) {
              pvVar8 = *(HGDIOBJ *)(param_4 + 8);
            }
            else {
              pvVar8 = *(HGDIOBJ *)(param_4 + 0x10);
            }
          }
          else if ((param_3[0x13] & 0x400U) == 0) {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0xc);
          }
          else {
            pvVar8 = *(HGDIOBJ *)(param_4 + 0x14);
          }
          SelectObject(param_1,pvVar8);
          FUN_00475560(param_1,&local_18,piVar1[0x1f]);
          return;
        }
      }
    }
  }
  return;
}


