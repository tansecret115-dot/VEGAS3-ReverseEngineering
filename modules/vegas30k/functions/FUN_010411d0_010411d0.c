/* Module: vegas30k.dll
   Function: FUN_010411d0
   Address: 010411d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_010411d0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar3 = *(int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar3 == 0) {
LAB_01041234:
    if (*(int *)(param_1 + 0x90) == 0) goto LAB_01041240;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    iVar4 = 0;
    do {
      puVar1 = (uint *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0x18);
      iVar4 = iVar4 + *puVar1 / (uint)*(ushort *)(param_1 + 0x26);
      iVar3 = iVar3 + -1;
      if ((iVar3 == 0) || (iVar2 == 0)) break;
    } while (*(int *)(iVar2 + 4) != 0);
    goto LAB_01041234;
  }
  iVar4 = 0;
LAB_01041240:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return iVar4;
}


