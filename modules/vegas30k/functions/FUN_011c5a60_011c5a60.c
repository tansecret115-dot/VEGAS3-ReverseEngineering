/* Module: vegas30k.dll
   Function: FUN_011c5a60
   Address: 011c5a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011c5a60(int param_1,uint param_2)

{
  MMRESULT MVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  tagWAVEOUTCAPSA *ptVar8;
  tagWAVEINCAPSA *ptVar9;
  int *local_68;
  tagWAVEINCAPSA tStack_64;
  tagWAVEOUTCAPSA local_34;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  ptVar8 = &local_34;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    ptVar8->wMid = 0;
    ptVar8->wPid = 0;
    ptVar8 = (tagWAVEOUTCAPSA *)&ptVar8->vDriverVersion;
  }
  MVar1 = waveOutGetDevCapsA(*(UINT_PTR *)(param_1 + 0x70),&local_34,0x34);
  iVar6 = FUN_011c1770(MVar1);
  if (-1 < iVar6) {
    _mbscpy((uchar *)(param_1 + 0x78),(uchar *)local_34.szPname);
    iVar6 = _SfList_CreateExZ_32(param_1 + 0x210,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (-1 < iVar6) {
      iVar7 = 0;
      param_2 = param_2 >> 1;
      if (param_2 != 0) {
        do {
          pvVar2 = GlobalAlloc(0x40,0x238);
          pvVar3 = GlobalLock(pvVar2);
          if (pvVar3 == (LPVOID)0x0) {
            return -0x7ff8fff2;
          }
          piVar4 = (int *)FUN_011d14b0(param_1,*(undefined4 *)(param_1 + 0x70),iVar7);
          if (piVar4 == (int *)0x0) {
            return -0x7ff8fff2;
          }
          iVar6 = FUN_011d16a0();
          if ((iVar6 < 0) ||
             (local_68 = piVar4,
             iVar6 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x210),0xffffffff,&local_68,1),
             iVar6 < 0)) {
            if (piVar4 == (int *)0x0) {
              return iVar6;
            }
            (**(code **)(*piVar4 + 0x6c))(1);
            return iVar6;
          }
          (**(code **)(*piVar4 + 4))(piVar4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_2);
      }
      if (-1 < iVar6) {
        uVar5 = (~local_34.dwSupport >> 5 & 1) << 6 | *(uint *)(param_1 + 0x68) & 0xffffffbf;
        iVar6 = 0;
        *(uint *)(param_1 + 0x68) = ((int)(uVar5 << 0x19) >> 0x1a ^ uVar5) & 0x20 ^ uVar5;
        local_68 = (int *)waveInGetNumDevs();
        if (local_68 != (int *)0x0) {
          piVar4 = (int *)0x0;
          if (local_68 != (int *)0x0) {
            do {
              ptVar9 = &tStack_64;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                ptVar9->wMid = 0;
                ptVar9->wPid = 0;
                ptVar9 = (tagWAVEINCAPSA *)&ptVar9->vDriverVersion;
              }
              MVar1 = waveInGetDevCapsA((UINT_PTR)piVar4,&tStack_64,0x30);
            } while (((((MVar1 != 0) ||
                       (iVar7 = lstrcmpA(local_34.szPname,tStack_64.szPname), iVar7 != 0)) ||
                      (local_34.wMid != tStack_64.wMid)) ||
                     (local_34.vDriverVersion != tStack_64.vDriverVersion)) &&
                    (piVar4 = (int *)((int)piVar4 + 1), piVar4 < local_68));
          }
          if ((piVar4 != local_68) &&
             (iVar6 = _SfList_CreateExZ_32(param_1 + 0x218,4,0xffffffff,0xffffffff,0x40000000,0,0,0)
             , -1 < iVar6)) {
            *(int **)(param_1 + 0x74) = piVar4;
            if ((2 < tStack_64.wChannels) && (tStack_64.wChannels != 0xffff)) {
              param_2 = (tStack_64._44_4_ & 0xffff) >> 1;
            }
            iVar7 = 0;
            if (param_2 != 0) {
              do {
                pvVar2 = GlobalAlloc(0x40,0x538);
                pvVar3 = GlobalLock(pvVar2);
                if (pvVar3 == (LPVOID)0x0) {
                  return -0x7ff8fff2;
                }
                piVar4 = (int *)FUN_011c7820(param_1,*(undefined4 *)(param_1 + 0x74),iVar7);
                if (piVar4 == (int *)0x0) {
                  return -0x7ff8fff2;
                }
                iVar6 = FUN_011c7ab0();
                if ((iVar6 < 0) ||
                   (local_68 = piVar4,
                   iVar6 = _SfList_InsertList_16
                                     (*(undefined4 *)(param_1 + 0x218),0xffffffff,&local_68,1),
                   iVar6 < 0)) {
                  if (piVar4 == (int *)0x0) {
                    return iVar6;
                  }
                  (**(code **)(*piVar4 + 0x90))(1);
                  return iVar6;
                }
                (**(code **)(*piVar4 + 4))(piVar4);
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)param_2);
            }
          }
        }
      }
    }
  }
  return iVar6;
}


