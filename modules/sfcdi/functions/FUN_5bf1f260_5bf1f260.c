/* Module: sfcdi.dll
   Function: FUN_5bf1f260
   Address: 5bf1f260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1f260(HSFCD__ *param_1,int param_2,int param_3)

{
  HCURSOR hCursor;
  DWORD DVar1;
  DWORD DVar2;
  undefined4 uVar3;
  ulong local_34;
  HCURSOR local_30;
  _mediainfo local_2c [44];
  
  hCursor = (HCURSOR)FUN_5bf37b40(0x7f02);
  local_30 = SetCursor(hCursor);
  uVar3 = 0x8004e0c9;
  local_34 = 0;
  if (param_3 == 0) {
    SfCD_GetProcessTime(param_1,1,&local_34);
  }
  DVar1 = timeGetTime();
  cdr_GetMediaInfo(param_1,local_2c);
  while (((byte)local_2c[0] & 1) == 0) {
    DVar2 = timeGetTime();
    if (DVar1 + local_34 <= DVar2) goto LAB_5bf1f2ff;
    cdr_GetMediaInfo(param_1,local_2c);
  }
  if (((byte)local_2c[0] & 2) == 0) {
    if ((param_2 == 0) || (((byte)local_2c[0] & 4) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x8004e0ca;
    }
  }
  else {
    uVar3 = 0x8004e0ca;
  }
LAB_5bf1f2ff:
  if (local_30 != (HCURSOR)0x0) {
    SetCursor(local_30);
  }
  return uVar3;
}


