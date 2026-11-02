/* Module: vegas30k.dll
   Function: _FXPackage_LoadPackage@16
   Address: 01029b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT _FXPackage_LoadPackage_16(IStream *param_1,int *param_2)

{
  ULARGE_INTEGER libNewSize;
  LSTATUS LVar1;
  HANDLE hFile;
  HGLOBAL pvVar2;
  LPVOID lpBuffer;
  BOOL BVar3;
  HRESULT HVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  IStream *unaff_ESI;
  int *piVar8;
  ULARGE_INTEGER *unaff_EDI;
  bool bVar9;
  IStream *pIVar10;
  IStream *This;
  ULARGE_INTEGER *plibNewPosition;
  ULARGE_INTEGER *pUVar11;
  LPSTREAM local_418 [2];
  void *local_410;
  DWORD local_40c;
  HKEY local_408;
  DWORD local_404;
  BYTE local_400 [1000];
  undefined4 uStack_18;
  int iStack_14;
  
                    /* 0x29b80  642  _FXPackage_LoadPackage@16 */
  if (param_1 == (IStream *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar7 = 4;
  bVar9 = true;
  piVar8 = &DAT_011dab90;
  piVar6 = param_2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar9 = *piVar8 == *piVar6;
    piVar8 = piVar8 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar9);
  if (bVar9) {
    return -0x7fffbffd;
  }
  local_408 = (HKEY)0x0;
  iVar7 = _FXPackage_OpenPackageRegKey_24(*param_2,param_2[1],param_2[2],param_2[3],&local_408,0);
  if (iVar7 != 0) {
    return iVar7;
  }
  local_40c = 0x400;
  LVar1 = RegQueryValueExA(local_408,"Stream",(LPDWORD)0x0,&local_404,local_400,&local_40c);
  HVar4 = 0;
  if (LVar1 != 0) goto LAB_01029ec1;
  local_418[0] = (IStream *)0x0;
  if (local_404 == 1) {
    hFile = CreateFileA((LPCSTR)local_400,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                       );
    if (hFile == (HANDLE)0xffffffff) {
      HVar4 = -0x7ffb1ff9;
    }
    else {
      local_40c = SetFilePointer(hFile,0,(PLONG)0x0,2);
      SetFilePointer(hFile,0,(PLONG)0x0,0);
      pvVar2 = GlobalAlloc(2,local_40c);
      lpBuffer = GlobalLock(pvVar2);
      if (lpBuffer != (LPVOID)0x0) {
        BVar3 = ReadFile(hFile,lpBuffer,local_40c,(LPDWORD)&local_410,(LPOVERLAPPED)0x0);
        if (((BVar3 != 0) && (HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_418), HVar4 == 0))
           && (HVar4 = (*local_418[0]->lpVtbl->Write)(local_418[0],lpBuffer,local_40c,(ULONG *)0x0),
              HVar4 != 0)) {
          (*local_418[0]->lpVtbl->Release)(local_418[0]);
          local_418[0] = (IStream *)0x0;
        }
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalFree(pvVar2);
      }
      CloseHandle(hFile);
    }
  }
  else {
    if (local_404 != 3) goto LAB_01029ec1;
    HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_418);
    if ((HVar4 == 0) &&
       (HVar4 = (*local_418[0]->lpVtbl->Write)(local_418[0],local_400,local_40c,(ULONG *)0x0),
       HVar4 != 0)) {
      (*local_418[0]->lpVtbl->Release)(local_418[0]);
      goto LAB_01029ec1;
    }
  }
  if (local_418[0] == (IStream *)0x0) goto LAB_01029ec1;
  (*local_418[0]->lpVtbl->Seek)(local_418[0],(LARGE_INTEGER)0x0,0,unaff_EDI);
  plibNewPosition = (ULARGE_INTEGER *)&DAT_011d9c30;
  local_410 = (void *)0x0;
  This = param_1;
  (*param_1->lpVtbl->QueryInterface)(param_1,(IID *)&DAT_011d9c30,&local_410);
  if (unaff_EBX == (int *)0x0) {
    HVar4 = -0x7fffbffe;
  }
  else {
    local_418[0] = (IStream *)0x0;
    HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_418);
    if (HVar4 < 0) {
      local_418[0] = (IStream *)0x0;
    }
    else {
      (*param_1->lpVtbl->SetSize)(param_1,local_418[0],0);
    }
    pIVar10 = param_1;
    uVar5 = (**(code **)(*unaff_EBX + 0xbc))();
    libNewSize.s.HighPart = (DWORD)pIVar10;
    libNewSize.s.LowPart = (DWORD)unaff_EBX;
    piVar6 = (int *)(*unaff_ESI->lpVtbl[3].SetSize)(unaff_ESI,libNewSize);
    piVar8 = unaff_EBP;
    HVar4 = (*param_1->lpVtbl->Seek)(param_1);
    (*unaff_ESI->lpVtbl[3].SetSize)(unaff_ESI);
    pUVar11 = plibNewPosition;
    (**(code **)((plibNewPosition->s).LowPart + 0xbc))(plibNewPosition,uVar5);
    if ((HVar4 < 0) && (iStack_14 != 0)) {
      if (This != (IStream *)0x0) {
        (*This->lpVtbl->Seek)(This,(LARGE_INTEGER)0x0,0,plibNewPosition);
        (*param_1->lpVtbl->Seek)(param_1,pUVar11);
        (**(code **)(*piVar8 + 8))(piVar8);
        (**(code **)(*piVar6 + 8))(piVar6);
        goto LAB_01029eb7;
      }
    }
    else {
      (**(code **)(*piVar8 + 0xb4))(piVar8,uStack_18);
      if (This != (IStream *)0x0) {
        (*This->lpVtbl->Release)(This);
      }
    }
    (**(code **)(*piVar8 + 8))(piVar8);
  }
LAB_01029eb7:
  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
LAB_01029ec1:
  RegCloseKey(local_408);
  return HVar4;
}


