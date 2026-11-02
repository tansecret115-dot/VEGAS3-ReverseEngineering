/* Module: sfconfigmgr.dll
   Function: FUN_00402800
   Address: 00402800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402800(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *local_218;
  uchar local_214 [64];
  _OSVERSIONINFOA local_1d4;
  CHAR local_140 [64];
  WCHAR local_100 [63];
  undefined2 local_82;
  WCHAR local_80 [63];
  undefined2 local_2;
  
  local_218 = (int *)0x0;
  iVar1 = FUN_0040aa50((int)param_1,param_2,&DAT_0041a528,&local_218);
  if (-1 < iVar1) {
    local_140[0] = '\0';
    FUN_0040a040(local_140,0x40);
    if (local_140[0] != '\0') {
      MultiByteToWideChar(0,1,local_140,-1,local_80,0x40);
      local_2 = 0;
      iVar1 = FUN_00402790(param_1,local_218,(int *)L"platform",local_80);
      if (-1 < iVar1) {
        local_1d4.dwOSVersionInfoSize = 0x94;
        GetVersionExA(&local_1d4);
        local_214[0] = '\0';
        if (local_1d4.szCSDVersion[0] == '\0') {
          FUN_00406090(local_214,(BYTE *)"%d.%.02d.%.03d");
        }
        else {
          FUN_00406090(local_214,(BYTE *)"%d.%.02d.%.03d (%s)");
        }
        if (local_214[0] != '\0') {
          MultiByteToWideChar(0,1,(LPCSTR)local_214,-1,local_100,0x40);
          local_82 = 0;
          iVar1 = FUN_00402790(param_1,local_218,(int *)L"version",local_100);
        }
      }
    }
    (**(code **)(*local_218 + 8))(local_218);
    return iVar1;
  }
  return iVar1;
}


