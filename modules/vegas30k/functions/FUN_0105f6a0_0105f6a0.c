/* Module: vegas30k.dll
   Function: FUN_0105f6a0
   Address: 0105f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0105f6a0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_011e1d40;
  if ((param_1[0xc] != 0) && ((undefined4 *)param_1[0xd] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  if ((LPCVOID)param_1[0x94] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x94]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x94]);
    GlobalFree(pvVar1);
  }
  if ((param_1[8] != 0) && (param_1[3] == 0)) {
    DeleteFileA((LPCSTR)(param_1 + 0xe));
  }
  if ((HANDLE)param_1[0x96] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x96]);
    param_1[0x96] = 0xffffffff;
  }
  return;
}


