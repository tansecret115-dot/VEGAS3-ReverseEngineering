/* Module: vidcap30.exe
   Function: FUN_00464520
   Address: 00464520
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00464520(int param_1)

{
  int *piVar1;
  HMODULE pHVar2;
  LPCSTR lpMultiByteStr;
  LPVOID pvVar3;
  int iVar4;
  LPSTREAM local_6cc;
  SIZE_T local_6c8 [2];
  HGLOBAL local_6c0;
  SIZE_T local_6bc;
  WCHAR local_6b8 [59];
  undefined2 local_642;
  CHAR local_640 [260];
  WCHAR local_53c [259];
  undefined2 local_336;
  WCHAR local_330 [259];
  undefined2 local_12a;
  UINT local_128;
  undefined4 local_124;
  uchar local_120 [260];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00592168;
  puStack_10 = &DAT_00579df0;
  local_14 = ExceptionList;
  local_1c = &stack0xfffff914;
  iVar4 = 0;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 4) = 0;
  _SfGetModulePath_12(0,local_120,0x104);
  _mbscat(local_120,(uchar *)"sfmarket2.dll");
  local_8 = 0;
  local_128 = SetErrorMode(0x8000);
  pHVar2 = LoadLibraryA((LPCSTR)local_120);
  *(HMODULE *)(param_1 + 0xc0) = pHVar2;
  SetErrorMode(local_128);
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar4 = -0x7ffb1ff9;
    local_124 = 0x8004e007;
  }
  local_8 = 0xffffffff;
  if (-1 < iVar4) {
    iVar4 = _SfDllCreateInstance_20
                      (*(undefined4 *)(param_1 + 0xc0),&DAT_0058c738,0,&DAT_0058c708,param_1 + 4);
    if (-1 < iVar4) {
      iVar4 = _SfMetric_OpenSubKey_12(param_1 + 0xc4,DAT_005ba29c,"SfMarket");
      if (-1 < iVar4) {
        lpMultiByteStr = (LPCSTR)FUN_00462dc0(2);
        MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_6b8,0x3c);
        local_642 = 0;
        wsprintfA(local_640,"%s\\%s\\%d.%d","Software\\Sonic Foundry","Video Capture",3,0);
        MultiByteToWideChar(0,1,local_640,-1,local_53c,0x104);
        local_336 = 0;
        MultiByteToWideChar(0,1,"vidcap.udat",-1,local_330,0x104);
        local_12a = 0;
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                          (*(int **)(param_1 + 4),local_53c,*(undefined4 *)(param_1 + 0xc4),
                           local_6b8,*(undefined4 *)(DAT_005bba3c + 0x30),local_330);
        if (-1 < iVar4) {
          local_6bc = 0;
          iVar4 = _SfGetMetricBinaryEx_20(DAT_005ba29c,0xfffff128,&local_6bc,0,&local_6bc);
          if (iVar4 == -0x7ffb1fc4) {
            local_6c0 = GlobalAlloc(2,local_6bc);
            if (local_6c0 != (HGLOBAL)0x0) {
              pvVar3 = GlobalLock(local_6c0);
              local_6c8[0] = 0;
              iVar4 = _SfGetMetricBinaryEx_20(DAT_005ba29c,0xfffff128,pvVar3,local_6bc,local_6c8);
              if (-1 < iVar4) {
                if (local_6bc == local_6c8[0]) {
                  local_6cc = (IStream *)0x0;
                  iVar4 = CreateStreamOnHGlobal(local_6c0,0,&local_6cc);
                  if (-1 < iVar4) {
                    iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                                      (*(int **)(param_1 + 4),local_6cc);
                    if (iVar4 == -0x7ffb1f50) {
                      _SfDeleteMetric_12(DAT_005ba29c,0xfffff128,3);
                      iVar4 = 0;
                    }
                    (*local_6cc->lpVtbl->Release)(local_6cc);
                  }
                }
                else {
                  iVar4 = -0x7fffbffb;
                }
              }
              GlobalUnlock(local_6c0);
              GlobalFree(local_6c0);
            }
          }
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        piVar1 = *(int **)(param_1 + 4);
        if (-1 < iVar4) {
          iVar4 = (**(code **)*piVar1)(piVar1,&DAT_0058c728,param_1 + 8);
          ExceptionList = local_14;
          return iVar4;
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  ExceptionList = local_14;
  return iVar4;
}


