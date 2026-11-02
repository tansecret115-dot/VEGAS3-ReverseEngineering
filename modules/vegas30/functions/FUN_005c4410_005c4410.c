/* Module: vegas30.exe
   Function: FUN_005c4410
   Address: 005c4410
   Source: Ghidra pseudocode (Stage 10 batch) */


IStream * FUN_005c4410(IStream *param_1,char *param_2,int *param_3,undefined4 param_4,CHAR *param_5,
                      LPCVOID param_6,ULONG param_7,ULONG param_8)

{
  byte bVar1;
  LARGE_INTEGER dlibMove;
  IStream *This;
  LPCVOID pvVar2;
  ULONG UVar3;
  HRESULT HVar4;
  IStream *pIVar5;
  LPSTR pCVar6;
  HGLOBAL pvVar7;
  int iVar8;
  IStream unaff_EBX;
  ULARGE_INTEGER *unaff_ESI;
  uint uVar9;
  undefined4 *puVar10;
  ULARGE_INTEGER *unaff_EDI;
  uint *puVar11;
  ulong *puVar12;
  CHAR local_27c [254];
  undefined1 local_17e;
  CHAR local_17c [259];
  undefined1 local_79;
  ulong local_78 [2];
  _GUID local_70;
  undefined1 local_60 [12];
  IStream *local_54;
  uint local_50 [7];
  IStream *local_34;
  IStream *local_30;
  IStream *local_2c;
  IStream *local_28;
  IStream *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  LPSTR local_10;
  IStream *local_c;
  IStream *local_8;
  
  This = param_1;
  local_10 = (LPSTR)0x0;
  local_c = (IStream *)0x0;
  HVar4 = (*param_1->lpVtbl->Seek)
                    (param_1,(LARGE_INTEGER)0x100000000,(DWORD)(local_60 + 8),unaff_EDI);
  pIVar5 = (IStream *)0x8004e083;
  if ((-1 < HVar4) && (HVar4 = (*This->lpVtbl->Read)(This,&local_c,4,(ULONG *)&param_1), -1 < HVar4)
     ) {
    if (param_1 != (IStream *)0x4) {
      local_c = (IStream *)0x0;
    }
    dlibMove.s.HighPart = 0;
    dlibMove.s.LowPart = (DWORD)local_54;
    HVar4 = (*This->lpVtbl->Seek)(This,dlibMove,0,unaff_ESI);
    if (HVar4 < 0) goto LAB_005c5980;
  }
  if (local_c == (IStream *)0x38) {
    puVar11 = local_50 + 2;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    pIVar5 = (IStream *)(*This->lpVtbl->Read)(This,local_50 + 2,0x38,(ULONG *)&local_8);
    if (((int)pIVar5 < 0) || (pIVar5 = (IStream *)0x8004e008, local_8 != (IStream *)0x38))
    goto LAB_005c5980;
    pIVar5 = (IStream *)0x0;
    if (local_34 != (IStream *)0x0) {
      local_c = local_34;
      pIVar5 = local_34;
      if ((IStream *)0x207 < local_34) {
        pIVar5 = (IStream *)0x208;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_17c,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x17c) {
          local_17c[0] = '\0';
        }
        local_79 = 0;
        if (param_1 < local_c) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_79 = 0;
        }
      }
      if ((int)pIVar5 < 0) goto LAB_005c5980;
    }
    if (local_30 != (IStream *)0x0) {
      local_c = local_30;
      pIVar5 = local_30;
      if ((IStream *)0x1fd < local_30) {
        pIVar5 = (IStream *)0x1fe;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_27c,0xff,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x27c) {
          local_27c[0] = '\0';
        }
        local_17e = 0;
        if (param_1 < local_c) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_17e = 0;
        }
      }
    }
    if ((int)pIVar5 < 0) goto LAB_005c5980;
    if (local_2c != (IStream *)0x0) {
      FUN_0060ac30();
      uVar9 = (uint)local_2c >> 1;
      param_1 = local_2c;
      if ((IStream *)(uVar9 * 2) <= local_2c) {
        param_1 = (IStream *)(uVar9 * 2);
      }
      local_10 = &stack0xfffffd80;
      FUN_0060ac30();
      local_c = (IStream *)&stack0xfffffd80;
      local_54 = (IStream *)
                 (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)param_1,(ULONG *)&param_1);
      pCVar6 = local_10;
      pIVar5 = local_54;
      if (-1 < (int)local_54) {
        if ((local_c == (IStream *)0x0) || (*(short *)&local_c->lpVtbl != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)local_c,-1,local_10,uVar9,(LPCSTR)0x0,(LPBOOL)0x0);
          pCVar6 = local_10;
        }
        else if (local_10 != (LPSTR)0x0) {
          *local_10 = '\0';
        }
        pCVar6[uVar9 - 1] = '\0';
        pIVar5 = local_54;
        if (param_1 < local_2c) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_10[uVar9 - 1] = '\0';
          pIVar5 = local_54;
        }
      }
    }
    if (((int)pIVar5 < 0) ||
       (pIVar5 = (IStream *)FUN_005c4200(local_17c,param_4,param_5,param_6,0), (int)pIVar5 < 0))
    goto LAB_005c5980;
    param_5 = local_17c;
    param_6 = (LPCVOID)0x0;
    if ((*param_2 != '\0') && (iVar8 = FUN_00436ff0(&param_5), (*(byte *)(iVar8 + 0x18) & 2) != 2))
    {
      param_6 = *(LPCVOID *)(iVar8 + 4);
LAB_005c4722:
      *(uint *)((int)param_6 + 0x164) = local_1c;
      *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xffffffbf;
      *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x10;
      pIVar5 = (IStream *)FUN_005f14a0(-(uint)(local_30 != (IStream *)0x0) & (uint)local_27c);
      if ((-1 < (int)pIVar5) && (pIVar5 = (IStream *)FUN_005f1510(local_10), -1 < (int)pIVar5)) {
        *(uint *)((int)param_6 + 0x134) =
             (local_50[3] & 1) << 9 | *(uint *)((int)param_6 + 0x134) & 0xfffffdff;
        *(uint *)((int)param_6 + 0x110) = local_50[4];
        *(uint *)((int)param_6 + 0x114) = local_50[5];
        *(uint *)((int)param_6 + 0x108) = local_50[6];
        if (*(int *)((int)param_6 + 0x138) != 0) {
          _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_6 + 0x138));
          *(undefined4 *)((int)param_6 + 0x138) = 0;
        }
        iVar8 = FUN_005f03a0(local_17c);
        if (iVar8 != 0) {
          pIVar5 = (IStream *)FUN_005c34c0(This,local_17c);
          *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x80;
        }
        UVar3 = param_8;
        param_5 = (CHAR *)0x0;
        if (0 < local_20) {
          do {
            pIVar5 = (IStream *)FUN_005c3590(This,param_6,param_7,UVar3);
            if ((int)pIVar5 < 0) goto LAB_005c4966;
            param_5 = param_5 + 1;
          } while ((int)param_5 < local_20);
        }
        if (-1 < (int)pIVar5) {
          iVar8 = 0;
          *(IStream **)((int)param_6 + 0x13c) = local_28;
          param_5 = (CHAR *)0x0;
          if (0 < (int)local_24) {
            do {
              pIVar5 = (IStream *)
                       tSFVIDEOFILTERCACHE::Create
                                 (This,1,(tSFLIST **)((int)param_6 + 0x138),
                                  (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,
                                  (_GUID *)local_60);
              if ((int)pIVar5 < 0) {
                iVar8 = iVar8 + 1;
                FUN_005bb170(local_60,"Media Filter");
                pIVar5 = (IStream *)0x0;
              }
              else {
                FUN_005a5060(*(undefined4 *)
                              (*(int *)(*(int *)((int)param_6 + 0x138) + 8) +
                              ((int)param_5 - iVar8) * 4),param_6,6,0xffffffff,0x7fffffff);
              }
              param_5 = param_5 + 1;
            } while ((int)param_5 < (int)local_24);
          }
          if (-1 < (int)pIVar5) {
            if ((*(byte *)((int)param_6 + 0x134) & 0x20) != 0) {
              *param_3 = (int)param_6;
              pIVar5 = (IStream *)0x4e003;
              goto LAB_005c5980;
            }
            goto LAB_005c5773;
          }
        }
      }
LAB_005c4966:
      iVar8 = (int)param_6 + 0x170;
      goto LAB_005c597b;
    }
    pIVar5 = (IStream *)FUN_005f0ea0(local_17c,&param_6);
    if ((((int)pIVar5 < 0) && (pIVar5 != (IStream *)0x8004e00a)) &&
       (pIVar5 != (IStream *)0x8004e007)) goto LAB_005c5980;
    if (DAT_00646de0 <= local_1c) {
      DAT_00646de0 = local_1c + 1;
    }
    pIVar5 = (IStream *)FUN_005ebfb0(param_6);
    if (-1 < (int)pIVar5) goto LAB_005c4722;
LAB_005c570d:
    pvVar2 = param_6;
    if (param_6 != (LPCVOID)0x0) {
      FUN_005efea0();
      pvVar7 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pvVar2);
      GlobalFree(pvVar7);
    }
    goto LAB_005c5980;
  }
  if (local_c == (IStream *)0x40) {
    puVar11 = local_50;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    pIVar5 = (IStream *)(*This->lpVtbl->Read)(This,local_50,0x40,(ULONG *)&local_54);
    if (((int)pIVar5 < 0) || (pIVar5 = (IStream *)0x8004e008, local_54 != (IStream *)0x40))
    goto LAB_005c5980;
    pIVar5 = (IStream *)0x0;
    if (local_2c != (IStream *)0x0) {
      local_8 = local_2c;
      pIVar5 = local_2c;
      if ((IStream *)0x207 < local_2c) {
        pIVar5 = (IStream *)0x208;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_17c,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x17c) {
          local_17c[0] = '\0';
        }
        local_79 = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_79 = 0;
        }
      }
      if ((int)pIVar5 < 0) goto LAB_005c5980;
    }
    if (local_28 != (IStream *)0x0) {
      local_8 = local_28;
      pIVar5 = local_28;
      if ((IStream *)0x1fd < local_28) {
        pIVar5 = (IStream *)0x1fe;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_27c,0xff,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x27c) {
          local_27c[0] = '\0';
        }
        local_17e = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_17e = 0;
        }
      }
    }
    if ((int)pIVar5 < 0) goto LAB_005c5980;
    if (local_24 != (IStream *)0x0) {
      FUN_0060ac30();
      uVar9 = (uint)local_24 >> 1;
      param_1 = local_24;
      if ((IStream *)(uVar9 * 2) <= local_24) {
        param_1 = (IStream *)(uVar9 * 2);
      }
      local_10 = &stack0xfffffd80;
      FUN_0060ac30();
      local_c = (IStream *)&stack0xfffffd80;
      local_8 = (IStream *)
                (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)param_1,(ULONG *)&param_1);
      pCVar6 = local_10;
      pIVar5 = local_8;
      if (-1 < (int)local_8) {
        if ((local_c == (IStream *)0x0) || (*(short *)&local_c->lpVtbl != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)local_c,-1,local_10,uVar9,(LPCSTR)0x0,(LPBOOL)0x0);
          pCVar6 = local_10;
        }
        else if (local_10 != (LPSTR)0x0) {
          *local_10 = '\0';
        }
        pCVar6[uVar9 - 1] = '\0';
        pIVar5 = local_8;
        if (param_1 < local_24) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_10[uVar9 - 1] = '\0';
          pIVar5 = local_8;
        }
      }
    }
    if (((int)pIVar5 < 0) ||
       (pIVar5 = (IStream *)FUN_005c4200(local_17c,param_4,param_5,param_6,0), (int)pIVar5 < 0))
    goto LAB_005c5980;
    param_6 = (LPCVOID)0x0;
    if (*param_2 == '\0') {
LAB_005c4e18:
      pIVar5 = (IStream *)FUN_005f0ea0(local_17c,&param_6);
      if ((((int)pIVar5 < 0) && (pIVar5 != (IStream *)0x8004e00a)) &&
         (pIVar5 != (IStream *)0x8004e007)) goto LAB_005c5980;
      if (DAT_00646de0 <= local_14) {
        DAT_00646de0 = local_14 + 1;
      }
      pIVar5 = (IStream *)FUN_005ebfb0(param_6);
      if ((int)pIVar5 < 0) goto LAB_005c570d;
    }
    else {
      puVar10 = *(undefined4 **)(param_2 + 8);
      bVar1 = *(byte *)(puVar10 + 6);
      while ((bVar1 & 2) != 2) {
        iVar8 = lstrcmpiA(local_17c,(LPCSTR)*puVar10);
        if (iVar8 == 0) break;
        if (iVar8 < 0) {
          puVar10 = (undefined4 *)puVar10[4];
        }
        else {
          puVar10 = (undefined4 *)puVar10[5];
        }
        bVar1 = *(byte *)(puVar10 + 6);
      }
      if ((*(byte *)(puVar10 + 6) & 2) == 2) goto LAB_005c4e18;
      param_6 = (LPCVOID)puVar10[1];
    }
    *(uint *)((int)param_6 + 0x164) = local_14;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xffffffbf;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x10;
    pIVar5 = (IStream *)FUN_005f14a0(-(uint)(local_28 != (IStream *)0x0) & (uint)local_27c);
    if ((-1 < (int)pIVar5) && (pIVar5 = (IStream *)FUN_005f1510(local_10), -1 < (int)pIVar5)) {
      *(uint *)((int)param_6 + 0x134) =
           (local_50[1] & 1) << 9 | *(uint *)((int)param_6 + 0x134) & 0xfffffdff;
      *(uint *)((int)param_6 + 0x110) = local_50[2];
      *(uint *)((int)param_6 + 0x114) = local_50[3];
      *(uint *)((int)param_6 + 0x120) = local_50[4];
      *(uint *)((int)param_6 + 0x124) = local_50[5];
      *(uint *)((int)param_6 + 0x128) = local_50[6];
      *(IStream **)((int)param_6 + 300) = local_34;
      *(IStream **)((int)param_6 + 0x108) = local_30;
      if (*(int *)((int)param_6 + 0x138) != 0) {
        _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_6 + 0x138));
        *(undefined4 *)((int)param_6 + 0x138) = 0;
      }
      iVar8 = FUN_005f03a0(local_17c);
      if (iVar8 != 0) {
        pIVar5 = (IStream *)FUN_005c34c0(This,local_17c);
        *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x80;
      }
      UVar3 = param_8;
      param_5 = (CHAR *)0x0;
      if (0 < (int)local_18) {
        do {
          pIVar5 = (IStream *)FUN_005c3590(This,param_6,param_7,UVar3);
          if ((int)pIVar5 < 0) goto LAB_005c4eb8;
          param_5 = param_5 + 1;
        } while ((int)param_5 < (int)local_18);
      }
      if (-1 < (int)pIVar5) {
        iVar8 = 0;
        *(int *)((int)param_6 + 0x13c) = local_20;
        param_5 = (CHAR *)0x0;
        if (0 < (int)local_1c) {
          do {
            pIVar5 = (IStream *)
                     tSFVIDEOFILTERCACHE::Create
                               (This,1,(tSFLIST **)((int)param_6 + 0x138),
                                (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,&local_70);
            if ((int)pIVar5 < 0) {
              iVar8 = iVar8 + 1;
              FUN_005bb170(&local_70,"Media Filter");
              pIVar5 = (IStream *)0x0;
            }
            else {
              FUN_005a5060(*(undefined4 *)
                            (*(int *)(*(int *)((int)param_6 + 0x138) + 8) +
                            ((int)param_5 - iVar8) * 4),param_6,6,0xffffffff,0x7fffffff);
            }
            param_5 = param_5 + 1;
          } while ((int)param_5 < (int)local_1c);
        }
        if (-1 < (int)pIVar5) {
          if ((*(byte *)((int)param_6 + 0x134) & 0x20) != 0) {
            *param_3 = (int)param_6;
            pIVar5 = (IStream *)0x4e003;
            goto LAB_005c5980;
          }
          goto LAB_005c5773;
        }
      }
    }
LAB_005c4eb8:
    iVar8 = (int)param_6 + 0x170;
  }
  else if (local_c == (IStream *)&DAT_00000030) {
    puVar11 = local_50 + 4;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    pIVar5 = (IStream *)(*This->lpVtbl->Read)(This,local_50 + 4,0x30,(ULONG *)&local_54);
    if (((int)pIVar5 < 0) || (pIVar5 = (IStream *)0x8004e008, local_54 != (IStream *)&DAT_00000030))
    goto LAB_005c5980;
    pIVar5 = (IStream *)0x0;
    if (local_2c != (IStream *)0x0) {
      local_8 = local_2c;
      pIVar5 = local_2c;
      if ((IStream *)0x207 < local_2c) {
        pIVar5 = (IStream *)0x208;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_17c,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x17c) {
          local_17c[0] = '\0';
        }
        local_79 = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_79 = 0;
        }
      }
      if ((int)pIVar5 < 0) goto LAB_005c5980;
    }
    if (local_28 != (IStream *)0x0) {
      local_8 = local_28;
      pIVar5 = local_28;
      if ((IStream *)0x1fd < local_28) {
        pIVar5 = (IStream *)0x1fe;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_27c,0xff,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x27c) {
          local_27c[0] = '\0';
        }
        local_17e = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_17e = 0;
        }
      }
    }
    if (((int)pIVar5 < 0) ||
       (pIVar5 = (IStream *)FUN_005c4200(local_17c,param_4,param_5,param_6,0), (int)pIVar5 < 0))
    goto LAB_005c5980;
    param_6 = (LPCVOID)0x0;
    if (*param_2 == '\0') {
LAB_005c526c:
      pIVar5 = (IStream *)FUN_005f0ea0(local_17c,&param_6);
      if ((((int)pIVar5 < 0) && (pIVar5 != (IStream *)0x8004e00a)) &&
         (pIVar5 != (IStream *)0x8004e007)) goto LAB_005c5980;
      if (DAT_00646de0 <= local_18) {
        DAT_00646de0 = local_18 + 1;
      }
      pIVar5 = (IStream *)FUN_005ebfb0(param_6);
      if ((int)pIVar5 < 0) goto LAB_005c570d;
    }
    else {
      puVar10 = *(undefined4 **)(param_2 + 8);
      bVar1 = *(byte *)(puVar10 + 6);
      while ((bVar1 & 2) != 2) {
        iVar8 = lstrcmpiA(local_17c,(LPCSTR)*puVar10);
        if (iVar8 == 0) break;
        if (iVar8 < 0) {
          puVar10 = (undefined4 *)puVar10[4];
        }
        else {
          puVar10 = (undefined4 *)puVar10[5];
        }
        bVar1 = *(byte *)(puVar10 + 6);
      }
      if ((*(byte *)(puVar10 + 6) & 2) == 2) goto LAB_005c526c;
      param_6 = (LPCVOID)puVar10[1];
    }
    *(uint *)((int)param_6 + 0x164) = local_18;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xffffffbf;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x10;
    pIVar5 = (IStream *)FUN_005f14a0(-(uint)(local_28 != (IStream *)0x0) & (uint)local_27c);
    if (-1 < (int)pIVar5) {
      *(uint *)((int)param_6 + 0x134) =
           (local_50[5] & 1) << 9 | *(uint *)((int)param_6 + 0x134) & 0xfffffdff;
      *(uint *)((int)param_6 + 0x110) = local_50[6];
      *(IStream **)((int)param_6 + 0x114) = local_34;
      *(IStream **)((int)param_6 + 0x108) = local_30;
      if (*(int *)((int)param_6 + 0x138) != 0) {
        _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_6 + 0x138));
        *(undefined4 *)((int)param_6 + 0x138) = 0;
      }
      iVar8 = FUN_005f03a0(local_17c);
      if (iVar8 != 0) {
        pIVar5 = (IStream *)FUN_005c34c0(This,local_17c);
        *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x80;
      }
      UVar3 = param_8;
      param_5 = (CHAR *)0x0;
      if (0 < (int)local_1c) {
        do {
          pIVar5 = (IStream *)FUN_005c3590(This,param_6,param_7,UVar3);
          if ((int)pIVar5 < 0) goto LAB_005c530c;
          param_5 = param_5 + 1;
        } while ((int)param_5 < (int)local_1c);
      }
      if (-1 < (int)pIVar5) {
        iVar8 = 0;
        *(IStream **)((int)param_6 + 0x13c) = local_24;
        param_5 = (CHAR *)0x0;
        if (0 < local_20) {
          do {
            pIVar5 = (IStream *)
                     tSFVIDEOFILTERCACHE::Create
                               (This,1,(tSFLIST **)((int)param_6 + 0x138),
                                (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,&local_70);
            if ((int)pIVar5 < 0) {
              iVar8 = iVar8 + 1;
              FUN_005bb170(&local_70,"Media Filter");
              pIVar5 = (IStream *)0x0;
            }
            else {
              FUN_005a5060(*(undefined4 *)
                            (*(int *)(*(int *)((int)param_6 + 0x138) + 8) +
                            ((int)param_5 - iVar8) * 4),param_6,6,0xffffffff,0x7fffffff);
            }
            param_5 = param_5 + 1;
          } while ((int)param_5 < local_20);
        }
        if (-1 < (int)pIVar5) {
          if ((*(byte *)((int)param_6 + 0x134) & 0x20) != 0) {
            *param_3 = (int)param_6;
            pIVar5 = (IStream *)0x4e003;
            goto LAB_005c5980;
          }
          goto LAB_005c5773;
        }
      }
    }
LAB_005c530c:
    iVar8 = (int)param_6 + 0x170;
  }
  else {
    if (local_c != (IStream *)0x28) {
      if (local_c != (IStream *)0x18) goto LAB_005c5980;
      puVar12 = local_78;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      pIVar5 = (IStream *)(*This->lpVtbl->Read)(This,local_78,0x18,&param_7);
      if (((int)pIVar5 < 0) || (pIVar5 = (IStream *)0x8004e008, param_7 != 0x18)) goto LAB_005c5980;
      if (local_70.Data4._0_4_ != 0) {
        param_8._0_1_ = local_70.Data4[0];
        param_8._1_1_ = local_70.Data4[1];
        param_8._2_1_ = local_70.Data4[2];
        param_8._3_1_ = local_70.Data4[3];
        if (0x207 < (uint)local_70.Data4._0_4_) {
          param_8 = 0x208;
        }
        FUN_0060ac30();
        param_1 = (IStream *)(*This->lpVtbl->Read)(This,&stack0xfffffd80,param_8,&param_8);
        if (-1 < (int)param_1) {
          if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_17c,0x104,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x17c) {
            local_17c[0] = '\0';
          }
          local_79 = 0;
          if (param_8 < (uint)local_70.Data4._0_4_) {
            (*This->lpVtbl->Seek)
                      (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
            local_79 = 0;
          }
        }
        pIVar5 = param_1;
        if ((int)param_1 < 0) goto LAB_005c5980;
      }
      pIVar5 = (IStream *)FUN_005c4200(local_17c,param_4,param_5,param_6,0);
      if ((int)pIVar5 < 0) goto LAB_005c5980;
      param_6 = (LPCVOID)0x0;
      pIVar5 = (IStream *)0x80004005;
      if (*param_2 != '\0') {
        puVar10 = *(undefined4 **)(param_2 + 8);
        pIVar5 = (IStream *)0x8004e00a;
        bVar1 = *(byte *)(puVar10 + 6);
        while ((bVar1 & 2) != 2) {
          iVar8 = lstrcmpiA(local_17c,(LPCSTR)*puVar10);
          if (iVar8 == 0) break;
          if (iVar8 < 0) {
            puVar10 = (undefined4 *)puVar10[4];
          }
          else {
            puVar10 = (undefined4 *)puVar10[5];
          }
          bVar1 = *(byte *)(puVar10 + 6);
        }
        if ((*(byte *)(puVar10 + 6) & 2) != 2) {
          param_6 = (LPCVOID)puVar10[1];
          pIVar5 = (IStream *)0x0;
        }
      }
      if ((int)pIVar5 < 0) {
        pIVar5 = (IStream *)FUN_005f0ea0(local_17c,&param_6);
        if (((-1 < (int)pIVar5) || (pIVar5 == (IStream *)0x8004e00a)) ||
           (pIVar5 == (IStream *)0x8004e007)) {
          pIVar5 = (IStream *)FUN_005ebfb0(param_6);
          pvVar2 = param_6;
          if (-1 < (int)pIVar5) goto LAB_005c59ae;
          if (param_6 != (LPCVOID)0x0) {
            FUN_005efea0();
            pvVar7 = GlobalHandle(pvVar2);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle(pvVar2);
            GlobalFree(pvVar7);
          }
          param_6 = (LPCVOID)0x0;
        }
        iVar8 = (int)param_6 + 0x170;
        goto LAB_005c597b;
      }
LAB_005c59ae:
      *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xffffffbf;
      *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x10;
      *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xfffffdff;
      *(ulong *)((int)param_6 + 0x110) = local_70.Data1;
      *(undefined4 *)((int)param_6 + 0x114) = local_70._4_4_;
      if ((*(byte *)((int)param_6 + 0x134) & 0x20) != 0) {
        pIVar5 = (IStream *)0x4e003;
        *param_3 = (int)param_6;
        goto LAB_005c5980;
      }
LAB_005c5773:
      *param_3 = (int)param_6;
      goto LAB_005c5980;
    }
    puVar11 = local_50 + 6;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    pIVar5 = (IStream *)(*This->lpVtbl->Read)(This,local_50 + 6,0x28,(ULONG *)&local_54);
    if (((int)pIVar5 < 0) || (pIVar5 = (IStream *)0x8004e008, local_54 != (IStream *)0x28))
    goto LAB_005c5980;
    pIVar5 = (IStream *)0x0;
    if (local_28 != (IStream *)0x0) {
      local_8 = local_28;
      pIVar5 = local_28;
      if ((IStream *)0x207 < local_28) {
        pIVar5 = (IStream *)0x208;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_17c,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x17c) {
          local_17c[0] = '\0';
        }
        local_79 = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_79 = 0;
        }
      }
      if ((int)pIVar5 < 0) goto LAB_005c5980;
    }
    if (local_24 != (IStream *)0x0) {
      local_8 = local_24;
      pIVar5 = local_24;
      if ((IStream *)0x1fd < local_24) {
        pIVar5 = (IStream *)0x1fe;
      }
      param_1 = pIVar5;
      FUN_0060ac30();
      pIVar5 = (IStream *)
               (*This->lpVtbl->Read)(This,&stack0xfffffd80,(ULONG)pIVar5,(ULONG *)&param_1);
      if (-1 < (int)pIVar5) {
        if ((&stack0x00000000 == (undefined1 *)0x280) || ((WCHAR)unaff_EBX.lpVtbl != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd80,-1,local_27c,0xff,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x27c) {
          local_27c[0] = '\0';
        }
        local_17e = 0;
        if (param_1 < local_8) {
          (*This->lpVtbl->Seek)
                    (This,(LARGE_INTEGER)0x100000000,0,(ULARGE_INTEGER *)unaff_EBX.lpVtbl);
          local_17e = 0;
        }
      }
    }
    if (((int)pIVar5 < 0) ||
       (pIVar5 = (IStream *)FUN_005c4200(local_17c,param_4,param_5,param_6,0), (int)pIVar5 < 0))
    goto LAB_005c5980;
    param_6 = (LPCVOID)0x0;
    if (*param_2 == '\0') {
LAB_005c56b8:
      pIVar5 = (IStream *)FUN_005f0ea0(local_17c,&param_6);
      if ((((int)pIVar5 < 0) && (pIVar5 != (IStream *)0x8004e00a)) &&
         (pIVar5 != (IStream *)0x8004e007)) goto LAB_005c5980;
      if (DAT_00646de0 <= local_14) {
        DAT_00646de0 = local_14 + 1;
      }
      pIVar5 = (IStream *)FUN_005ebfb0(param_6);
      if ((int)pIVar5 < 0) goto LAB_005c570d;
    }
    else {
      puVar10 = *(undefined4 **)(param_2 + 8);
      bVar1 = *(byte *)(puVar10 + 6);
      while ((bVar1 & 2) != 2) {
        iVar8 = lstrcmpiA(local_17c,(LPCSTR)*puVar10);
        if (iVar8 == 0) break;
        if (iVar8 < 0) {
          puVar10 = (undefined4 *)puVar10[4];
        }
        else {
          puVar10 = (undefined4 *)puVar10[5];
        }
        bVar1 = *(byte *)(puVar10 + 6);
      }
      if ((*(byte *)(puVar10 + 6) & 2) == 2) goto LAB_005c56b8;
      param_6 = (LPCVOID)puVar10[1];
    }
    *(uint *)((int)param_6 + 0x164) = local_14;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) & 0xffffffbf;
    *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x10;
    pIVar5 = (IStream *)FUN_005f14a0(-(uint)(local_24 != (IStream *)0x0) & (uint)local_27c);
    if (-1 < (int)pIVar5) {
      *(uint *)((int)param_6 + 0x134) =
           ((uint)local_34 & 1) << 9 | *(uint *)((int)param_6 + 0x134) & 0xfffffdff;
      *(IStream **)((int)param_6 + 0x110) = local_30;
      *(IStream **)((int)param_6 + 0x114) = local_2c;
      if (*(int *)((int)param_6 + 0x138) != 0) {
        _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)param_6 + 0x138));
        *(undefined4 *)((int)param_6 + 0x138) = 0;
      }
      iVar8 = FUN_005f03a0(local_17c);
      if (iVar8 != 0) {
        pIVar5 = (IStream *)FUN_005c34c0(This,local_17c);
        *(uint *)((int)param_6 + 0x134) = *(uint *)((int)param_6 + 0x134) | 0x80;
      }
      UVar3 = param_8;
      param_5 = (CHAR *)0x0;
      if (0 < (int)local_18) {
        do {
          pIVar5 = (IStream *)FUN_005c3590(This,param_6,param_7,UVar3);
          if ((int)pIVar5 < 0) goto LAB_005c577d;
          param_5 = param_5 + 1;
        } while ((int)param_5 < (int)local_18);
      }
      if (-1 < (int)pIVar5) {
        iVar8 = 0;
        *(int *)((int)param_6 + 0x13c) = local_20;
        param_5 = (CHAR *)0x0;
        if (0 < (int)local_1c) {
          do {
            pIVar5 = (IStream *)
                     tSFVIDEOFILTERCACHE::Create
                               (This,1,(tSFLIST **)((int)param_6 + 0x138),
                                (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,&local_70);
            if ((int)pIVar5 < 0) {
              iVar8 = iVar8 + 1;
              FUN_005bb170(&local_70,"Media Filter");
              pIVar5 = (IStream *)0x0;
            }
            else {
              FUN_005a5060(*(undefined4 *)
                            (*(int *)(*(int *)((int)param_6 + 0x138) + 8) +
                            ((int)param_5 - iVar8) * 4),param_6,6,0xffffffff,0x7fffffff);
            }
            param_5 = param_5 + 1;
          } while ((int)param_5 < (int)local_1c);
        }
        if (-1 < (int)pIVar5) {
          if ((*(byte *)((int)param_6 + 0x134) & 0x20) != 0) {
            pIVar5 = (IStream *)0x4e003;
          }
          goto LAB_005c5773;
        }
      }
    }
LAB_005c577d:
    iVar8 = (int)param_6 + 0x170;
  }
LAB_005c597b:
  FUN_005ec4b0(iVar8);
LAB_005c5980:
  iVar8 = *param_3;
  if ((iVar8 != 0) && ((*(uint *)(iVar8 + 0x134) & 0x800) != 0)) {
    *(uint *)(iVar8 + 0x134) = *(uint *)(iVar8 + 0x134) | 0x1000;
  }
  return pIVar5;
}


