/* Module: vidcap30.exe
   Function: FUN_004550d0
   Address: 004550d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004550d0(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uchar *puVar4;
  int *local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  undefined4 local_130;
  int local_12c;
  undefined2 auStack_128 [4];
  LPCWSTR pWStack_120;
  uchar local_118;
  uchar local_117 [2];
  uchar auStack_115 [256];
  undefined1 uStack_15;
  undefined1 auStack_14 [16];
  int local_4;
  
  local_118 = '\0';
  puVar4 = local_117;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  local_130 = 0;
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  local_134 = (int *)0x0;
  local_138 = (int *)0x0;
  local_140 = (int *)0x0;
  local_13c = (int *)0x0;
  if (*param_1 == 0) {
    iVar1 = _SfList_CreateExZ_32(param_1,0x118,0xffffffff,0xffffffff,0x40000004,0,0,0);
  }
  else {
    iVar1 = _SfList_DeleteList_16(*param_1,0,0xffffffff,0);
  }
  if (-1 < iVar1) {
    iVar1 = *param_1;
    local_12c = iVar1;
    _mbscpy(&local_118,(uchar *)"No Capture Device");
    local_4 = 0;
    iVar1 = _SfList_InsertList_16(iVar1,0xffffffff,&local_118,1);
    if (-1 < iVar1) {
      iVar3 = 1;
      iVar1 = CoCreateInstance((IID *)&DAT_005a2d68,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1d18,&local_134
                              );
      if (-1 < iVar1) {
        puVar2 = &DAT_005a2d48;
        if (param_2 == 0) {
          puVar2 = &DAT_005a2cc8;
        }
        iVar1 = (**(code **)(*local_134 + 0xc))(local_134,puVar2,&local_138,0);
        if (iVar1 == 0) {
          (**(code **)(*local_138 + 0x14))(local_138);
          iVar1 = (**(code **)(*local_13c + 0xc))(local_13c,1,&stack0xfffffebc,&local_134);
          while (iVar1 == 0) {
            puVar4 = &local_118;
            for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
              puVar4[0] = '\0';
              puVar4[1] = '\0';
              puVar4[2] = '\0';
              puVar4[3] = '\0';
              puVar4 = puVar4 + 4;
            }
            local_4 = iVar3;
            iVar1 = (**(code **)(*local_140 + 0xc))(local_140,auStack_14);
            if (iVar1 < 0) break;
            iVar1 = (**(code **)(*local_140 + 0x24))(local_140,0,0,&DAT_005a5b08,&local_13c);
            if (-1 < iVar1) {
              auStack_128[0] = 8;
              iVar1 = (**(code **)(*local_13c + 0xc))
                                (local_13c,&PTR_Rsrc_Bitmap_32_409_ImageData_24094__0058bdcc,
                                 auStack_128,0);
              if (iVar1 == 0) {
                if ((pWStack_120 == (LPCWSTR)0x0) || (*pWStack_120 != L'\0')) {
                  WideCharToMultiByte(0,0,pWStack_120,-1,(LPSTR)&local_118,0x104,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                else if (&stack0x00000000 != (undefined1 *)0x118) {
                  local_118 = '\0';
                }
                uStack_15 = 0;
                Ordinal_6(pWStack_120);
                iVar1 = _SfList_InsertList_16(local_12c,0xffffffff,&local_118,1);
                if (iVar1 < 0) break;
              }
              if (local_13c != (int *)0x0) {
                (**(code **)(*local_13c + 8))(local_13c);
              }
              local_13c = (int *)0x0;
            }
            if (local_140 != (int *)0x0) {
              (**(code **)(*local_140 + 8))(local_140);
            }
            local_140 = (int *)0x0;
            iVar3 = iVar3 + 1;
            iVar1 = (**(code **)(*local_138 + 0xc))(local_138,1,&local_140,&local_130);
          }
        }
      }
      if (local_13c != (int *)0x0) {
        (**(code **)(*local_13c + 8))(local_13c);
      }
      local_13c = (int *)0x0;
      if (local_140 != (int *)0x0) {
        (**(code **)(*local_140 + 8))(local_140);
      }
      local_140 = (int *)0x0;
      if (local_138 != (int *)0x0) {
        (**(code **)(*local_138 + 8))(local_138);
      }
      local_138 = (int *)0x0;
      if (local_134 != (int *)0x0) {
        (**(code **)(*local_134 + 8))(local_134);
      }
    }
  }
  return iVar1;
}


