/* Module: sfnetmedia.dll
   Function: FUN_00427930
   Address: 00427930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00427930(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar2 = 0x80004005;
  if (*(int *)(param_1 + 0x60) != 0) {
    pcVar5 = "CancelRequest called";
    uVar2 = 0x19f;
    pcVar4 = "sfinternet.cpp";
    uVar3 = 4;
    puVar1 = FUN_004012b0();
    FUN_004124f0((int)puVar1,uVar3,pcVar4,uVar2,pcVar5);
    *(undefined4 *)(param_1 + 0x34) = 1;
    uVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar2;
}


