/* Module: aviplug.dll
   Function: FUN_5f93bc90
   Address: 5f93bc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93bc90(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *this;
  uchar *_Source;
  int iVar3;
  int iVar4;
  int *unaff_EBP;
  _SYSTEM_INFO *p_Var5;
  bool bVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int **ppiVar9;
  undefined4 *local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  _SYSTEM_INFO local_24;
  
  this = param_1;
  local_3c = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_1[0x5d] != 0) {
    return param_1[0x5d];
  }
  if ((param_1[0x4d] == 0) && (param_1[0x4e] == 0)) {
    return -0x7fff0001;
  }
  local_38 = 0;
  p_Var5 = &local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    (p_Var5->u).dwOemId = 0;
    p_Var5 = (_SYSTEM_INFO *)&p_Var5->dwPageSize;
  }
  GetSystemInfo(&local_24);
  if (1 < local_24.dwNumberOfProcessors) {
    local_38 = 1;
  }
  this[0x10c] = 1;
  piVar1 = this + 0x10e;
  this[0x110] = 0;
  *piVar1 = 0;
  *(undefined1 *)(this + 0x62) = 0;
  this[0x10f] = 0;
  this[0x111] = 0;
  _Source = (uchar *)FUN_5f98ccf0((LPCSTR)(this + 4));
  _mbscpy((uchar *)(this + 0xc3),_Source);
  *_Source = '\0';
  _mbscpy((uchar *)(this + 0x82),(uchar *)(this + 4));
  _mbscpy(_Source,(uchar *)(this + 0xc3));
  _mbscpy((uchar *)(this + 0xcb),(uchar *)(this + 4));
  piVar2 = (int *)this[3];
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    local_34 = (undefined4 *)0x0;
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_34);
    if (-1 < iVar3) {
      ppiVar9 = &param_1;
      puVar8 = &DAT_5f9d9e00;
      puVar7 = local_34;
      iVar3 = (**(code **)*local_34)(local_34,&DAT_5f9d9e00);
      if (-1 < iVar3) {
        iVar4 = (**(code **)(*(int *)local_24.dwAllocationGranularity + 0x18))
                          (local_24.dwAllocationGranularity,0x2714,0);
        bVar6 = ppiVar9 != (int **)0x0;
        ppiVar9 = (int **)0x0;
        if (bVar6) {
          iVar3 = (**(code **)(*(int *)local_24.dwActiveProcessorMask + 0x18))
                            (local_24.dwActiveProcessorMask,0x271d,0);
          ppiVar9 = (int **)(uint)(iVar3 == 0);
        }
        (**(code **)(*(int *)local_24.dwActiveProcessorMask + 8))(local_24.dwActiveProcessorMask);
        local_24.dwAllocationGranularity = 0;
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP,puVar7,puVar8,ppiVar9);
    }
  }
  iVar4 = FUN_5f93e610(&local_3c,(uchar *)(this + 4),this[0x53],iVar4);
  if ((-1 < iVar4) &&
     (iVar4 = (**(code **)(*this + 0x70))(this,local_3c,piVar1), piVar2 = param_2, -1 < iVar4)) {
    if ((*piVar1 == 0) && (this[0x10f] == 0)) {
      iVar4 = -0x7ffb1fb0;
    }
    else {
      iVar4 = (**(code **)(*param_2 + 0xc))(param_2,0,*piVar1,this[0x10f]);
      if (((-1 < iVar4) && (iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,0,0), -1 < iVar4)) &&
         (iVar4 = FUN_5f93f6e0((uint)local_3c), -1 < iVar4)) {
        local_30 = 1;
        if (this[0x54] == 0) {
          if ((this[0x56] != 0) && (0 < this[0x48])) {
            if (local_38 == 0) {
              iVar4 = (**(code **)(*this + 0x8c))(this,local_3c,piVar2,&local_2c);
            }
            else {
              iVar4 = (**(code **)(*this + 0x90))();
            }
            if (iVar4 != 0x4e822) goto LAB_5f93bf0e;
          }
          if (this[0x52] == 0) {
            iVar4 = (**(code **)(*this + 0x80))(this,local_3c,piVar2,&local_2c);
          }
          else {
            iVar4 = (**(code **)(*this + 0x78))();
          }
        }
        else {
          iVar4 = (**(code **)(*this + 0x7c))(this,local_3c,piVar2,&local_2c);
        }
      }
    }
  }
LAB_5f93bf0e:
  if (local_3c != (undefined4 *)0x0) {
    bVar6 = false;
    if ((-1 < local_28) && ((0 < local_28 || (local_2c != 0)))) {
      iVar3 = FUN_5f93f330((DWORD)local_3c);
      if (iVar3 < 0) {
        if (iVar4 == -0x7ffb1ff4) {
          iVar4 = iVar3;
        }
      }
      else {
        bVar6 = true;
      }
      if (-1 < iVar4) {
        iVar4 = iVar3;
      }
    }
    FUN_5f93e510(local_3c);
    if ((local_30 != 0) && (!bVar6)) {
      DeleteFileA((LPCSTR)(this + 0xcb));
    }
  }
  if (-1 < iVar4) {
    piVar1 = this + 4;
    FUN_5f93c070(this,piVar1,1,&param_1);
    iVar4 = FUN_5f98b8e0((uchar *)piVar1,1,param_1,(int *)this[0x60]);
    if (-1 < iVar4) {
      iVar4 = FUN_5f98c7c0((uchar *)piVar1,(undefined4 *)this[0x60],1);
    }
  }
  return iVar4;
}


