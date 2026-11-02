/* Module: wmfplug2.dll
   Function: FUN_0041e310
   Address: 0041e310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041e310(HKEY param_1,HWND param_2,int param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  undefined4 *_Memory;
  undefined3 extraout_var;
  WPARAM wParam;
  int iVar3;
  HKEY local_e8;
  uint local_e4;
  DWORD local_e0;
  DWORD local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  CHAR local_c8 [200];
  
  iVar3 = 0;
  RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_e4,(LPDWORD)0x0,(LPDWORD)0x0,
                   (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  local_e0 = 0;
  if (local_e4 != 0) {
    do {
      local_dc = 200;
      LVar2 = RegEnumKeyExA(param_1,local_e0,local_c8,&local_dc,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                            ,(PFILETIME)0x0);
      if ((LVar2 != 0) || (LVar2 = RegOpenKeyExA(param_1,local_c8,0,0x20019,&local_e8), LVar2 != 0))
      {
        return -0x7fffbffb;
      }
      _Memory = calloc(1,0x114);
      if (_Memory == (undefined4 *)0x0) {
        iVar3 = -0x7ff8fff2;
      }
      else {
        if (((param_3 == 0) || (bVar1 = FUN_0041e0d0(local_e8), CONCAT31(extraout_var,bVar1) != 0))
           && (iVar3 = FUN_0041d0f0(local_e8,(LPBYTE)&local_d8), -1 < iVar3)) {
          *_Memory = local_d8;
          _Memory[1] = local_d4;
          _Memory[2] = local_d0;
          _Memory[3] = local_cc;
          iVar3 = FUN_0041dc40(local_e8,(LPSTR)(_Memory + 4),0x104);
          if (-1 < iVar3) {
            wParam = SendMessageA(param_2,0x143,0,(LPARAM)(_Memory + 4));
            if (-1 < (int)wParam) {
              SendMessageA(param_2,0x151,wParam,(LPARAM)_Memory);
              goto LAB_0041e45a;
            }
            iVar3 = -0x7fffbffb;
          }
        }
        free(_Memory);
      }
LAB_0041e45a:
      RegCloseKey(local_e8);
      local_e0 = local_e0 + 1;
    } while (local_e0 < local_e4);
  }
  return iVar3;
}


