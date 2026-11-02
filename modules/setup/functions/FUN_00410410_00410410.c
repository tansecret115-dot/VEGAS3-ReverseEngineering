/* Module: Setup.exe
   Function: FUN_00410410
   Address: 00410410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00410410(void *this,HANDLE param_1,int param_2,HANDLE param_3,DWORD param_4,int param_5,
            LPCSTR param_6)

{
  HGLOBAL pvVar1;
  byte *lpBuffer;
  byte *lpBuffer_00;
  HANDLE nNumberOfBytesToRead;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_EBP;
  HANDLE pvVar5;
  code *pcVar6;
  byte **ppbVar7;
  bool bVar8;
  bool bVar9;
  HANDLE hFile;
  int local_28c;
  FILETIME local_280;
  HANDLE local_278;
  int local_274;
  HANDLE local_270;
  HANDLE local_26c;
  uint local_268;
  HANDLE pvStack_264;
  uint local_260;
  int local_25c;
  uint local_258;
  uint uStack_254;
  HANDLE pvStack_250;
  DWORD DStack_24c;
  byte *local_248;
  HANDLE pvStack_244;
  byte *pbStack_23c;
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
  if (lpBuffer == (byte *)0x0) {
    FUN_00410c30(this,0xaaaaaaa3,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
    return 0x8007000e;
  }
  pvVar1 = GlobalAlloc(0x42,0x46666);
  lpBuffer_00 = GlobalLock(pvVar1);
  if (lpBuffer_00 == (byte *)0x0) {
    FUN_00410c30(this,0xaaaaaaa3,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
    pcVar6 = GlobalHandle_exref;
  }
  else {
    local_26c = CreateFileA(param_6,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (local_26c == (HANDLE)0xffffffff) {
      FUN_00410c30(this,0xaaaaaaa2,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
    }
    else {
      local_258 = FUN_0041d1e0(0,(byte *)0x0,0);
      local_268 = FUN_0041d1e0(0,(byte *)0x0,0);
      local_278 = *(HANDLE *)(param_5 + 0x24);
      local_274 = *(int *)(param_5 + 0x28);
      ppbVar7 = &local_248;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppbVar7 = (byte *)0x0;
        ppbVar7 = ppbVar7 + 1;
      }
      local_280.dwLowDateTime = 0;
      local_280.dwHighDateTime = 0;
      local_260 = 0;
      local_25c = 0;
      local_228 = 0;
      local_224 = 0;
      local_220 = 0;
      if (*(int *)((int)this + 0x20) != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)(param_5 + 0x54),-1,local_208,0x104);
        local_2 = 0;
        FUN_0041d0f0(*(void **)((int)this + 0x20),local_208);
        (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa0);
      }
      if ((-1 < local_274) && ((0 < local_274 || (local_278 != (HANDLE)0x0)))) {
        iVar4 = FUN_0041ea80((int)&local_248,0xfffffff1,"1.1.3",0x38);
        if (iVar4 == 0) {
          pvStack_244 = (HANDLE)0x0;
          uStack_238 = 0x46666;
          pvVar5 = param_3;
          local_248 = lpBuffer;
          pbStack_23c = lpBuffer_00;
LAB_00410587:
          if ((local_274 < 0) || ((local_274 < 1 && (local_278 == (HANDLE)0x0)))) {
            pvStack_244 = (HANDLE)0x1;
LAB_00410709:
            uVar3 = FUN_0041ebb0((int *)&local_248,0);
            if ((uVar3 != 0) && (uVar3 != 1)) {
LAB_00410811:
              FUN_00410c30(this,0xaaaaaaa9,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
              local_28c = -0x7ffb1ff7;
              goto LAB_0041082c;
            }
            if (uStack_238 < 0x46666) {
              BVar2 = WriteFile(local_26c,lpBuffer_00,0x46666 - uStack_238,&uStack_254,
                                (LPOVERLAPPED)0x0);
              if (BVar2 == 0) goto LAB_00410811;
              local_258 = FUN_0041d1e0(local_258,lpBuffer_00,uStack_254);
              bVar9 = CARRY4(local_260,uStack_254);
              local_260 = local_260 + uStack_254;
              uStack_238 = 0x46666;
              local_25c = local_25c + (uint)bVar9;
              pbStack_23c = lpBuffer_00;
              if (*(int **)((int)this + 0x20) != (int *)0x0) {
                (**(code **)(**(int **)((int)this + 0x20) + 0x10))(uStack_254,0);
                local_28c = FUN_0041d030(*(int *)((int)this + 0x20));
                pvVar5 = param_3;
                if (local_28c == -0x7ffb1ff4) goto LAB_0041082c;
              }
            }
            if ((uVar3 == 1) || (local_28c < 0)) goto LAB_0041082c;
            goto LAB_00410587;
          }
          if (pvStack_244 != (HANDLE)0x0) goto LAB_00410709;
          nNumberOfBytesToRead = local_278;
          iVar4 = local_274;
          if ((-1 < local_274) && ((0 < local_274 || ((HANDLE)0x40000 < local_278)))) {
            nNumberOfBytesToRead = (HANDLE)0x40000;
            iVar4 = 0;
          }
          bVar9 = false;
          if (((int)param_4 <= iVar4) &&
             (((int)param_4 < iVar4 || (pvVar5 <= nNumberOfBytesToRead)))) {
            bVar9 = true;
            nNumberOfBytesToRead = pvVar5;
            DStack_20c = param_4;
          }
          hFile = param_1;
          if (local_270 != (HANDLE)0x0) {
            hFile = local_270;
          }
          BVar2 = ReadFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToRead,(LPDWORD)&pvStack_264,
                           (LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            FUN_00410c30(this,0xaaaaaaaa,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
            local_28c = -0x7ffb1ff8;
            goto LAB_0041082c;
          }
          local_268 = FUN_0041d1e0(local_268,lpBuffer,(uint)pvStack_264);
          bVar8 = local_278 < pvStack_264;
          local_278 = (HANDLE)((int)local_278 - (int)pvStack_264);
          pvStack_244 = pvStack_264;
          local_274 = local_274 - (uint)bVar8;
          bVar8 = CARRY4(local_280.dwLowDateTime,(uint)pvStack_264);
          local_280.dwLowDateTime = local_280.dwLowDateTime + (int)pvStack_264;
          local_280.dwHighDateTime = local_280.dwHighDateTime + bVar8;
          bVar8 = pvVar5 < pvStack_264;
          pvVar5 = (HANDLE)((int)pvVar5 - (int)pvStack_264);
          param_4 = param_4 - bVar8;
          param_3 = pvVar5;
          local_248 = lpBuffer;
          if ((!bVar9) || (*(int *)((int)this + 0x898) <= param_2)) goto LAB_00410709;
          if (local_270 != (HANDLE)0x0) {
            CloseHandle(local_270);
          }
          param_2 = param_2 + 1;
          FUN_00410b10(this,(char *)((int)this + 0x468),param_2,(uchar *)local_208);
          local_270 = CreateFileA((LPCSTR)local_208,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                  (HANDLE)0x0);
          if (local_270 != (HANDLE)0xffffffff) {
            pvVar5 = (HANDLE)GetFileSize(local_270,&DStack_24c);
            param_4 = DStack_24c;
            param_3 = pvVar5;
            pvStack_250 = pvVar5;
            goto LAB_00410709;
          }
          FUN_00410c30(this,0xaaaaaaa4,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
          local_28c = -0x7ffb1ff3;
LAB_0041082c:
          iVar4 = FUN_0041ea30((int)&local_248);
          if (iVar4 != 0) {
            FUN_00410c30(this,0xaaaaaaa9,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
            local_28c = -0x7ffb1ff7;
          }
        }
        else {
          FUN_00410c30(this,0xaaaaaaa3,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
          local_28c = -0x7ff8fff2;
        }
      }
      if (*(int **)((int)this + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x20) + 0x10))
                  (*(uint *)(param_5 + 0x2c) - local_260,
                   (*(int *)(param_5 + 0x30) - local_25c) -
                   (uint)(*(uint *)(param_5 + 0x2c) < local_260));
        (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0);
      }
      if (-1 < local_28c) {
        local_280.dwLowDateTime = *(uint *)(param_5 + 0x14);
        local_280.dwHighDateTime = *(DWORD *)(param_5 + 0x18);
        SetFileTime(local_26c,&local_280,&local_280,&local_280);
        SetFileAttributesA(param_6,*(DWORD *)(param_5 + 0x44));
        if ((local_258 != *(uint *)(param_5 + 0x20)) || (local_268 != *(uint *)(param_5 + 0x1c))) {
          FUN_00410c30(this,0xaaaaaaaf,(uchar *)"ExtractInternalZipCompression",(uchar *)0x0);
        }
      }
      CloseHandle(local_26c);
    }
    pcVar6 = GlobalHandle_exref;
    pvVar1 = GlobalHandle(lpBuffer_00);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpBuffer_00);
    GlobalFree(pvVar1);
  }
  pvVar1 = (HGLOBAL)(*pcVar6)(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = (HGLOBAL)(*pcVar6)(lpBuffer);
  GlobalFree(pvVar1);
  if (local_278 != (HANDLE)0x0) {
    CloseHandle(local_278);
  }
  return unaff_EBP;
}


