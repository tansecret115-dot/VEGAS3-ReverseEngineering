/* Module: vegas30.exe
   Function: FUN_004ef2e0
   Address: 004ef2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004ef2e0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uchar *_Dest;
  uchar *_Source;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *local_4;
  
  iVar7 = 0;
  local_4 = (int *)0x0;
  iVar2 = _SfList_CreateExZ_32(&local_4,4,0x10,0x10,0x40000004,0,0,0);
  piVar6 = param_2;
  if (iVar2 < 0) {
    return (int *)0x1;
  }
  if (param_3 == 0) {
    iVar2 = *param_2;
    if (0 < iVar2) {
      do {
        FUN_004ef500(*(undefined4 *)(piVar6[2] + iVar7 * 4),local_4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  else {
    FUN_004ef500(param_3,local_4);
  }
  iVar2 = *local_4;
  piVar6 = (int *)0x1;
  param_3 = iVar2;
  if (iVar2 < 1) goto LAB_004ef4db;
  pvVar3 = GlobalAlloc(0x40,iVar2 * 0x106);
  _Dest = GlobalLock(pvVar3);
  if ((_Dest != (uchar *)0x0) && (iVar7 = 0, 0 < iVar2)) {
    do {
      _Source = (uchar *)FUN_005f2d10();
      _mbscat(_Dest,_Source);
      if (iVar7 != iVar2 + -1) {
        _mbscat(_Dest,"\r\n");
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  if (DAT_006495d8 == 0) {
LAB_004ef41f:
    param_2 = (int *)0x1;
    Transport_Suspend();
    iVar2 = DAT_0064b138;
    if (DAT_0064b138 != 0) {
      FUN_005b83b0(DAT_0064b138,1);
      iVar7 = 0;
      if (0 < param_3) {
        do {
          iVar1 = *(int *)(local_4[1] * iVar7 + local_4[2]);
          iVar5 = FUN_005f0120(1);
          if (-1 < iVar5) {
            FUN_005f1080(0,1);
            *(uint *)(iVar1 + 0x134) = *(uint *)(iVar1 + 0x134) | 0x82;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_3);
      }
      FUN_005b8da0(iVar2,1,1);
      DAT_0064767c = DAT_0064767c | 0x300;
      FUN_005b84d0(iVar2,1);
    }
    Transport_Resume(0);
  }
  else {
    param_2 = (int *)0x1;
    uVar8 = 0x1034;
    if (_Dest != (uchar *)0x0) {
      uVar8 = 0xd034;
    }
    puVar9 = &param_2;
    pcVar10 = 
    "Some of the files that would be deleted are currently being used by Vegas. Are you sure you want to delete the files and set them offline in Vegas?"
    ;
    uVar4 = _SfGetString_8(DAT_00647204,0x6d90);
    iVar2 = SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 0x184),uVar8,_Dest,uVar4,puVar9,pcVar10);
    DAT_006495d8 = (int)param_2;
    if (iVar2 == 6) goto LAB_004ef41f;
    param_2 = (int *)0x3;
  }
  piVar6 = param_2;
  if (_Dest != (uchar *)0x0) {
    pvVar3 = GlobalHandle(_Dest);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(_Dest);
    GlobalFree(pvVar3);
    piVar6 = param_2;
  }
LAB_004ef4db:
  _SfList_Destroy_4(local_4);
  return piVar6;
}


