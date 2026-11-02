/* Module: vidcap30.exe
   Function: FUN_00471650
   Address: 00471650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00471650(int param_1,LPCSTR param_2)

{
  LPSTR lpString1;
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    hMem = GlobalAlloc(0x40,0x100);
    pvVar1 = GlobalLock(hMem);
    *(LPVOID *)(param_1 + 0x138) = pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  **(undefined1 **)(param_1 + 0x138) = 0;
  if (param_2 != (LPCSTR)0x0) {
    lpString1 = *(LPSTR *)(param_1 + 0x138);
    lstrcpynA(lpString1,param_2,0xff);
    lpString1[0xfe] = '\0';
  }
  return 0;
}


