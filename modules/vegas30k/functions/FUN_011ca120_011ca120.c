/* Module: vegas30k.dll
   Function: FUN_011ca120
   Address: 011ca120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011ca120(int param_1,int param_2,int param_3)

{
  uint uVar1;
  MMRESULT MVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  LPWAVEHDR pwh;
  
  pwh = (LPWAVEHDR)0x0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xb4) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x2e8);
    do {
      if (*(int *)*puVar4 == param_2) {
        pwh = *(LPWAVEHDR *)(*(int *)(param_1 + 0x2e8) + uVar1 * 4);
        break;
      }
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xb4));
  }
  if ((pwh->dwFlags & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x2e4) = 0x3c0;
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 0xc) * param_3;
    if (*(uint *)(param_1 + 0xac) <= uVar5) {
      uVar5 = *(uint *)(param_1 + 0xac);
    }
    pwh->dwBufferLength = uVar5;
    pwh->dwUser = uVar1;
    MVar2 = waveInAddBuffer(*(HWAVEIN *)(param_1 + 0x40),pwh,0x20);
    iVar3 = FUN_011c1770(MVar2);
    if (-1 < iVar3) {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      ResetEvent(*(HANDLE *)(param_1 + 0xbc));
    }
    return iVar3;
  }
  return -0x7ff8fffb;
}


