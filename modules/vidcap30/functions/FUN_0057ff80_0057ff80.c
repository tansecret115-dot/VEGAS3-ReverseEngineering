/* Module: vidcap30.exe
   Function: FUN_0057ff80
   Address: 0057ff80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057ff80(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


