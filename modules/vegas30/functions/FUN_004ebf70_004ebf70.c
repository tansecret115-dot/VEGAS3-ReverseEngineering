/* Module: vegas30.exe
   Function: FUN_004ebf70
   Address: 004ebf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ebf70(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  char local_40;
  char local_3f;
  LONG local_4;
  
  hFile = param_1;
  uVar2 = 0;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  BVar1 = ReadFile(hFile,&local_40,0x40,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && ((HANDLE)0x3f < param_1)) && (local_40 == 'M')) && (local_3f == 'Z')) {
    SetFilePointer(hFile,local_4,(PLONG)0x0,0);
    BVar1 = ReadFile(hFile,&local_40,0x40,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      if ((local_40 == 'P') && (local_3f == 'E')) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  return uVar2;
}


