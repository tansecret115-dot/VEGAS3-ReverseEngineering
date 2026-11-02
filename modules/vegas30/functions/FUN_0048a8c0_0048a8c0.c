/* Module: vegas30.exe
   Function: FUN_0048a8c0
   Address: 0048a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048a8c0(undefined4 param_1,int param_2,int param_3)

{
  LPCSTR lpString2;
  int iVar1;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x50) != 0)) {
    local_8 = *(int *)(*(int *)(param_2 + 0x50) + 0x18);
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 0x50) != 0)) {
    iVar1 = *(int *)(*(int *)(param_3 + 0x50) + 0x18);
  }
  if (local_8 == 0) {
    return -(uint)(iVar1 != 0);
  }
  if (iVar1 == 0) {
    return 1;
  }
  lpString2 = *(LPCSTR *)(iVar1 + 0x154);
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xffffffec,*(LPCSTR *)(local_8 + 0x154),0x105);
  lstrcpynA(&stack0xffffffec,lpString2,0x105);
  iVar1 = lstrcmpA(&stack0xffffffec,&stack0xffffffec);
  return iVar1;
}


