/* Module: vegas30.exe
   Function: FUN_0043fd90
   Address: 0043fd90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043fd90(HSFCD__ *param_1,undefined4 param_2,int param_3)

{
  HCURSOR hCursor;
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  ulong local_8;
  HCURSOR local_4;
  
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f02);
  local_4 = SetCursor(hCursor);
  local_8 = 0;
  if (param_3 == 0) {
    SfCD_GetProcessTime(param_1,1,&local_8);
  }
  DVar1 = timeGetTime();
  iVar2 = FUN_0043fd30(param_1,param_2);
  while (((iVar2 != -0x7ffb1f36 && (iVar2 != 0)) && (DVar3 = timeGetTime(), DVar3 < DVar1 + local_8)
         )) {
    iVar2 = FUN_0043fd30(param_1,param_2);
  }
  if (local_4 != (HCURSOR)0x0) {
    SetCursor(local_4);
  }
  return iVar2;
}


