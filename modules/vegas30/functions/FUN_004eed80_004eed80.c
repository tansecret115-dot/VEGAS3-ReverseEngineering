/* Module: vegas30.exe
   Function: FUN_004eed80
   Address: 004eed80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004eed80(uchar *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uchar *_Source;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int local_680;
  int local_67c;
  int *local_678;
  int local_674;
  int local_670;
  int local_66c;
  int iStack_668;
  undefined4 uStack_664;
  uchar auStack_660 [12];
  undefined1 local_654 [32];
  undefined1 local_634 [128];
  undefined1 local_5b4 [260];
  uchar local_4b0 [420];
  uchar auStack_30c [259];
  undefined1 uStack_209;
  WCHAR local_208 [260];
  
  local_66c = FUN_005ec620();
  if (local_66c == 0) {
    iVar1 = -0x7ff8fff2;
  }
  else {
    local_680 = 0;
    FUN_004f0620(param_1,param_1);
    iVar1 = FUN_005ec8a0(param_1,&local_680,4,0);
    if ((-1 < iVar1) && (iVar1 = FUN_005ed3f0(local_680), -1 < iVar1)) {
      local_678 = (int *)0x0;
      iVar1 = FUN_005f1150(&local_678);
      if (-1 < iVar1) {
        local_67c = 0x103;
        *param_1 = '\0';
        local_670 = 0;
        local_674 = 0;
        do {
          if (local_670 == 0) {
            iVar2 = FUN_005f13f0(3);
            local_670 = 1;
          }
          else {
            if (local_674 != 0) goto LAB_004ef1c4;
            iVar2 = FUN_005f13f0(2);
            local_674 = 1;
          }
          if (iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 4);
            local_4b0[0] = '\0';
            if (iVar1 == 0) {
              uVar10 = *(undefined4 *)(iVar2 + 0x10);
              uVar6 = _SfGetString_8(DAT_00647204,0x6d7b);
              SfPrintF(local_4b0,uVar6,uVar10);
            }
            else if (iVar1 == 2) {
              _SfLoadString_16(DAT_00647204,0x6da8,local_5b4,0x104);
              if ((*(byte *)(iVar2 + 0x8c) & 2) == 0) {
                iVar1 = FUN_005f7af0(local_634,0x80);
                if (iVar1 < 0) {
                  local_634[0] = 0;
                }
                iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 4);
                if (iVar1 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_664 = 0;
                  iStack_668 = iVar1;
                  uVar8 = ftol();
                }
                _SfNanoTimeToTextEx_20(local_654,&DAT_0064b110,uVar8,2);
                SfPrintF(local_4b0,"%s: %s$, %s",local_5b4,local_634,local_654);
              }
              else {
                uVar10 = _SfGetString_8(DAT_00647204,0x6d6e);
                SfPrintF(local_4b0,"%s: %s",local_5b4,uVar10);
              }
            }
            else if (iVar1 == 3) {
              _SfLoadString_16(DAT_00647204,0x6da9,local_5b4,0x104);
              if ((*(byte *)(iVar2 + 0x8c) & 2) == 0) {
                iVar1 = FUN_005f7af0(local_634,0x80);
                if (iVar1 < 0) {
                  local_634[0] = 0;
                }
                if (*(double *)(iVar2 + 0x48) != _DAT_00610fd8) {
                  uVar10 = 2;
                  uVar8 = ftol(2);
                  _SfNanoTimeToTextEx_20(local_654,&DAT_0064b110,uVar8,uVar10);
                  uVar10 = *(undefined4 *)(iVar2 + 0x4c);
                  uVar6 = *(undefined4 *)(iVar2 + 0x48);
                  puVar3 = local_654;
                  puVar5 = local_634;
                  puVar9 = local_5b4;
                  uVar4 = _SfGetString_8(DAT_00647204,0x4f3b);
                  SfPrintF(local_4b0,uVar4,puVar9,puVar5,uVar6,uVar10,puVar3);
                  goto LAB_004ef090;
                }
                puVar3 = local_634;
                puVar5 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6622);
              }
              else {
                puVar3 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6d6e);
                puVar5 = local_5b4;
              }
              SfPrintF(local_4b0,"%s: %s",puVar5,puVar3);
            }
LAB_004ef090:
            local_208[0] = L'\0';
            _Source = (uchar *)0x0;
            iVar1 = (**(code **)(*local_678 + 0x14))
                              (local_678,local_208,0x104,*(undefined4 *)(iVar2 + 0x10),1);
            if ((-1 < iVar1) && (local_208[0] != L'\0')) {
              WideCharToMultiByte(0,0,local_208,-1,(LPSTR)auStack_30c,0x104,(LPCSTR)0x0,(LPBOOL)0x0)
              ;
              uStack_209 = 0;
              _Source = auStack_30c;
            }
            iVar2 = local_67c;
            if ((*param_1 != '\0') && (0 < local_67c)) {
              _mbscat(param_1,"\n");
              iVar2 = iVar2 + -1;
            }
            iVar7 = lstrlenA((LPCSTR)local_4b0);
            iVar2 = iVar2 - iVar7;
            if ((iVar2 < 0) || (local_67c = iVar2, iVar2 == 0)) goto LAB_004ef1c4;
            _mbscat(param_1,local_4b0);
            if (_Source != (uchar *)0x0) {
              SfPrintF(auStack_660,&DAT_00614240);
              iVar2 = lstrlenA((LPCSTR)_Source);
              iVar7 = lstrlenA((LPCSTR)auStack_660);
              if (iVar2 + iVar7 != 0) {
                iVar2 = local_67c - (iVar2 + iVar7);
                if ((iVar2 < 0) || (local_67c = iVar2, iVar2 == 0)) goto LAB_004ef1c4;
                _mbscat(param_1,auStack_660);
                _mbscat(param_1,_Source);
              }
            }
          }
        } while( true );
      }
      goto LAB_004ef20b;
    }
  }
  return iVar1;
LAB_004ef1c4:
  _SfList_CreateExZ_32(param_1 + 0x108,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  FUN_005f2ad0(*(undefined4 *)(local_680 + 0x14c),*(undefined4 *)(param_1 + 0x108),0);
  (**(code **)(*local_678 + 8))(local_678);
  local_678 = (int *)0x0;
LAB_004ef20b:
  FUN_005ed410(local_680,0,0);
  _SfErrorHandler_DetailsInit_0();
  return iVar1;
}


