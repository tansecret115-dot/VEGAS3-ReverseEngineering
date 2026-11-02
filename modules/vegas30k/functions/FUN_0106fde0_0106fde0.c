/* Module: vegas30k.dll
   Function: FUN_0106fde0
   Address: 0106fde0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0106fde0(int param_1,HANDLE param_2,int param_3,HANDLE param_4,DWORD param_5,int param_6,
            LPCSTR param_7)

{
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
  LPVOID lpBuffer_00;
  HANDLE nNumberOfBytesToRead;
  BOOL BVar2;
  int iVar3;
  undefined4 unaff_EBP;
  HANDLE pvVar4;
  code *pcVar5;
  LPVOID *ppvVar6;
  bool bVar7;
  bool bVar8;
  HANDLE hFile;
  int local_28c;
  FILETIME local_280;
  HANDLE local_278;
  int local_274;
  HANDLE local_270;
  HANDLE local_26c;
  int local_268;
  HANDLE pvStack_264;
  uint local_260;
  int local_25c;
  int local_258;
  uint uStack_254;
  HANDLE pvStack_250;
  DWORD DStack_24c;
  LPVOID local_248 [4];
  uint uStack_238;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  DWORD DStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_28c = 0;
  local_270 = (HANDLE)0x0;
  pvVar1 = GlobalAlloc(0x42,0x40004);
  lpBuffer = GlobalLock(pvVar1);
  if (lpBuffer == (LPVOID)0x0) {
    FUN_01070600(0xaaaaaaa3,"ExtractInternalZipCompression",0);
    return 0x8007000e;
  }
  pvVar1 = GlobalAlloc(0x42,0x46666);
  lpBuffer_00 = GlobalLock(pvVar1);
  if (lpBuffer_00 == (LPVOID)0x0) {
    FUN_01070600(0xaaaaaaa3,"ExtractInternalZipCompression",0);
    pcVar5 = GlobalHandle_exref;
  }
  else {
    local_26c = CreateFileA(param_7,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (local_26c == (HANDLE)0xffffffff) {
      FUN_01070600(0xaaaaaaa2,"ExtractInternalZipCompression",0);
    }
    else {
      local_258 = FUN_01149790(0,0,0);
      local_268 = FUN_01149790(0,0,0);
      local_278 = *(HANDLE *)(param_6 + 0x24);
      local_274 = *(int *)(param_6 + 0x28);
      ppvVar6 = local_248;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppvVar6 = (LPVOID)0x0;
        ppvVar6 = ppvVar6 + 1;
      }
      local_280.dwLowDateTime = 0;
      local_280.dwHighDateTime = 0;
      local_260 = 0;
      local_25c = 0;
      local_228 = 0;
      local_224 = 0;
      local_220 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)(param_6 + 0x54),-1,local_208,0x104);
        local_2 = 0;
        FUN_011496a0(local_208);
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa0);
      }
      if ((-1 < local_274) && ((0 < local_274 || (local_278 != (HANDLE)0x0)))) {
        iVar3 = FUN_0112ca70(local_248,0xfffffff1,"1.1.3",0x38);
        if (iVar3 == 0) {
          local_248[1] = (HANDLE)0x0;
          uStack_238 = 0x46666;
          pvVar4 = param_4;
          local_248[0] = lpBuffer;
          local_248[3] = lpBuffer_00;
LAB_0106ff57:
          if ((local_274 < 0) || ((local_274 < 1 && (local_278 == (HANDLE)0x0)))) {
            local_248[1] = (HANDLE)0x1;
LAB_010700d9:
            iVar3 = FUN_0112cba0(local_248,0);
            if ((iVar3 != 0) && (iVar3 != 1)) {
LAB_010701e1:
              FUN_01070600(0xaaaaaaa9,"ExtractInternalZipCompression",0);
              local_28c = -0x7ffb1ff7;
              goto LAB_010701fc;
            }
            if (uStack_238 < 0x46666) {
              BVar2 = WriteFile(local_26c,lpBuffer_00,0x46666 - uStack_238,&uStack_254,
                                (LPOVERLAPPED)0x0);
              if (BVar2 == 0) goto LAB_010701e1;
              local_258 = FUN_01149790(local_258,lpBuffer_00,uStack_254);
              bVar8 = CARRY4(local_260,uStack_254);
              local_260 = local_260 + uStack_254;
              uStack_238 = 0x46666;
              local_25c = local_25c + (uint)bVar8;
              local_248[3] = lpBuffer_00;
              if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(uStack_254,0);
                local_28c = FUN_011495e0();
                pvVar4 = param_4;
                if (local_28c == -0x7ffb1ff4) goto LAB_010701fc;
              }
            }
            if ((iVar3 == 1) || (local_28c < 0)) goto LAB_010701fc;
            goto LAB_0106ff57;
          }
          if (local_248[1] != (HANDLE)0x0) goto LAB_010700d9;
          nNumberOfBytesToRead = local_278;
          iVar3 = local_274;
          if ((-1 < local_274) && ((0 < local_274 || ((HANDLE)0x40000 < local_278)))) {
            nNumberOfBytesToRead = (HANDLE)0x40000;
            iVar3 = 0;
          }
          bVar8 = false;
          if (((int)param_5 <= iVar3) &&
             (((int)param_5 < iVar3 || (pvVar4 <= nNumberOfBytesToRead)))) {
            bVar8 = true;
            nNumberOfBytesToRead = pvVar4;
            DStack_20c = param_5;
          }
          hFile = param_2;
          if (local_270 != (HANDLE)0x0) {
            hFile = local_270;
          }
          BVar2 = ReadFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToRead,(LPDWORD)&pvStack_264,
                           (LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            FUN_01070600(0xaaaaaaaa,"ExtractInternalZipCompression",0);
            local_28c = -0x7ffb1ff8;
            goto LAB_010701fc;
          }
          local_268 = FUN_01149790(local_268,lpBuffer,pvStack_264);
          bVar7 = local_278 < pvStack_264;
          local_278 = (HANDLE)((int)local_278 - (int)pvStack_264);
          local_248[1] = pvStack_264;
          local_274 = local_274 - (uint)bVar7;
          bVar7 = CARRY4(local_280.dwLowDateTime,(uint)pvStack_264);
          local_280.dwLowDateTime = local_280.dwLowDateTime + (int)pvStack_264;
          local_280.dwHighDateTime = local_280.dwHighDateTime + bVar7;
          bVar7 = pvVar4 < pvStack_264;
          pvVar4 = (HANDLE)((int)pvVar4 - (int)pvStack_264);
          param_5 = param_5 - bVar7;
          param_4 = pvVar4;
          local_248[0] = lpBuffer;
          if ((!bVar8) || (*(int *)(param_1 + 0x898) <= param_3)) goto LAB_010700d9;
          if (local_270 != (HANDLE)0x0) {
            CloseHandle(local_270);
          }
          param_3 = param_3 + 1;
          FUN_010704e0(param_1 + 0x468,param_3,local_208);
          local_270 = CreateFileA((LPCSTR)local_208,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                  (HANDLE)0x0);
          if (local_270 != (HANDLE)0xffffffff) {
            pvVar4 = (HANDLE)GetFileSize(local_270,&DStack_24c);
            param_5 = DStack_24c;
            param_4 = pvVar4;
            pvStack_250 = pvVar4;
            goto LAB_010700d9;
          }
          FUN_01070600(0xaaaaaaa4,"ExtractInternalZipCompression",0);
          local_28c = -0x7ffb1ff3;
LAB_010701fc:
          iVar3 = FUN_0112ca20(local_248);
          if (iVar3 != 0) {
            FUN_01070600(0xaaaaaaa9,"ExtractInternalZipCompression",0);
            local_28c = -0x7ffb1ff7;
          }
        }
        else {
          FUN_01070600(0xaaaaaaa3,"ExtractInternalZipCompression",0);
          local_28c = -0x7ff8fff2;
        }
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x10))
                  (*(uint *)(param_6 + 0x2c) - local_260,
                   (*(int *)(param_6 + 0x30) - local_25c) -
                   (uint)(*(uint *)(param_6 + 0x2c) < local_260));
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0);
      }
      if (-1 < local_28c) {
        local_280.dwLowDateTime = *(uint *)(param_6 + 0x14);
        local_280.dwHighDateTime = *(DWORD *)(param_6 + 0x18);
        SetFileTime(local_26c,&local_280,&local_280,&local_280);
        SetFileAttributesA(param_7,*(DWORD *)(param_6 + 0x44));
        if ((local_258 != *(int *)(param_6 + 0x20)) || (local_268 != *(int *)(param_6 + 0x1c))) {
          FUN_01070600(0xaaaaaaaf,"ExtractInternalZipCompression",0);
        }
      }
      CloseHandle(local_26c);
    }
    pcVar5 = GlobalHandle_exref;
    pvVar1 = GlobalHandle(lpBuffer_00);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpBuffer_00);
    GlobalFree(pvVar1);
  }
  pvVar1 = (HGLOBAL)(*pcVar5)(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = (HGLOBAL)(*pcVar5)(lpBuffer);
  GlobalFree(pvVar1);
  if (local_278 != (HANDLE)0x0) {
    CloseHandle(local_278);
  }
  return unaff_EBP;
}


