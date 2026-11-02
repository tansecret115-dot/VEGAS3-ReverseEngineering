/* Module: wmfplug2.dll
   Function: FUN_0043dae0
   Address: 0043dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043dae0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  UINT uMode;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  undefined4 in_stack_00000018;
  uchar local_224 [260];
  CHAR local_120 [260];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00483170;
  puStack_10 = &DAT_004792de;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffdc4;
  iVar5 = -0x7fffbffb;
  ExceptionList = &local_14;
  puVar2 = &stack0xfffffdc4;
  if (*(int *)(param_1 + 0x14) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x18) = 0;
    GetCurrentDirectoryA(0x104,local_120);
    FUN_0042f700((uchar *)(param_1 + 0x120),local_224,0x104);
    SetCurrentDirectoryA((LPCSTR)local_224);
    local_8 = 0;
    uMode = SetErrorMode(0x8000);
    pHVar3 = LoadLibraryA((LPCSTR)(param_1 + 0x120));
    *(HMODULE *)(param_1 + 0x14) = pHVar3;
    SetErrorMode(uMode);
    local_8 = 0xffffffff;
    SetCurrentDirectoryA(local_120);
    if (*(HMODULE *)(param_1 + 0x14) != (HMODULE)0x0) {
      pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x14),"DllGetClassObject");
      if (pFVar4 == (FARPROC)0x0) {
        iVar5 = -0x7fffbffe;
      }
      else {
        iVar5 = (*pFVar4)(param_1 + 4,&DAT_004851b8,param_1 + 0x18);
      }
    }
    puVar2 = local_1c;
    if (iVar5 < 0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,0,&stack0x00000008,in_stack_00000018);
  }
  ExceptionList = local_14;
  return iVar5;
}


