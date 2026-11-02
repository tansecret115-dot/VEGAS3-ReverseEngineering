/* Module: rv303260.dll
   Function: FUN_672081d0
   Address: 672081d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_672081d0(LPVOID param_1)

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
    this_00 = FUN_6720e6d0(this,s_erv33260_dll_67214620,2);
  }
  *(undefined4 **)((int)param_1 + 0x20) = this_00;
  if (this_00 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (this_00[1] != 0) {
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    return 0x6e;
  }
  pFVar1 = FUN_6720e920(this_00,s_YUV420toRV20Init_672148b8);
  *(FARPROC *)((int)param_1 + 0x24) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20Free_672148a4);
  *(FARPROC *)((int)param_1 + 0x2c) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20Transform_6721488c);
  *(FARPROC *)((int)param_1 + 0x28) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20GetDecodedFrames_6721486c);
  *(FARPROC *)((int)param_1 + 0x30) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20GetDecodedYUVFrames_6721484c);
  *(FARPROC *)((int)param_1 + 0x34) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetRateControl_67214830);
  *(FARPROC *)((int)param_1 + 0x38) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetRateControls_67214814);
  *(FARPROC *)((int)param_1 + 0x3c) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20CustomMessage_672147f8);
  *(FARPROC *)((int)param_1 + 0x40) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20HiveMessage_672147e0);
  *(FARPROC *)((int)param_1 + 0x44) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20SetCpuUsage_672147c8);
  *(FARPROC *)((int)param_1 + 0x48) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)((int)param_1 + 0x20),s_YUV420toRV20MaxCompressedSize_672147a8);
  *(FARPROC *)((int)param_1 + 0x4c) = pFVar1;
  if (DAT_672167d0 == 0) {
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
      DAT_672167d4 = 1;
    }
    DAT_672167d0 = 1;
  }
  if (DAT_672167d4 == 0) {
    return 0;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x58) = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x5c) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_672084b0,param_1,0,
                            (LPDWORD)((int)param_1 + 0x54));
      *(HANDLE *)((int)param_1 + 0x50) = pvVar2;
      if (pvVar2 != (HANDLE)0x0) {
        DVar3 = WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x5c),0xffffffff);
        if (DVar3 == 0) {
          (&DAT_67216768)[DAT_672167d8] = *(undefined4 *)((int)param_1 + 0x5c);
          DAT_672167d8 = DAT_672167d8 + 1;
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


