/* Module: vegas30k.dll
   Function: FUN_011c3280
   Address: 011c3280
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_011c3280(int param_1)

{
  ushort uVar1;
  UINT UVar2;
  uint uVar3;
  MMRESULT MVar4;
  int iVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  char *lpString1;
  tagWAVEOUTCAPSA *ptVar9;
  UINT_PTR local_40;
  int *local_3c;
  UINT local_38;
  tagWAVEOUTCAPSA local_34;
  
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffffdf;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x28;
  *(undefined4 *)(param_1 + 8) = 4;
  _mbscpy((uchar *)(param_1 + 0xc),(uchar *)"Wave Multi-Port Devices");
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  UVar2 = waveOutGetNumDevs();
  if (UVar2 == 0) {
LAB_011c343e:
    iVar8 = 0;
    if (*(int **)(param_1 + 0x124) != (int *)0x0) {
      iVar8 = **(int **)(param_1 + 0x124);
    }
    return (uint)(iVar8 == 0);
  }
  local_38 = UVar2;
  uVar3 = _SfList_CreateExZ_32(param_1 + 0x124,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < (int)uVar3) {
    local_40 = 0;
    if (UVar2 != 0) {
      do {
        ptVar9 = &local_34;
        for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
          ptVar9->wMid = 0;
          ptVar9->wPid = 0;
          ptVar9 = (tagWAVEOUTCAPSA *)&ptVar9->vDriverVersion;
        }
        MVar4 = waveOutGetDevCapsA(local_40,&local_34,0x34);
        if (MVar4 == 0) {
          iVar8 = 0;
          lpString1 = s_Multichannel_Delta_1010_01208be8;
          do {
            iVar5 = lstrcmpA(lpString1,local_34.szPname);
            if (iVar5 == 0) {
              uVar1 = (&DAT_01208cec)[iVar8 * 0x83];
              local_34.wChannels = uVar1;
              goto LAB_011c3386;
            }
            lpString1 = lpString1 + 0x106;
            iVar8 = iVar8 + 1;
          } while (lpString1 < &DAT_01209000);
          uVar1 = local_34.wChannels;
LAB_011c3386:
          if ((2 < uVar1) && (uVar1 != 0xffff)) {
            hMem = GlobalAlloc(0x40,0x230);
            pvVar6 = GlobalLock(hMem);
            if ((pvVar6 == (LPVOID)0x0) ||
               (piVar7 = (int *)FUN_011c5920(param_1,local_40), piVar7 == (int *)0x0)) {
              return 0x8007000e;
            }
            iVar8 = FUN_011c5a60(local_34._44_4_ & 0xffff);
            if (iVar8 < 0) {
              (**(code **)(*piVar7 + 0x74))(1);
              uVar3 = 0;
            }
            else {
              local_3c = piVar7;
              uVar3 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x124),0xffffffff,&local_3c,1)
              ;
              if ((int)uVar3 < 0) {
                if (piVar7 != (int *)0x0) {
                  (**(code **)(*piVar7 + 0x74))(1);
                }
                break;
              }
              (**(code **)(*piVar7 + 4))(piVar7);
            }
          }
        }
        local_40 = local_40 + 1;
      } while (local_40 < local_38);
    }
    if (-1 < (int)uVar3) goto LAB_011c343e;
  }
  return uVar3;
}


