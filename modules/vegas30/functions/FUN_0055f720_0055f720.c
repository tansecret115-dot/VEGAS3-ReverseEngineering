/* Module: vegas30.exe
   Function: FUN_0055f720
   Address: 0055f720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055f720(HWND param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_28 [5];
  LPCSTR pCStack_14;
  int iStack_10;
  
  if (param_2 < 0) {
    return 0;
  }
  piVar2 = aiStack_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  aiStack_28[1] = param_2;
  aiStack_28[0] = 1;
  pCStack_14 = param_3;
  iStack_10 = 0x104;
  aiStack_28[2] = 1;
  SendMessageA(param_1,0x1005,0,(LPARAM)aiStack_28);
  _SfAddSlashToPathName_8(param_3,0x104);
  iStack_10 = lstrlenA(param_3);
  pCStack_14 = pCStack_14 + iStack_10;
  iStack_10 = 0x104 - iStack_10;
  aiStack_28[2] = 0;
  SendMessageA(param_1,0x1005,0,(LPARAM)aiStack_28);
  return 1;
}


