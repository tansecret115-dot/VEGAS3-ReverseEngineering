/* Module: mcplug.dll
   Function: FUN_00417340
   Address: 00417340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00417340(int param_1)

{
  undefined4 *puVar1;
  HMODULE pHVar2;
  LSTATUS LVar3;
  int iVar4;
  WCHAR local_954 [259];
  undefined2 local_74e;
  WCHAR local_74c [259];
  undefined2 local_546;
  WCHAR local_544 [259];
  undefined2 local_33e;
  uchar local_338 [260];
  HKEY local_234;
  uchar local_230 [260];
  DWORD local_12c;
  UINT local_128;
  undefined4 local_124;
  uchar local_120 [260];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0047a398;
  puStack_10 = &DAT_0047376c;
  local_14 = ExceptionList;
  local_1c = &stack0xfffff688;
  iVar4 = 0;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0042e390(DAT_00487a68,local_120,0x104);
  FUN_0042df30(local_120,0x104);
  _mbscat(local_120,(uchar *)"mcmpegmarket");
  FUN_0042df30(local_120,0x104);
  _mbscat(local_120,(uchar *)"sfmarket2.dll");
  local_8 = 0;
  local_128 = SetErrorMode(0x8000);
  pHVar2 = LoadLibraryA((LPCSTR)local_120);
  *(HMODULE *)(param_1 + 0x90) = pHVar2;
  SetErrorMode(local_128);
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar4 = -0x7ffb1ff9;
    local_124 = 0x8004e007;
  }
  local_8 = 0xffffffff;
  if (-1 < iVar4) {
    iVar4 = FUN_00437840(*(HMODULE *)(param_1 + 0x90),&DAT_00477250);
    if (-1 < iVar4) {
      FUN_00468ea0(DAT_00487a70,local_338,0x104);
      FUN_00468e50(DAT_00487a70,local_230,0x104);
      _mbscat(local_338,local_230);
      local_234 = (HKEY)0x0;
      LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)local_338,0,0x2001f,&local_234);
      if (LVar3 != 0) {
        RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)local_338,0,(LPSTR)0x0,0,0x2001f,
                        (LPSECURITY_ATTRIBUTES)0x0,&local_234,&local_12c);
      }
      if (local_234 != (HKEY)0x0) {
        RegCloseKey(local_234);
        local_234 = (HKEY)0x0;
        puVar1 = (undefined4 *)(param_1 + 0x94);
        iVar4 = FUN_00437100(puVar1,"MC MPEG Plug-In",0x100000d,0);
        if (-1 < iVar4) {
          MultiByteToWideChar(0,1,PTR_s_mcmpeg12_00486738,-1,local_954,0x104);
          local_74e = 0;
          MultiByteToWideChar(0,1,(LPCSTR)local_338,-1,local_74c,0x104);
          local_546 = 0;
          MultiByteToWideChar(0,1,"mcmpeg_10.udat",-1,local_544,0x104);
          local_33e = 0;
          iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                            (*(int **)(param_1 + 0xc),local_74c,*puVar1,local_954,
                             *(undefined4 *)((int)DAT_00487a70 + 0x30),local_544);
          if (iVar4 < 0) {
            if ((void *)*puVar1 != (void *)0x0) {
              FUN_004375d0((void *)*puVar1);
              *puVar1 = 0;
            }
            (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
            *(undefined4 *)(param_1 + 0xc) = 0;
            ExceptionList = local_14;
            return iVar4;
          }
          _mbscpy((uchar *)(param_1 + 0x9c),&DAT_00487b21);
        }
      }
    }
  }
  ExceptionList = local_14;
  return iVar4;
}


