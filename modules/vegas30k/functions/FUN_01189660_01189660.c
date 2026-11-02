/* Module: vegas30k.dll
   Function: FUN_01189660
   Address: 01189660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01189660(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x638);
  bVar2 = false;
  while ((iVar1 != 0 && (!bVar2))) {
    bVar2 = false;
    if ((*(int *)(iVar1 + 0x24) != 0) &&
       ((*(int *)(iVar1 + 0x48) == *(int *)(iVar1 + 0x28) &&
        (*(int *)(iVar1 + 0x4c) == *(int *)(iVar1 + 0x2c))))) {
      bVar2 = true;
    }
    iVar1 = *(int *)(iVar1 + 100);
  }
  return;
}


