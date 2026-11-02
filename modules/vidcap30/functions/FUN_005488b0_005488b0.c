/* Module: vidcap30.exe
   Function: FUN_005488b0
   Address: 005488b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_005488b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  HRESULT HVar4;
  LPPERSISTSTORAGE unaff_EDI;
  int *piVar5;
  
  iVar2 = param_1;
  piVar5 = (int *)&DAT_005a5c68;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
  iVar3 = (**(code **)*puVar1)(puVar1,&DAT_005a5c68,&param_1);
  if (iVar3 == 0) {
    HVar4 = OleSave(unaff_EDI,*(LPSTORAGE *)(*(int *)(iVar2 + 8) + 0x28),1);
    (*unaff_EDI->lpVtbl->SaveCompleted)(unaff_EDI,(IStorage *)0x0);
    (**(code **)(*piVar5 + 8))(piVar5);
    return HVar4;
  }
  return -0x7fffbffb;
}


