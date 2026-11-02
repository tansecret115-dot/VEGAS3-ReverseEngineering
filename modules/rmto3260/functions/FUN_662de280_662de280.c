/* Module: rmto3260.dll
   Function: FUN_662de280
   Address: 662de280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662de280(int *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  _MEMORYSTATUS *p_Var3;
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  (**(code **)(*param_1 + 0x14))(param_1,0x20);
  local_24.dwLength = (DWORD)&local_24;
  local_24.dwMemoryLoad = (**(code **)(*param_1 + 0x1c))(param_1);
  pDVar1 = (DWORD *)(**(code **)(*param_1 + 0x1c))(param_1);
  p_Var3 = &local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar1 = p_Var3->dwLength;
    p_Var3 = (_MEMORYSTATUS *)&p_Var3->dwMemoryLoad;
    pDVar1 = pDVar1 + 1;
  }
  return 0;
}


