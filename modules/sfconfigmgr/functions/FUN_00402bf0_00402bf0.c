/* Module: sfconfigmgr.dll
   Function: FUN_00402bf0
   Address: 00402bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402bf0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *local_84;
  uchar local_80 [32];
  _MEMORYSTATUS local_60;
  WCHAR local_40 [31];
  undefined2 local_2;
  
  local_84 = (int *)0x0;
  iVar1 = FUN_0040aa50((int)param_1,param_2,L"memory",&local_84);
  if (-1 < iVar1) {
    local_60.dwLength = 0x20;
    GlobalMemoryStatus(&local_60);
    FUN_00406090(local_80,"%u");
    MultiByteToWideChar(0,1,(LPCSTR)local_80,-1,local_40,0x20);
    local_2 = 0;
    iVar1 = FUN_00402790(param_1,local_84,(int *)L"physical",local_40);
    if (-1 < iVar1) {
      FUN_00406090(local_80,"%u");
      MultiByteToWideChar(0,1,(LPCSTR)local_80,-1,local_40,0x20);
      local_2 = 0;
      iVar1 = FUN_00402790(param_1,local_84,(int *)L"paging",local_40);
      if (-1 < iVar1) {
        FUN_00406090(local_80,"%u");
        MultiByteToWideChar(0,1,(LPCSTR)local_80,-1,local_40,0x20);
        local_2 = 0;
        iVar1 = FUN_00402790(param_1,local_84,(int *)L"virtual",local_40);
      }
    }
    (**(code **)(*local_84 + 8))(local_84);
  }
  return iVar1;
}


