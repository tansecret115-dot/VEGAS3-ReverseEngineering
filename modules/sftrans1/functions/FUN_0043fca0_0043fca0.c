/* Module: sftrans1.dll
   Function: FUN_0043fca0
   Address: 0043fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0043fca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75c));
  if (*(int *)(param_1 + 400) == 0) {
    iVar2 = param_1 + 0x778;
    (**(code **)(*(int *)(param_1 + 0x138) + 0x24))(param_1 + 0xa50,iVar2);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x19c);
    (**(code **)(*(int *)(param_1 + 0x138) + 0x28))
              (param_1 + 0xa50,param_1 + 0x1a0,param_1 + 0x478,*(undefined4 *)(param_1 + 0x198),
               iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75c));
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xbc;
  }
  FUN_00437e40(*(undefined4 *)(param_1 + 0xa8),iVar2 + 0x50,iVar1,iVar2 + 8,
               *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x8c));
  return;
}


