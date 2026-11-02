/* Module: vegas30.exe
   Function: FUN_0057c730
   Address: 0057c730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0057c730(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,LPCSTR param_5,
            LPCSTR param_6,LPCSTR param_7,LPCSTR param_8)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  hModule = LoadLibraryA("TWAIN_32.DLL");
  *(HMODULE *)(param_1 + 0xc) = hModule;
  if (hModule == (HMODULE)0x0) {
    return 0x8004e162;
  }
  pFVar1 = GetProcAddress(hModule,(LPCSTR)0x1);
  *(FARPROC *)(param_1 + 0x10) = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 0x8004e162;
  }
  *(undefined2 *)(param_1 + 0x42) = 1;
  *(undefined2 *)(param_1 + 0x1e) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x46) = 3;
  *(undefined2 *)(param_1 + 0x44) = 8;
  *(undefined2 *)(param_1 + 0x1c) = 0xd;
  *(undefined2 *)(param_1 + 0x18) = param_3;
  *(undefined2 *)(param_1 + 0x1a) = param_4;
  lstrcpynA((LPSTR)(param_1 + 0x20),param_5,0x22);
  *(undefined1 *)(param_1 + 0x41) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x4a),param_6,0x22);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x6c),param_7,0x22);
  *(undefined1 *)(param_1 + 0x8d) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x8e),param_8,0x22);
  *(undefined1 *)(param_1 + 0xaf) = 0;
  FUN_0057cc00(1);
  return 0;
}


