/* Module: vegas30.exe
   Function: FUN_004134f0
   Address: 004134f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004134f0(int *param_1,int param_2)

{
  code *pcVar1;
  tagRECT local_10;
  
  pcVar1 = *(code **)(*param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,1);
  }
  if (param_2 == 0) {
    DestroyWindow((HWND)param_1[2]);
    param_1 = (int *)0x0;
  }
  else {
    GetWindowRect((HWND)param_1[2],&local_10);
    param_1[9] = local_10.left;
    param_1[10] = local_10.top;
    param_1[0xb] = local_10.right - local_10.left;
    param_1[0xc] = local_10.bottom - local_10.top;
    FUN_004117d0(param_1,4,param_1[4],0);
    param_1[3] = param_1[3] & 0xfffffff7;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,0);
  }
  return;
}


