/* Module: wavplug.dll
   Function: FUN_5f3942b0
   Address: 5f3942b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f3942b0(LPCSTR param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,DWORD *param_8,DWORD *param_9)

{
  DWORD lDistanceToMove;
  HANDLE hFile;
  
  lDistanceToMove = SetFilePointer((HANDLE)*param_2,0,(PLONG)0x0,1);
  CloseHandle((HANDLE)*param_2);
  FUN_5f394120(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  *param_2 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    return 0x8004e007;
  }
  SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
  return 0;
}


