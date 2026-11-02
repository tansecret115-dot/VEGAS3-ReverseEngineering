/* Module: vidcap30.exe
   Function: WebBrowse_IsWebControlInstalled
   Address: 0049ad50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall WebBrowse_IsWebControlInstalled(void) */

long WebBrowse_IsWebControlInstalled(void)

{
  HRESULT HVar1;
  int *local_1c;
  uint local_18;
  uint local_14;
  IID local_10;
  
                    /* 0x9ad50  146  ?WebBrowse_IsWebControlInstalled@@YGJXZ */
  local_10.Data1 = 0x8856f961;
  local_10.Data2 = 0x340a;
  local_10.Data3 = 0x11d0;
  local_10.Data4[0] = 0xa9;
  local_10.Data4[1] = 'k';
  local_10.Data4[2] = '\0';
  local_10.Data4[3] = 0xc0;
  local_10.Data4[4] = 'O';
  local_10.Data4[5] = 0xd7;
  local_10.Data4[6] = '\x05';
  local_10.Data4[7] = 0xa2;
  FUN_0049ac70(&local_18,&local_14);
  if (local_18 < 4) {
    return -0x7fffbffb;
  }
  if ((local_18 == 4) && (local_14 < 0x47)) {
    return -0x7fffbffb;
  }
  CoInitialize((LPVOID)0x0);
  local_1c = (int *)0x0;
  HVar1 = CoGetClassObject(&local_10,3,(LPVOID)0x0,(IID *)&DAT_005a5aa8,&local_1c);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  CoUninitialize();
  return HVar1;
}


