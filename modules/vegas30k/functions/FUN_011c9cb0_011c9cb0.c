/* Module: vegas30k.dll
   Function: FUN_011c9cb0
   Address: 011c9cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c9cb0(int param_1,int param_2)

{
  int iVar1;
  MMRESULT MVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    return 0x8004e001;
  }
  if (param_2 != 0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,1,*(undefined4 *)(param_1 + 0x54),0,0);
    if (iVar1 != 0) {
      FUN_011c7f40(1,0,0);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 1;
      if (*(int *)(param_1 + 0xb4) != 0) {
        do {
          *(undefined4 *)(uVar4 * 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2e8) + uVar4 * 4) + 4) =
               *(undefined4 *)(param_1 + 0xac);
          MVar2 = waveInUnprepareHeader
                            (*(HWAVEIN *)(param_1 + 0x40),
                             *(LPWAVEHDR *)(*(int *)(param_1 + 0x2e8) + uVar4 * 4),0x20);
          if (MVar2 == 0x21) {
            waveInReset(*(HWAVEIN *)(param_1 + 0x40));
          }
          else {
            uVar4 = uVar4 + 1;
          }
        } while (uVar4 < *(uint *)(param_1 + 0xb4));
      }
      *(undefined4 *)(param_1 + 0x2e4) = 0x3bf;
      MVar2 = waveInClose(*(HWAVEIN *)(param_1 + 0x40));
      if (MVar2 == 0x21) {
        waveInReset(*(HWAVEIN *)(param_1 + 0x40));
        waveInClose(*(HWAVEIN *)(param_1 + 0x40));
      }
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      SetEvent(*(HANDLE *)(param_1 + 0x2d8));
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x2dc),0xffffffff);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      CloseHandle(*(HANDLE *)(param_1 + 0x2d8));
      CloseHandle(*(HANDLE *)(param_1 + 0x2dc));
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(undefined4 *)(param_1 + 0x2dc) = 0;
      if (*(int *)(param_1 + 0xb4) != 0) {
        do {
          pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(*(int *)(param_1 + 0x2e8) + uVar4 * 4));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(*(int *)(param_1 + 0x2e8) + uVar4 * 4));
          GlobalFree(pvVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0xb4));
      }
      pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(param_1 + 0x2e8));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(param_1 + 0x2e8));
      GlobalFree(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2e8));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2e8));
      GlobalFree(pvVar3);
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      return 0;
    }
    return 0x8000ffff;
  }
  return 0x80004003;
}


