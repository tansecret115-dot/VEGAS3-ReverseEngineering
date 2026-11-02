/* Module: erv23260.dll
   Function: FUN_637f10a0
   Address: 637f10a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_637f10a0(undefined4 *param_1)

{
  HANDLE hHandle;
  undefined4 *local_8;
  
  param_1[10] = 0xeb851eb8;
  param_1[8] = 0xaebfc0d1;
  param_1[0xb] = 0x403df851;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_63829050;
  param_1[9] = 0;
  local_8 = param_1;
  FUN_637f1e60(param_1 + 2);
  if (DAT_638307dc == 0) {
    hHandle = (HANDLE)_beginthreadex((void *)0x0,0,FUN_637f1140,(void *)0x0,0,(uint *)&local_8);
    if (hHandle == (HANDLE)0x0) {
      DAT_638307e0 = 1;
    }
    else {
      WaitForSingleObject(hHandle,2000);
      CloseHandle(hHandle);
    }
    DAT_638307dc = 1;
  }
  param_1[0xc] = DAT_638307e0;
  return param_1;
}


