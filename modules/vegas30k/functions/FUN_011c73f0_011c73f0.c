/* Module: vegas30k.dll
   Function: FUN_011c73f0
   Address: 011c73f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c73f0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  HANDLE hEvent;
  
  if ((*(byte *)(param_1 + 0x68) & 0x10) == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x21c));
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  bVar1 = *(byte *)(param_1 + 0x68);
  do {
    if ((bVar1 & 0x10) == 0) {
      hEvent = *(HANDLE *)(param_1 + 0x21c);
LAB_011c74f9:
      ResetEvent(hEvent);
LAB_011c74ff:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
      ResetEvent(*(HANDLE *)(param_1 + 0x21c));
      *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x208) * 0x20;
    uVar2 = *(uint *)(iVar3 + 0x1d4 + param_1);
    if ((uVar2 & 1) == 0) goto LAB_011c74ff;
    *(uint *)(iVar3 + 0x1d4 + param_1) = uVar2 & 0xfffffffe;
    *(undefined4 *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c8 + param_1) = 0;
    if ((*(byte *)(param_1 + 0x68) & 0x10) == 0) goto LAB_011c74ff;
    iVar3 = FUN_011c7300(*(undefined4 *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c4 + param_1),
                         *(undefined4 *)(param_1 + 0x1bc));
    if (iVar3 < 0) {
      hEvent = *(HANDLE *)(param_1 + 0x21c);
      goto LAB_011c74f9;
    }
    *(uint *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c8 + param_1) =
         (uint)*(ushort *)(param_1 + 400) * iVar3;
    iVar3 = FUN_011c72a0(*(undefined4 *)(param_1 + 0x208));
    if (iVar3 < 0) goto LAB_011c74ff;
    iVar3 = *(int *)(param_1 + 0x208) + 1;
    *(int *)(param_1 + 0x208) = iVar3;
    if (iVar3 == *(int *)(param_1 + 0x1c0)) {
      *(undefined4 *)(param_1 + 0x208) = 0;
    }
    *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
    if ((*(byte *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1d4 + param_1) & 0x10) != 0)
    goto LAB_011c74ff;
    bVar1 = *(byte *)(param_1 + 0x68);
  } while( true );
}


