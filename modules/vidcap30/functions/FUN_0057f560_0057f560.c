/* Module: vidcap30.exe
   Function: FUN_0057f560
   Address: 0057f560
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0057f560(void)

{
  HANDLE hObject;
  uint uVar1;
  
  hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (hObject == (HANDLE)0x0) {
    uVar1 = FUN_005835c0();
    return uVar1;
  }
  uVar1 = FUN_0057f5c0(hObject);
  if ((int)uVar1 < 0) {
    CloseHandle(hObject);
    return uVar1;
  }
  uVar1 = FUN_0057fcf0();
  CloseHandle(hObject);
  return (-1 < (int)uVar1) - 1 & uVar1;
}


