/* Module: sfcdi.dll
   Function: FUN_5bf356c0
   Address: 5bf356c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf356c0(HANDLE param_1,uchar *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  HANDLE hFile;
  DWORD DVar2;
  uchar *_Source;
  size_t local_c;
  HANDLE local_8;
  LONG local_4;
  
  hFile = param_1;
  local_8 = (HANDLE)0x0;
  local_4 = 0;
  DVar2 = SetFilePointer(param_1,0,&local_4,1);
  uVar1 = *param_4;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  _Source = calloc(1,param_3);
  if (_Source == (uchar *)0x0) {
    return 0x8007000e;
  }
  ReadFile(param_1,_Source,param_3,&local_c,(LPOVERLAPPED)0x0);
  if (param_3 != local_c) {
    free(_Source);
    return 0x8004e008;
  }
  _Source[param_3 - 1] = '\0';
  _mbscpy(param_2,_Source);
  free(_Source);
  param_1 = (HANDLE)(uVar1 + DVar2);
  if ((*param_4 & 1) != 0) {
    param_1 = (HANDLE)((int)(uVar1 + DVar2) + 1);
  }
  local_8 = param_1;
  local_4 = 0;
  SetFilePointer(hFile,(LONG)param_1,&local_4,0);
  *param_4 = *param_4 + 1;
  return 0;
}


