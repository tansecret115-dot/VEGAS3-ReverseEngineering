/* Module: vfplugs.dll
   Function: FUN_00404020
   Address: 00404020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00404020(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  LPVOID pvVar5;
  int *unaff_EBP;
  
  if (*(LPCVOID *)((int)this + 700) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalFree(pvVar3);
    *(undefined4 *)((int)this + 0x2b8) = 0;
    *(undefined4 *)((int)this + 700) = 0;
  }
  piVar1 = (int *)((int)this + 0x2b8);
  *piVar1 = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))(param_1,this,0x2b8,0);
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,piVar1,4,0);
    if (-1 < iVar4) {
      iVar2 = *piVar1;
      if (0 < iVar2) {
        if (*(LPCVOID *)((int)this + 700) != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
          GlobalFree(pvVar3);
          *piVar1 = 0;
          *(undefined4 *)((int)this + 700) = 0;
        }
        if (0 < iVar2) {
          pvVar3 = GlobalAlloc(2,iVar2 * 2);
          pvVar5 = GlobalLock(pvVar3);
          *(LPVOID *)((int)this + 700) = pvVar5;
        }
        *piVar1 = iVar2;
        if (*(int *)((int)this + 700) == 0) {
          iVar4 = -0x7ff8fff2;
          goto LAB_00404120;
        }
        iVar4 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,*(int *)((int)this + 700),iVar2 * 2,0);
      }
      if (-1 < iVar4) {
        return 0;
      }
    }
  }
LAB_00404120:
  if (*(LPCVOID *)((int)this + 700) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalFree(pvVar3);
    *piVar1 = 0;
    *(undefined4 *)((int)this + 700) = 0;
  }
  *piVar1 = 0;
  return iVar4;
}


