/* Module: sfpublish.dll
   Function: FUN_0040d020
   Address: 0040d020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040d020(int param_1)

{
  int iVar1;
  LPCSTR lpMultiByteStr;
  WCHAR local_220 [259];
  undefined2 local_1a;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(void **)(param_1 + 0x6c) != (void *)0x0) {
    iVar1 = FUN_00420870(*(void **)(param_1 + 0x6c),&local_c,&local_14);
    if (-1 < iVar1) {
      FUN_00413b00(*(void **)(param_1 + 0x70),&local_c,&local_14);
    }
    lpMultiByteStr = FUN_00416730(*(LPCSTR *)(param_1 + 0x5c));
    MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_220,0x104);
    local_1a = 0;
    iVar1 = lstrlenA(*(LPCSTR *)(*(int *)(param_1 + 0x80) + 4));
    local_18 = (iVar1 + 1) * 2;
    FUN_004328f0();
    MultiByteToWideChar(0,1,*(LPCSTR *)(*(int *)(param_1 + 0x80) + 4),-1,(LPWSTR)&stack0xfffffdd4,
                        iVar1 + 1);
    *(undefined2 *)((int)local_220 + local_18 + -0xe) = 0;
    FUN_00413f30(*(HMODULE *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78),&stack0xfffffdd4,0,
                 (undefined4 *)local_220);
    if ((local_c == local_14) && (local_8 == local_10)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    FUN_00413d10(*(void **)(param_1 + 0x70),iVar1);
  }
  return 0;
}


