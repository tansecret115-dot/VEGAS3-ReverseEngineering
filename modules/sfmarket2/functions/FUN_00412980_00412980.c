/* Module: sfmarket2.dll
   Function: FUN_00412980
   Address: 00412980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00412980(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  HRESULT HVar1;
  undefined4 uVar2;
  int iVar3;
  LPWSTR pWVar4;
  undefined4 *puVar5;
  HGLOBAL hMem;
  undefined4 *puVar6;
  uint uVar7;
  ULARGE_INTEGER *unaff_ESI;
  int *unaff_EDI;
  IStream *This;
  IStream *pstm;
  ULARGE_INTEGER *dwBytes;
  int *piVar8;
  int *local_7c;
  int *piStack_78;
  IStream *pIStack_74;
  int *piStack_70;
  undefined2 auStack_6c [2];
  IStream IStack_68;
  undefined4 uStack_64;
  wchar_t awStack_5c [6];
  IStream aIStack_50 [14];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_3 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  *param_3 = 0;
  local_7c = (int *)0x0;
  HVar1 = FUN_0042e280(&local_7c);
  if (HVar1 < 0) {
    return HVar1;
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    Ordinal_6(0);
    pstm = (IStream *)&DAT_0049635c;
  }
  else {
    Ordinal_6(0);
    pstm = (IStream *)&DAT_00496364;
  }
  uVar2 = Ordinal_2();
  This = &IStack_68;
  Ordinal_8();
  auStack_6c[0] = 8;
  piVar8 = (int *)0x0;
  uStack_64 = uVar2;
  iVar3 = FUN_0042e3b0(unaff_ESI,(int *)unaff_ESI,L"alert",L"global",auStack_6c,
                       (undefined4 *)&stack0xffffff7c);
  if (iVar3 < 0) goto LAB_00412d12;
  iVar3 = FUN_0042e320((int)unaff_ESI,piVar8,&DAT_00496310,(undefined4 *)&stack0xffffff80);
  if (-1 < iVar3) {
    local_7c = (int *)0x0;
    swprintf(awStack_5c,0x496354,*(wchar_t **)(param_1 + 0x1c));
    pstm = aIStack_50;
    iVar3 = FUN_0042e480(local_7c,pIStack_74,pstm,&piStack_70);
    This = pIStack_74;
    if (-1 < iVar3) {
      pstm = (IStream *)0x412aa1;
      (**(code **)(*piStack_70 + 8))(piStack_70);
      local_7c = (int *)0x0;
      This = pIStack_74;
    }
    (**(code **)(iRam00000000 + 8))((IStream *)0x0);
    if (-1 < iVar3) {
      piStack_78 = (int *)0x0;
      iVar3 = FUN_0042e320((int)unaff_ESI,piVar8,L"name",&piStack_78);
      if (-1 < iVar3) {
        local_7c = (int *)0x0;
        iVar3 = FUN_0042e480((int *)unaff_ESI,piStack_78,*(undefined4 *)(param_1 + 4),&local_7c);
        if (-1 < iVar3) {
          (**(code **)(*local_7c + 8))(local_7c);
          local_7c = (int *)0x0;
        }
        (**(code **)(*piStack_78 + 8))(piStack_78);
        if (-1 < iVar3) {
          if (*(int *)(param_1 + 0xc) != 0) {
            piStack_78 = (int *)0x0;
            iVar3 = FUN_0042e320((int)unaff_ESI,piVar8,L"deltatime",&piStack_78);
            if (iVar3 < 0) goto LAB_00412bf6;
            pWVar4 = FUN_0040f380(param_1);
            if (pWVar4 == (LPWSTR)0x0) {
              iVar3 = -0x7fffbffb;
            }
            else {
              local_7c = (int *)0x0;
              iVar3 = FUN_0042e480((int *)unaff_ESI,piStack_78,pWVar4,&local_7c);
              if (-1 < iVar3) {
                (**(code **)(*local_7c + 8))(local_7c);
              }
            }
            (**(code **)(*piStack_78 + 8))(piStack_78);
          }
          if (-1 < iVar3) {
            local_7c = (int *)0x0;
            iVar3 = FUN_0042e320((int)unaff_ESI,piVar8,&DAT_0049634c,&local_7c);
            if (-1 < iVar3) {
              piStack_78 = (int *)0x0;
              iVar3 = FUN_0042e480((int *)unaff_ESI,local_7c,*(undefined4 *)(param_1 + 8),
                                   &piStack_78);
              if (-1 < iVar3) {
                (**(code **)(*piStack_78 + 8))(piStack_78);
                piStack_78 = (int *)0x0;
              }
              (**(code **)(*local_7c + 8))(local_7c);
            }
          }
        }
      }
    }
  }
LAB_00412bf6:
  (**(code **)(*piVar8 + 8))(piVar8);
  if ((-1 < iVar3) &&
     (iVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)&stack0xffffff80), -1 < iVar3)) {
    local_7c = (int *)0x0;
    iVar3 = (*(code *)**(undefined4 **)unaff_ESI)(unaff_ESI,&DAT_004a40b0,&local_7c);
    if (-1 < iVar3) {
      dwBytes = unaff_ESI;
      iVar3 = (**(code **)((unaff_ESI->s).LowPart + 0x18))(unaff_ESI,unaff_EDI,1);
      if ((-1 < iVar3) &&
         (iVar3 = (*This->lpVtbl->Seek)
                            (This,(LARGE_INTEGER)0x200000000,(DWORD)&stack0xffffff74,unaff_ESI),
         -1 < iVar3)) {
        unaff_EDI = (int *)0x0;
        iVar3 = GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xffffff74);
        if (-1 < iVar3) {
          puVar5 = GlobalLock(unaff_EDI);
          hMem = GlobalAlloc(0x40,(SIZE_T)dwBytes);
          puVar6 = GlobalLock(hMem);
          *puStack_14 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            iVar3 = -0x7ff8fff2;
          }
          else {
            for (uVar7 = (uint)dwBytes >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar7 = (uint)dwBytes & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            iVar3 = 0;
            *puStack_18 = dwBytes;
          }
          GlobalUnlock(unaff_EDI);
        }
      }
      (*pstm->lpVtbl->Release)(pstm);
      unaff_ESI = (ULARGE_INTEGER *)0x0;
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
LAB_00412d12:
  (**(code **)((unaff_ESI->s).LowPart + 8))(unaff_ESI);
  Ordinal_6(uVar2);
  return iVar3;
}


