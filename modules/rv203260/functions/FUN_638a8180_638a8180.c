/* Module: rv203260.dll
   Function: FUN_638a8180
   Address: 638a8180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a8180(LPVOID param_1)

{
  void *this;
  undefined4 *this_00;
  FARPROC pFVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  _SYSTEM_INFO local_28;
  
  this = operator_new(0x18);
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_638af160(this,s_erv23260_dll_638b4524,2);
  }
  *(undefined4 **)((int)param_1 + 0x20) = this_00;
  if (this_00 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (this_00[1] != 0) {
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    return 0x6e;
  }
  pFVar1 = FUN_638af3b0(this_00,s_YUV420toRV20Init_638b47c0);
  *(FARPROC *)((int)param_1 + 0x24) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20Free_638b47ac);
  *(FARPROC *)((int)param_1 + 0x2c) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20Transform_638b4794);
  *(FARPROC *)((int)param_1 + 0x28) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20GetDecodedFrames_638b4774);
  *(FARPROC *)((int)param_1 + 0x30) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20GetDecodedYUVFrames_638b4754);
  *(FARPROC *)((int)param_1 + 0x34) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetRateControl_638b4738);
  *(FARPROC *)((int)param_1 + 0x38) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetRateControls_638b471c);
  *(FARPROC *)((int)param_1 + 0x3c) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20CustomMessage_638b4700);
  *(FARPROC *)((int)param_1 + 0x40) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20HiveMessage_638b46e8);
  *(FARPROC *)((int)param_1 + 0x44) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetCpuUsage_638b46d0);
  *(FARPROC *)((int)param_1 + 0x48) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)((int)param_1 + 0x20),s_YUV420toRV20MaxCompressedSize_638b46b0);
  *(FARPROC *)((int)param_1 + 0x4c) = pFVar1;
  if (DAT_638b66e0 == 0) {
    GetSystemInfo(&local_28);
    iVar5 = 0;
    if ((((0 < (int)local_28.dwNumberOfProcessors) && ((int)local_28.dwNumberOfProcessors < 0x20))
        && (local_28.dwActiveProcessorMask != 0)) &&
       (iVar4 = 0, 0 < (int)local_28.dwNumberOfProcessors)) {
      do {
        if ((local_28.dwActiveProcessorMask & 1 << ((byte)iVar4 & 0x1f)) != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_28.dwNumberOfProcessors);
    }
    if (1 < iVar5) {
      DAT_638b66e4 = 1;
    }
    DAT_638b66e0 = 1;
  }
  if (DAT_638b66e4 == 0) {
    return 0;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x58) = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x5c) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_638a8460,param_1,0,
                            (LPDWORD)((int)param_1 + 0x54));
      *(HANDLE *)((int)param_1 + 0x50) = pvVar2;
      if (pvVar2 != (HANDLE)0x0) {
        DVar3 = WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x5c),0xffffffff);
        if (DVar3 == 0) {
          (&DAT_638b6678)[DAT_638b66e8] = *(undefined4 *)((int)param_1 + 0x5c);
          DAT_638b66e8 = DAT_638b66e8 + 1;
          return 0;
        }
        TerminateThread(*(HANDLE *)((int)param_1 + 0x50),0xffffffff);
        *(undefined4 *)((int)param_1 + 0x50) = 0;
      }
      CloseHandle(*(HANDLE *)((int)param_1 + 0x5c));
      *(undefined4 *)((int)param_1 + 0x5c) = 0;
    }
    CloseHandle(*(HANDLE *)((int)param_1 + 0x58));
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  return 0x6f;
}


