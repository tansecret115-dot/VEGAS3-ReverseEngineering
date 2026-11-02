/* Module: vegas30.exe
   Function: FUN_00595830
   Address: 00595830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00595830(int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0xf4);
  iVar2 = 3;
  puVar4 = puVar3;
  do {
    DVar1 = GetCurrentThreadId();
    _SfList_SetThreadOwner_8(puVar4[-1],DVar1);
    DVar1 = GetCurrentThreadId();
    _SfList_SetThreadOwner_8(*puVar4,DVar1);
    puVar4 = puVar4 + 0xe;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00595a50(param_1);
  uVar5 = 0;
  while( true ) {
    iVar2 = _SfList_Destroy_4(puVar3[-1]);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = _SfList_Destroy_4(*puVar3);
    if (iVar2 < 0) break;
    _SfQueueDelete_4(puVar3 + 1);
    uVar5 = uVar5 + 1;
    puVar3 = puVar3 + 0xe;
    if (2 < uVar5) {
      return 0;
    }
  }
  return iVar2;
}


