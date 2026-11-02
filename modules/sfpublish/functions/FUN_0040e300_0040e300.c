/* Module: sfpublish.dll
   Function: FUN_0040e300
   Address: 0040e300
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT __fastcall FUN_0040e300(int param_1)

{
  HRESULT HVar1;
  LPCSTR lpMultiByteStr;
  undefined4 *puVar2;
  uint uVar3;
  HGLOBAL unaff_EBP;
  ULARGE_INTEGER *unaff_ESI;
  int *unaff_EDI;
  int iVar4;
  undefined4 *puVar5;
  IStream *This;
  IStream *pstm;
  IStream local_1bc;
  int *local_1b8;
  int *local_1b4;
  int *local_1b0;
  int local_1ac;
  WCHAR local_190 [188];
  undefined2 *puStack_18;
  undefined2 local_2;
  
  local_1b4 = (int *)0x0;
  HVar1 = FUN_004241c0(&local_1b4);
  if (-1 < HVar1) {
    local_1b0 = (int *)0x0;
    HVar1 = FUN_00424260((int)local_1b4,local_1b4,L"accountlist",&local_1b0);
    if (-1 < HVar1) {
      local_1ac = FUN_00411650(*(int *)(param_1 + 0x58));
      iVar4 = 0;
      do {
        if (local_1ac <= iVar4) break;
        local_1bc.lpVtbl = (IStreamVtbl *)0x0;
        HVar1 = FUN_00424260((int)local_1b4,local_1b0,L"account",&local_1bc);
        if (-1 < HVar1) {
          lpMultiByteStr = (LPCSTR)FUN_004116d0(*(void **)(param_1 + 0x58),iVar4);
          MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_190,200);
          local_2 = 0;
          local_1b8 = (int *)0x0;
          HVar1 = FUN_004243c0(local_1b4,local_1bc.lpVtbl,local_190,&local_1b8);
          if (-1 < HVar1) {
            (**(code **)(*local_1b8 + 8))(local_1b8);
            local_1b8 = (int *)0x0;
          }
          (**(code **)((local_1bc.lpVtbl)->QueryInterface + 8))(local_1bc.lpVtbl);
        }
        iVar4 = iVar4 + 1;
      } while (-1 < HVar1);
      (**(code **)(*local_1b0 + 8))(local_1b0);
      local_1b4 = (int *)0x0;
      if (-1 < HVar1) {
        HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)&stack0xfffffe40);
        if (-1 < HVar1) {
          pstm = &local_1bc;
          local_1bc.lpVtbl = (IStreamVtbl *)0x0;
          This = (IStream *)&DAT_0043cb50;
          HVar1 = (**(code **)*local_1b8)(local_1b8);
          if (-1 < HVar1) {
            HVar1 = (**(code **)((unaff_ESI->s).LowPart + 0x18))(unaff_ESI,unaff_EDI,1);
            if (((-1 < HVar1) &&
                (HVar1 = (*This->lpVtbl->Seek)
                                   (This,(LARGE_INTEGER)0x200000000,(DWORD)&local_1b4,unaff_ESI),
                -1 < HVar1)) &&
               (HVar1 = GetHGlobalFromStream(pstm,(HGLOBAL *)&stack0xfffffe40), -1 < HVar1)) {
              puVar2 = GlobalLock((HGLOBAL)0x0);
              if (puVar2 == (undefined4 *)0x0) {
                HVar1 = -0x7ff8fff2;
              }
              else {
                local_1b8 = local_1b0;
                local_1b4 = (int *)0x0;
                iVar4 = Ordinal_15(0x11,1,&local_1b8);
                if (iVar4 == 0) {
                  HVar1 = -0x7ff8fff2;
                  GlobalUnlock(unaff_EBP);
                }
                else {
                  HVar1 = Ordinal_23(iVar4,&stack0xfffffe40);
                  if (-1 < HVar1) {
                    puVar5 = (undefined4 *)0x0;
                    for (uVar3 = (uint)local_1b4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *puVar5 = *puVar2;
                      puVar2 = puVar2 + 1;
                      puVar5 = puVar5 + 1;
                    }
                    for (uVar3 = (uint)local_1b4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                    }
                    Ordinal_24(iVar4);
                  }
                  *puStack_18 = 0x2000;
                  *(int *)(puStack_18 + 4) = iVar4;
                  GlobalUnlock(unaff_EBP);
                }
              }
            }
            (*pstm->lpVtbl->Release)(pstm);
          }
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
        (**(code **)(*local_1b8 + 8))(local_1b8);
        return HVar1;
      }
    }
  }
  return HVar1;
}


