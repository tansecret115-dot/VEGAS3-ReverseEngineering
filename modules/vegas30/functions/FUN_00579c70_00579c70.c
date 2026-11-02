/* Module: vegas30.exe
   Function: FUN_00579c70
   Address: 00579c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00579c70(undefined4 *param_1)

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
  
  *param_1 = &PTR_FUN_00627324;
  if ((HGDIOBJ)param_1[0x7a] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x7a]);
    param_1[0x7a] = 0;
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[4],30000);
    CloseHandle((HANDLE)param_1[4]);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    local_10 = (IStream *)0x0;
    HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_10);
    if (-1 < HVar2) {
      iVar3 = (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],local_10);
      if (-1 < iVar3) {
        HVar2 = (*local_10->lpVtbl->Seek)
                          (local_10,(LARGE_INTEGER)0x200000000,(DWORD)&pvStack_8,unaff_EBX);
        if (-1 < HVar2) {
          pvStack_8 = (HGLOBAL)0x0;
          HVar2 = GetHGlobalFromStream(pIStack_c,&pvStack_8);
          if (-1 < HVar2) {
            pvVar4 = GlobalLock(pvStack_8);
            iVar3 = _SfSetMetricBinary_16(DAT_00647200,0xed8,pvVar4,uStack_4);
            GlobalUnlock(pvStack_8);
            pvStack_8 = (HGLOBAL)0x0;
            if (-1 < iVar3) {
              _SfSetMetricBinary_16(DAT_00647200,0xeda,&DAT_00659e64,0x5c);
            }
          }
        }
      }
      (*local_10->lpVtbl->Release)(local_10);
      local_10 = (IStream *)0x0;
    }
    (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[6] != 0) {
    _SfMetric_Close_4(param_1[6]);
    param_1[6] = 0;
  }
  if ((HMODULE)param_1[5] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[5]);
    param_1[5] = 0;
  }
  return;
}


