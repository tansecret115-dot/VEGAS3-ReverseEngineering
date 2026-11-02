/* Module: sftrans1.dll
   Function: FUN_0053b5b0
   Address: 0053b5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0053b5b0(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  undefined4 uVar4;
  undefined1 local_18 [24];
  
  iVar2 = ((int *)**(int **)(param_1 + 0x18))[1];
  iVar1 = *(int *)**(int **)(param_1 + 0x18);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  FUN_00543170();
  iVar2 = FUN_005431c0(iVar1,iVar2 + -1);
  if (iVar2 == 0) {
    FUN_00543180();
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x164) == 0) {
    hMem = GlobalAlloc(0x40,0xa8);
    pvVar3 = GlobalLock(hMem);
    if (pvVar3 == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005432b0();
    }
    *(int *)(param_1 + 0x164) = iVar2;
    if (iVar2 == 0) {
      FUN_00543180();
      return 0x8007000e;
    }
  }
  uVar4 = FUN_00543380(local_18);
  FUN_00543250();
  FUN_00543180();
  return uVar4;
}


