/* Module: vegas30k.dll
   Function: FUN_011c3760
   Address: 011c3760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011c3760(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if ((*(byte *)(param_1 + 0x228) & 0x20) == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  waveOutClose(*(HWAVEOUT *)(param_2 + 0x3c));
  if (*(int *)(param_2 + 0x16c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1b8);
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar4 = (int *)(param_1 + 0x138);
      do {
        if (*piVar4 == *(int *)(param_2 + 0x16c)) break;
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 < uVar1);
    }
    *(uint *)(param_1 + 0x1b8) = uVar1 - 1;
    if (uVar2 < uVar1 - 1) {
      puVar3 = (undefined4 *)(param_1 + 0x138 + uVar2 * 4);
      do {
        uVar2 = uVar2 + 1;
        *puVar3 = puVar3[1];
        puVar3 = puVar3 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x1b8));
    }
    CloseHandle(*(HANDLE *)(param_2 + 0x16c));
    *(undefined4 *)(param_2 + 0x16c) = 0;
  }
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffe;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return 0;
}


