/* Module: vidcap30.exe
   Function: FUN_0045b550
   Address: 0045b550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b550(LPCSTR param_1,undefined4 param_2)

{
  BOOL BVar1;
  ULARGE_INTEGER local_10;
  ULARGE_INTEGER local_8;
  
  BVar1 = GetDiskFreeSpaceExA(param_1,&local_8,&local_10,(PULARGE_INTEGER)0x0);
  if (BVar1 == 0) {
    local_10.s.LowPart = 0;
    local_10.s.HighPart = 0;
    local_8.s.LowPart = 0;
    local_8.s.HighPart = 0;
  }
  _SfGetByteSizeText2_12(local_10.s.LowPart,local_10.s.HighPart,param_2);
  return;
}


