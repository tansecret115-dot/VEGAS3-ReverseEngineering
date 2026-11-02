/* Module: mcplugrw.dll
   Function: FUN_00405610
   Address: 00405610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405610(HWND param_1,int param_2)

{
  uchar *puVar1;
  int *this;
  HWND hWnd;
  int iVar2;
  LPCSTR pCVar3;
  LPCSTR pCVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  DWORD DVar8;
  UINT UVar9;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  HKEY__ local_40 [16];
  
  hWnd = param_1;
  this = DAT_004a8128;
  uVar7 = 2;
  FUN_004055a0(param_1,(LPSTR)local_40,0x19);
  iVar2 = lstrcmpA((LPCSTR)local_40,"");
  if (iVar2 == 0) {
    UVar9 = 0x30;
    pCVar3 = FUN_0041f9f0(DAT_004a811c,0x276c);
    pCVar4 = FUN_0041f9f0(DAT_004a811c,0x276d);
    MessageBoxA(hWnd,pCVar4,pCVar3,UVar9);
    return 2;
  }
  FUN_004142c0((int)this);
  iVar2 = FUN_00412e90(this,&local_54,(uint *)&param_1,local_40,&local_50,(undefined4 *)0x0);
  if ((((iVar2 < 0) && (iVar2 != -0x7ffb1ecb)) && (iVar2 != -0x7ffb1eb2)) ||
     (iVar5 = FUN_00406230((int)param_1,local_50), iVar5 != 0)) {
    iVar5 = param_2;
    if (0 < iVar2) {
      switch(iVar2) {
      case 0x4e12c:
      case 0x4e12d:
      case 0x4e12e:
      case 0x4e131:
      case 0x4e132:
        puVar1 = (uchar *)(param_2 + 0x10b);
        _mbscpy(puVar1,(uchar *)local_40);
        iVar2 = FUN_00411eb0(this,puVar1);
        if (-1 < iVar2) {
          *(uint *)(iVar5 + 0x170) = (uint)param_1 & 0xffff;
          uVar6 = FUN_00410900(this);
          *(uint *)(iVar5 + 0x174) = uVar6 & 0xffff;
          *(int *)(iVar5 + 0x1dc) = local_54;
          uVar7 = 1;
          FUN_00411740(this,0);
        }
        FUN_00412cf0(this,(HKEY)0x1,(HKEY)param_1);
        FUN_00413180(this,param_1,param_1);
        FUN_00412f90(this,&local_48,&local_4c,1);
        return uVar7;
      case 0x4e12f:
      case 0x4e130:
        goto switchD_004056f3_caseD_8004e135;
      default:
        goto switchD_004056f3_caseD_8004e132;
      case 0x4e136:
      case 0x4e137:
        goto switchD_004056f3_caseD_8004e14e;
      }
    }
    if (iVar2 != 0) goto LAB_004056dc;
switchD_004056f3_caseD_8004e135:
    iVar2 = param_2;
    puVar1 = (uchar *)(param_2 + 0x10b);
    _mbscpy(puVar1,(uchar *)local_40);
    iVar5 = FUN_00411eb0(this,puVar1);
    if (iVar5 < 0) goto LAB_00405896;
    *(uint *)(iVar2 + 0x170) = (uint)param_1 & 0xffff;
    uVar6 = FUN_00410900(this);
    *(uint *)(iVar2 + 0x174) = uVar6 & 0xffff;
    *(int *)(iVar2 + 0x1dc) = local_54;
    DVar8 = 0;
  }
  else {
    iVar2 = -0x7ffb1ed3;
LAB_004056dc:
    switch(iVar2) {
    case -0x7ffb1ed3:
    case -0x7ffb1ed2:
    case -0x7ffb1ed1:
    case -0x7ffb1ed0:
    case -0x7ffb1ecf:
    case -0x7ffb1ecd:
    case -0x7ffb1ecc:
      FUN_00405190(hWnd,iVar2);
      return 2;
    default:
switchD_004056f3_caseD_8004e132:
      iVar5 = param_2;
      if (iVar2 < 0) {
        UVar9 = 0x30;
        pCVar4 = &DAT_004a82d5;
        pCVar3 = FUN_0041f9f0(DAT_004a811c,0x2732);
        MessageBoxA(hWnd,pCVar3,pCVar4,UVar9);
      }
      else {
        puVar1 = (uchar *)(param_2 + 0x10b);
        _mbscpy(puVar1,(uchar *)local_40);
        iVar2 = FUN_00411eb0(this,puVar1);
        if (-1 < iVar2) {
          *(uint *)(iVar5 + 0x170) = (uint)param_1 & 0xffff;
          uVar6 = FUN_00410900(this);
          *(int *)(iVar5 + 0x1dc) = local_54;
          *(uint *)(iVar5 + 0x174) = uVar6 & 0xffff;
          FUN_00411740(this,0);
          FUN_00412cf0(this,(HKEY)0x1,(HKEY)param_1);
          FUN_00413180(this,param_1,param_1);
          FUN_00412f90(this,&local_44,&param_2,1);
          return 1;
        }
      }
      return 2;
    case -0x7ffb1ecb:
      goto switchD_004056f3_caseD_8004e135;
    case -0x7ffb1eb2:
    case -0x7ffb1eb1:
switchD_004056f3_caseD_8004e14e:
      iVar2 = param_2;
      iVar5 = FUN_00405370(param_2,(int)param_1,local_50);
      if (iVar5 == 0) {
        return 2;
      }
      _mbscpy((uchar *)(iVar2 + 0x10b),(uchar *)local_40);
      iVar5 = FUN_00411eb0(this,(uchar *)(iVar2 + 0x10b));
      if (iVar5 < 0) goto LAB_00405896;
      *(uint *)(iVar2 + 0x170) = (uint)param_1 & 0xffff;
      uVar6 = FUN_00410900(this);
      *(uint *)(iVar2 + 0x174) = uVar6 & 0xffff;
      *(int *)(iVar2 + 0x1dc) = local_54;
      DVar8 = 1;
    }
  }
  uVar7 = 1;
  FUN_00411740(this,DVar8);
LAB_00405896:
  FUN_00412cf0(this,(HKEY)0x1,(HKEY)param_1);
  FUN_00413180(this,param_1,param_1);
  FUN_00412f90(this,&local_48,&local_4c,1);
  return uVar7;
}


