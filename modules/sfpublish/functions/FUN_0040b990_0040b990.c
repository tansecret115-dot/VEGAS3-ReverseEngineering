/* Module: sfpublish.dll
   Function: FUN_0040b990
   Address: 0040b990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT __fastcall FUN_0040b990(int param_1)

{
  HRESULT HVar1;
  int iVar2;
  char *lpMultiByteStr;
  undefined4 *puVar3;
  uint uVar4;
  ULARGE_INTEGER *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *puVar5;
  IStream *This;
  LPSTREAM pstm;
  LPSTREAM local_2fc;
  int *local_2f8;
  IStream local_2f4;
  int *local_2f0;
  LPSTREAM local_2ec [7];
  WCHAR aWStack_2d0 [99];
  undefined2 uStack_20a;
  WCHAR local_208 [248];
  undefined2 *puStack_18;
  undefined2 local_2;
  
  local_2fc = (LPSTREAM)0x0;
  HVar1 = FUN_004241c0(&local_2fc);
  if (-1 < HVar1) {
    local_2ec[0] = (LPSTREAM)0x0;
    HVar1 = FUN_00424260((int)local_2fc,local_2fc,L"metadata",local_2ec);
    if (-1 < HVar1) {
      local_2f8 = (int *)0x0;
      iVar2 = FUN_00424260((int)local_2fc,local_2ec[0],L"filename",&local_2f8);
      if (-1 < iVar2) {
        lpMultiByteStr = FUN_004166c0(*(LPCSTR *)(param_1 + 0x5c));
        MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_208,0x104);
        local_2 = 0;
        local_2f4.lpVtbl = (IStreamVtbl *)0x0;
        iVar2 = FUN_004243c0((int *)local_2fc,local_2f8,local_208,&local_2f4);
        if (-1 < iVar2) {
          (*((IStreamVtbl *)(local_2f4.lpVtbl)->QueryInterface)->Release)
                    ((IStream *)local_2f4.lpVtbl);
          local_2f4.lpVtbl = (IStreamVtbl *)0x0;
        }
        (**(code **)(*local_2f8 + 8))(local_2f8);
        local_2f8 = (int *)0x0;
      }
      local_2f0 = (int *)0x0;
      HVar1 = FUN_00424260((int)local_2fc,local_2ec[0],L"application",&local_2f0);
      if (-1 < HVar1) {
        MultiByteToWideChar(0,1,*(LPCSTR *)(param_1 + 0x7c),-1,aWStack_2d0,100);
        uStack_20a = 0;
        local_2f4.lpVtbl = (IStreamVtbl *)0x0;
        HVar1 = FUN_004243c0((int *)local_2fc,local_2f0,aWStack_2d0,&local_2f4);
        if (-1 < HVar1) {
          (*((IStreamVtbl *)(local_2f4.lpVtbl)->QueryInterface)->Release)
                    ((IStream *)local_2f4.lpVtbl);
          local_2f4.lpVtbl = (IStreamVtbl *)0x0;
        }
        (**(code **)(*local_2f0 + 8))(local_2f0);
        local_2f0 = (int *)0x0;
        if ((((-1 < HVar1) &&
             (HVar1 = FUN_0040b7f0((int *)local_2fc,local_2ec[0],*(uchar **)(param_1 + 0x74),
                                   (uchar *)"title"), -1 < HVar1)) &&
            (HVar1 = FUN_0040b7f0((int *)local_2fc,local_2ec[0],*(uchar **)(param_1 + 0x74),
                                  (uchar *)"artist"), -1 < HVar1)) &&
           (HVar1 = FUN_0040b7f0((int *)local_2fc,local_2ec[0],*(uchar **)(param_1 + 0x74),
                                 (uchar *)"engineer"), -1 < HVar1)) {
          HVar1 = FUN_0040b7f0((int *)local_2fc,local_2ec[0],*(uchar **)(param_1 + 0x74),
                               (uchar *)"copyright");
        }
      }
      pstm = local_2ec[0];
      (*local_2ec[0]->lpVtbl->Release)();
      local_2f0 = (int *)0x0;
      if (-1 < HVar1) {
        local_2fc = (LPSTREAM)0x0;
        HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_2fc);
        if (-1 < HVar1) {
          This = &local_2f4;
          local_2f4.lpVtbl = (IStreamVtbl *)0x0;
          HVar1 = (*(code *)**(undefined4 **)unaff_EBX)(unaff_EBX,&DAT_0043cb50);
          if (-1 < HVar1) {
            HVar1 = (**(code **)((unaff_EBX->s).LowPart + 0x18))(unaff_EBX,unaff_ESI,1);
            if ((-1 < HVar1) &&
               (HVar1 = (*This->lpVtbl->Seek)
                                  (This,(LARGE_INTEGER)0x200000000,(DWORD)&local_2fc,unaff_EBX),
               -1 < HVar1)) {
              unaff_EDI = (int *)0x0;
              HVar1 = GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xfffffcf4);
              if (-1 < HVar1) {
                puVar3 = GlobalLock((HGLOBAL)0x0);
                if (puVar3 == (undefined4 *)0x0) {
                  HVar1 = -0x7ff8fff2;
                }
                else {
                  local_2f0 = local_2f8;
                  local_2ec[0] = (LPSTREAM)0x0;
                  iVar2 = Ordinal_15(0x11,1,&local_2f0);
                  if (iVar2 == 0) {
                    HVar1 = -0x7ff8fff2;
                    GlobalUnlock(pstm);
                  }
                  else {
                    HVar1 = Ordinal_23(iVar2,&stack0xfffffcfc);
                    if (-1 < HVar1) {
                      puVar5 = (undefined4 *)0x0;
                      for (uVar4 = (uint)local_2fc >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *puVar5 = *puVar3;
                        puVar3 = puVar3 + 1;
                        puVar5 = puVar5 + 1;
                      }
                      for (uVar4 = (uint)local_2fc & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
                        puVar3 = (undefined4 *)((int)puVar3 + 1);
                        puVar5 = (undefined4 *)((int)puVar5 + 1);
                      }
                      Ordinal_24(iVar2);
                    }
                    *puStack_18 = 0x2000;
                    *(int *)(puStack_18 + 4) = iVar2;
                    GlobalUnlock(pstm);
                  }
                }
              }
            }
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
            unaff_EBX = (ULARGE_INTEGER *)0x0;
          }
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          local_2fc = (LPSTREAM)0x0;
        }
        (**(code **)((unaff_EBX->s).LowPart + 8))(unaff_EBX);
        return HVar1;
      }
    }
  }
  return HVar1;
}


