/* Module: vegas30k.dll
   Function: SfWtsIsAdmin
   Address: 01003980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWtsIsAdmin(void) */

int SfWtsIsAdmin(void)

{
  int iVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  BOOL BVar4;
  HLOCAL pvVar5;
  HLOCAL pvVar6;
  SIZE_T uBytes;
  undefined4 uVar7;
  undefined4 uVar8;
  HANDLE *ppvVar9;
  undefined1 local_70 [20];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  HANDLE local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  SIZE_T local_2c;
  undefined4 local_28;
  HLOCAL local_24;
  int local_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x3980  526  ?SfWtsIsAdmin@@YGHXZ */
  local_8 = 0xffffffff;
  puStack_c = &DAT_011daf78;
  puStack_10 = &DAT_011d81dc;
  local_14 = ExceptionList;
  local_20[0] = 0;
  ExceptionList = &local_14;
  iVar1 = _SfOSVersionOK_4(5);
  if (iVar1 != 0) {
    local_28 = 0x14;
    local_24 = (HLOCAL)0x0;
    local_38 = 0;
    iVar1 = FUN_01003820();
    if (-1 < iVar1) {
      local_4c = 0;
      local_4b = 0;
      local_4a = 0;
      local_49 = 0;
      local_48 = 0;
      local_47 = 5;
      local_8 = 0;
      (*DAT_01209164)(2);
      ppvVar9 = &local_44;
      uVar8 = 0;
      uVar7 = 8;
      pvVar2 = GetCurrentThread();
      iVar1 = (*DAT_01209174)(pvVar2,uVar7,uVar8,ppvVar9);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x3f0) {
          ppvVar9 = &local_44;
          DVar3 = 8;
          pvVar2 = GetCurrentProcess();
          BVar4 = OpenProcessToken(pvVar2,DVar3,ppvVar9);
          if (BVar4 != 0) goto LAB_01003a3d;
        }
      }
      else {
LAB_01003a3d:
        iVar1 = (*DAT_01209158)(&local_4c,2,0x20,0x220,0,0,0,0,0,0,&local_38);
        if (iVar1 != 0) {
          pvVar5 = LocalAlloc(0x40,0x14);
          if (pvVar5 != (HLOCAL)0x0) {
            iVar1 = (*DAT_0120916c)(pvVar5,1);
            if (iVar1 != 0) {
              iVar1 = (*DAT_01209160)(local_38);
              uBytes = iVar1 + 0x10;
              local_2c = uBytes;
              pvVar6 = LocalAlloc(0x40,uBytes);
              local_24 = pvVar6;
              if (pvVar6 != (HLOCAL)0x0) {
                iVar1 = (*DAT_01209168)(pvVar6,uBytes,2);
                if (iVar1 != 0) {
                  local_40 = 3;
                  iVar1 = (*DAT_01209154)(pvVar6,2,3,local_38);
                  if (iVar1 != 0) {
                    iVar1 = (*DAT_01209184)(pvVar5,1,pvVar6,0);
                    if (iVar1 != 0) {
                      (*DAT_0120917c)(pvVar5,local_38,0);
                      (*DAT_01209180)(pvVar5,local_38,0);
                      iVar1 = (*DAT_01209170)(pvVar5);
                      if (iVar1 != 0) {
                        local_3c = 1;
                        local_5c = 1;
                        local_58 = 2;
                        local_54 = 0;
                        local_50 = 3;
                        iVar1 = (*DAT_01209150)(pvVar5,local_44,1,&local_5c,local_70,&local_28,
                                                local_34,local_20);
                        if (iVar1 != 0) {
                          (*DAT_01209178)();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_01003b70();
      goto LAB_01003b9e;
    }
  }
  local_20[0] = 1;
LAB_01003b9e:
  FUN_010037d0();
  ExceptionList = local_14;
  return local_20[0];
}


