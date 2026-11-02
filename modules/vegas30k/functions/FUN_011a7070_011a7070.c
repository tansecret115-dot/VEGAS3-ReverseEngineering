/* Module: vegas30k.dll
   Function: FUN_011a7070
   Address: 011a7070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_011a7070(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  iVar4 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x58);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x70) == 0)) {
    uVar5 = 0;
    iVar3 = 0;
    do {
      uVar1 = *(uint *)(iVar2 + 4) / (uint)*(ushort *)(param_2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x18);
      bVar6 = CARRY4(uVar5,uVar1);
      uVar5 = uVar5 + uVar1;
      iVar3 = iVar3 + (uint)bVar6;
      iVar4 = iVar4 + -1;
      if ((iVar4 == 0) || (iVar2 == 0)) break;
    } while (*(int *)(iVar2 + 0xc) != 0);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    iVar3 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  return CONCAT44(iVar3,uVar5);
}


