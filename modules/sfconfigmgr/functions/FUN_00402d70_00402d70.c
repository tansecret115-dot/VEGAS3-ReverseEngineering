/* Module: sfconfigmgr.dll
   Function: FUN_00402d70
   Address: 00402d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402d70(int *param_1,undefined4 *param_2)

{
  int iVar1;
  HDC hdc;
  int *local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  uchar local_78 [40];
  WCHAR local_50 [39];
  undefined2 local_2;
  
  local_88 = (int *)0x0;
  iVar1 = FUN_0040aa50((int)param_1,param_2,L"video",&local_88);
  if (-1 < iVar1) {
    local_8c = (int *)0x0;
    iVar1 = FUN_0040aa50((int)param_1,local_88,L"display",&local_8c);
    if (-1 < iVar1) {
      hdc = GetDC((HWND)0x0);
      local_7c = GetDeviceCaps(hdc,8);
      local_84 = GetDeviceCaps(hdc,10);
      local_80 = GetDeviceCaps(hdc,0xc);
      ReleaseDC((HWND)0x0,hdc);
      FUN_00406090(local_78,"%d");
      MultiByteToWideChar(0,1,(LPCSTR)local_78,-1,local_50,0x28);
      local_2 = 0;
      iVar1 = FUN_00402790(param_1,local_8c,(int *)L"HorzRes",local_50);
      if (-1 < iVar1) {
        FUN_00406090(local_78,"%d");
        MultiByteToWideChar(0,1,(LPCSTR)local_78,-1,local_50,0x28);
        local_2 = 0;
        iVar1 = FUN_00402790(param_1,local_8c,(int *)L"VertRes",local_50);
        if (-1 < iVar1) {
          FUN_00406090(local_78,"%d");
          MultiByteToWideChar(0,1,(LPCSTR)local_78,-1,local_50,0x28);
          local_2 = 0;
          iVar1 = FUN_00402790(param_1,local_8c,(int *)L"BitsPixel",local_50);
        }
      }
      (**(code **)(*local_8c + 8))(local_8c);
      local_8c = (int *)0x0;
    }
    (**(code **)(*local_88 + 8))(local_88);
  }
  return iVar1;
}


