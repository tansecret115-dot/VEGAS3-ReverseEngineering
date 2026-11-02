/* Module: vegas30k.dll
   Function: FUN_011c6a20
   Address: 011c6a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c6a20(int param_1)

{
  int iVar1;
  MMRESULT MVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int iVar5;
  LPWAVEHDR pwh;
  
  if ((*(uint *)(param_1 + 0x68) & 1) == 0) {
    return -0x7fff0001;
  }
  if ((*(uint *)(param_1 + 0x68) & 2) == 0) {
    return -0x7fff0001;
  }
  iVar5 = 0;
  iVar1 = (**(code **)(param_1 + 0x17c))(param_1,4,*(undefined4 *)(param_1 + 0x180),0,0);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
    ResetEvent(*(HANDLE *)(param_1 + 0x21c));
    *(undefined4 *)(param_1 + 0x22c) = 1;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      pwh = (LPWAVEHDR)(param_1 + 0x1c4);
      piVar4 = (int *)(param_1 + 0x1c8);
      do {
        if (*(int *)(param_1 + 0x6c) == 0) break;
        if (pwh->lpData == (LPSTR)0x0) {
LAB_011c6b07:
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 8;
          pwh = pwh + 1;
        }
        else {
          *piVar4 = (uint)*(ushort *)(param_1 + 400) * *(int *)(param_1 + 0x1bc) * 2;
          MVar2 = waveOutUnprepareHeader(*(HWAVEOUT *)(param_1 + 0x6c),pwh,0x20);
          iVar1 = FUN_011c1770(MVar2);
          if (-1 < iVar1) goto LAB_011c6b07;
          waveOutReset(*(HWAVEOUT *)(param_1 + 0x6c));
        }
      } while (iVar5 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(param_1 + 0x22c) = 0x3bc;
    if (*(HWAVEOUT *)(param_1 + 0x6c) != (HWAVEOUT)0x0) {
      waveOutClose(*(HWAVEOUT *)(param_1 + 0x6c));
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (*(LPCVOID *)(param_1 + 0x204) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x204));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x204));
      GlobalFree(pvVar3);
    }
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffb;
    iVar1 = (**(code **)(param_1 + 0x17c))(param_1,5,*(undefined4 *)(param_1 + 0x180),0,0);
  }
  return iVar1;
}


