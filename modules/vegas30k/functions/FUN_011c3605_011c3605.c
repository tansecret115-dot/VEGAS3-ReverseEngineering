/* Module: vegas30k.dll
   Function: FUN_011c3605
   Address: 011c3605
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c3605(undefined4 param_1,UINT param_2,UINT param_3,LPCWAVEFORMATEX param_4)

{
  uint uVar1;
  LPCWAVEFORMATEX pwfx;
  HANDLE hEvent;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EDI;
  
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) | 1;
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(param_2 + 0x16c) = hEvent;
  ResetEvent(hEvent);
  pwfx = param_4;
  *(undefined4 *)(unaff_EDI + 0x138 + *(int *)(unaff_EDI + 0x1b8) * 4) =
       *(undefined4 *)(param_2 + 0x16c);
  *(int *)(unaff_EDI + 0x1b8) = *(int *)(unaff_EDI + 0x1b8) + 1;
  MVar2 = waveOutOpen((LPHWAVEOUT)(param_2 + 0x3c),param_3,param_4,*(DWORD_PTR *)(param_2 + 0x16c),0
                      ,0x50002);
  iVar3 = FUN_011c1770(MVar2);
  if (iVar3 < 0) {
    iVar3 = _SfIsWin95_0();
    if (iVar3 == 0) {
      MessageBeep(0);
      PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,0);
    }
    else {
      sndPlaySoundA((LPCSTR)0x0,0);
    }
    MVar2 = waveOutOpen((LPHWAVEOUT)(param_2 + 0x3c),param_3,pwfx,*(DWORD_PTR *)(param_2 + 0x16c),0,
                        0x50002);
    iVar3 = FUN_011c1770(MVar2);
    if (iVar3 < 0) goto LAB_011c36ef;
  }
  param_3 = param_2;
  iVar3 = _SfList_InsertList_16(*(undefined4 *)(unaff_EDI + 0x128),0xffffffff,&param_3,1);
  if (-1 < iVar3) {
    return iVar3;
  }
LAB_011c36ef:
  if (*(int *)(param_2 + 0x16c) != 0) {
    uVar1 = *(uint *)(unaff_EDI + 0x1b8);
    uVar4 = 0;
    if (uVar1 != 0) {
      piVar6 = (int *)(unaff_EDI + 0x138);
      do {
        if (*piVar6 == *(int *)(param_2 + 0x16c)) break;
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar4 < uVar1);
    }
    *(uint *)(unaff_EDI + 0x1b8) = uVar1 - 1;
    if (uVar4 < uVar1 - 1) {
      puVar5 = (undefined4 *)(unaff_EDI + 0x138 + uVar4 * 4);
      do {
        uVar4 = uVar4 + 1;
        *puVar5 = puVar5[1];
        puVar5 = puVar5 + 1;
      } while (uVar4 < *(uint *)(unaff_EDI + 0x1b8));
    }
    CloseHandle(*(HANDLE *)(param_2 + 0x16c));
    *(undefined4 *)(param_2 + 0x16c) = 0;
  }
  return iVar3;
}


