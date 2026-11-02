/* Module: qt4plug.dll
   Function: FUN_5f51e520
   Address: 5f51e520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51e7bb) */
/* WARNING: Removing unreachable block (ram,0x5f51e86c) */
/* WARNING: Removing unreachable block (ram,0x5f51e7c6) */
/* WARNING: Removing unreachable block (ram,0x5f51e7d3) */
/* WARNING: Removing unreachable block (ram,0x5f51e7db) */
/* WARNING: Removing unreachable block (ram,0x5f51e7f9) */
/* WARNING: Removing unreachable block (ram,0x5f51e812) */
/* WARNING: Removing unreachable block (ram,0x5f51e847) */
/* WARNING: Removing unreachable block (ram,0x5f51e84e) */

int __thiscall FUN_5f51e520(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_38;
  int local_2c;
  int local_28 [10];
  
  piVar2 = local_28;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_38 = -0x7ff8fff2;
  bVar1 = true;
  FUN_5f576650();
  if (local_2c != 0x76696465) {
    return -0x7ff8ffa9;
  }
  piVar2 = (int *)FUN_5f57af10();
  if (piVar2 == (int *)0x0) goto LAB_5f51e887;
  FUN_5f576730();
  FUN_5f51e3e0(piVar2,0,local_28);
  lstrcpynA((LPSTR)((int)this + 0x80),(LPCSTR)(*piVar2 + 0x33),0x104);
  iVar5 = (int)*(short *)(*piVar2 + 0x52);
  *(int *)((int)this + 0x1c0) = iVar5;
  if (0x20 < iVar5) {
    *(int *)((int)this + 0x1c0) = iVar5 + -0x20;
  }
  iVar5 = 2;
  if (param_1[6] < 2) {
LAB_5f51e629:
    if (*(LPCVOID *)((int)this + 0x44) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x44));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x44));
      GlobalFree(pvVar3);
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    local_38 = FUN_5f51e910(piVar2,param_1 + 1);
    if (((-1 < local_38) && (local_38 = FUN_5f51e450((int)this), -1 < local_38)) &&
       (local_38 = FUN_5f51e290((int)param_1,(int)piVar2), -1 < local_38)) {
      if (*(int *)((int)this + 0x1d4) != 0) {
LAB_5f51e6d1:
        *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(*piVar2 + 4);
        **(undefined4 **)((int)this + 0x1d4) = 0x48;
        iVar5 = *(int *)((int)this + 0x1d4);
        *(undefined4 *)(iVar5 + 4) = DAT_5f5a3eb0;
        *(undefined4 *)(iVar5 + 8) = DAT_5f5a3eb4;
        *(undefined4 *)(iVar5 + 0xc) = DAT_5f5a3eb8;
        *(undefined4 *)(iVar5 + 0x10) = DAT_5f5a3ebc;
        *(undefined4 *)(*(int *)((int)this + 0x1d4) + 0x14) = *(undefined4 *)(*piVar2 + 4);
        *(undefined4 *)(*(int *)((int)this + 0x1d4) + 0x18) = *(undefined4 *)((int)this + 0x1c0);
        *(int *)(*(int *)((int)this + 0x1d4) + 0x1c) = local_28[1];
        *(int *)(*(int *)((int)this + 0x1d4) + 0x20) = local_28[2];
        iVar5 = *(int *)((int)this + 0x1d4);
        *(undefined4 *)(iVar5 + 0x30) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x34) = 0xffffffff;
        *(undefined4 *)(*(int *)((int)this + 0x1d4) + 0x38) = 0;
        param_1[0xf] = 0;
        FUN_5f577850();
        do {
          param_1[0xf] = param_1[0xf] + 1;
          FUN_5f577850();
        } while( true );
      }
      puVar4 = calloc(1,0x58);
      *(undefined4 **)((int)this + 0x1d4) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined4 *)(*(int *)((int)this + 0x1d4) + 0x40) = 0x10;
        goto LAB_5f51e6d1;
      }
      local_38 = -0x7ff8fff2;
    }
  }
  else {
    do {
      FUN_5f576730();
      if ((*(short *)(*piVar2 + 0x20) != local_28[1]) || (*(short *)(*piVar2 + 0x22) != local_28[2])
         ) {
        bVar1 = false;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= param_1[6]);
    if (bVar1) goto LAB_5f51e629;
    local_38 = -0x7fffbfff;
  }
  FUN_5f57b390();
  if (-1 < local_38) {
    return local_38;
  }
LAB_5f51e887:
  if (param_1[0xd] != 0) {
    FUN_5f580d20();
    param_1[0xd] = 0;
  }
  if ((LPCVOID)param_1[0xe] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xe]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xe]);
    GlobalFree(pvVar3);
    param_1[0xe] = 0;
  }
  param_1[0xf] = 0;
  if ((LPCVOID)param_1[1] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalFree(pvVar3);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_5f57c110();
    *param_1 = 0;
  }
  return local_38;
}


