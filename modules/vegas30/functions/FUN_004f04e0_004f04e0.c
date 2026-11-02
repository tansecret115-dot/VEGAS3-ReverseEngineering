/* Module: vegas30.exe
   Function: FUN_004f04e0
   Address: 004f04e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f04e0(char *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (((((DVar1 == DAT_00647208) && (DAT_0064762c != 0)) && (*(int *)(DAT_0064762c + 0x6c) != 0)) &&
      (DAT_0064a50c != 0)) &&
     (((DAT_0064a570 != 0 || (param_1 == (char *)0x0)) ||
      ((*param_1 != '\\' || ((param_1[1] != '\\' || (param_1[2] == '\0')))))))) {
    SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0x6c) + 0x184),0x60c,0,(LPARAM)param_1);
  }
  return;
}


