/* Module: vidcap30.exe
   Function: FUN_00464400
   Address: 00464400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00464400(undefined4 *param_1)

{
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  LPVOID pvVar4;
  ULARGE_INTEGER *unaff_EBX;
  LPSTREAM local_10;
  LPSTREAM pIStack_c;
  HGLOBAL pvStack_8;
  undefined4 uStack_4;
  
  *param_1 = &PTR_FUN_00592174;
  if ((HGDIOBJ)param_1[0x32] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x32]);
    param_1[0x32] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    local_10 = (IStream *)0x0;
    HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_10);
    if (-1 < HVar2) {
      iVar3 = (**(code **)(*(int *)param_1[1] + 0x14))((int *)param_1[1],local_10);
      if (-1 < iVar3) {
        HVar2 = (*local_10->lpVtbl->Seek)
                          (local_10,(LARGE_INTEGER)0x200000000,(DWORD)&pvStack_8,unaff_EBX);
        if (-1 < HVar2) {
          pvStack_8 = (HGLOBAL)0x0;
          HVar2 = GetHGlobalFromStream(pIStack_c,&pvStack_8);
          if (-1 < HVar2) {
            pvVar4 = GlobalLock(pvStack_8);
            _SfSetMetricBinary_16(DAT_005ba29c,0xfffff128,pvVar4,uStack_4);
            GlobalUnlock(pvStack_8);
          }
        }
      }
      (*local_10->lpVtbl->Release)(local_10);
      local_10 = (IStream *)0x0;
    }
    (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
    param_1[1] = 0;
    if (param_1[0x31] != 0) {
      _SfMetric_Close_4(param_1[0x31]);
      param_1[0x31] = 0;
    }
    if ((HMODULE)param_1[0x30] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)param_1[0x30]);
      param_1[0x30] = 0;
    }
  }
  return;
}


