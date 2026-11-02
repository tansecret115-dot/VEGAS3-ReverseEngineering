/* Module: vegas30k.dll
   Function: FUN_011cd640
   Address: 011cd640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011cd640(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  MMRESULT MVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  LPWAVEHDR pwh;
  undefined8 uVar8;
  
  pwh = (LPWAVEHDR)0x0;
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x78) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x338);
    do {
      if (*(int *)*puVar5 == param_2) {
        pwh = *(LPWAVEHDR *)(*(int *)(param_1 + 0x338) + uVar2 * 4);
        break;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x78));
  }
  if ((pwh->dwFlags & 0x10) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    iVar7 = 0;
    pwh->dwBufferLength = *(ushort *)(*(int *)(param_1 + 0x60) + 0xc) * param_3;
    if (((*(int *)(param_1 + 0x288) != 0) || (*(int *)(param_1 + 0x28c) != 0x3ff00000)) &&
       (*(int *)(param_1 + 0x2b4) == 0)) {
      uVar8 = FUN_011cdd30(pwh);
      iVar7 = (int)((ulonglong)uVar8 >> 0x20);
      param_3 = (uint)uVar8;
    }
    MVar3 = waveOutWrite(*(HWAVEOUT *)(param_1 + 0x2f4),pwh,0x20);
    uVar4 = FUN_011c1770(MVar3);
    if (MVar3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x1f0);
      uVar6 = *(ushort *)(*(int *)(param_1 + 0x60) + 0xc) * param_3;
      uVar1 = *(uint *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0x1f0) = uVar2 + uVar6;
      *(uint *)(param_1 + 0xa0) = uVar1 + param_3;
      *(uint *)(param_1 + 500) = *(int *)(param_1 + 500) + (uint)CARRY4(uVar2,uVar6);
      uVar2 = *(uint *)(param_1 + 0x88);
      *(uint *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + iVar7 + (uint)CARRY4(uVar1,param_3);
      *(uint *)(param_1 + 0x88) = uVar2 + param_3;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      iVar7 = *(int *)(param_1 + 0x8c) + iVar7 + (uint)CARRY4(uVar2,param_3);
      *(int *)(param_1 + 0x8c) = iVar7;
      if ((*(int *)(param_1 + 0x84) <= iVar7) &&
         ((*(int *)(param_1 + 0x84) < iVar7 ||
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88))))) {
        SetEvent(*(HANDLE *)(param_1 + 0x330));
        *(undefined4 *)(param_1 + 0x334) = 0x3bd;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    return uVar4;
  }
  return 0x80070005;
}


