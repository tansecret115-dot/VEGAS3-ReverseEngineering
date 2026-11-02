/* Module: vidcap30.exe
   Function: FUN_00583380
   Address: 00583380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00583380(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_005843db;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0057b6e0();
  uStack_4 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00404b20(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = pvStack_c;
  return;
}


