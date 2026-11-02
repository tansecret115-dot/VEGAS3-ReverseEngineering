/* Module: vidcap30.exe
   Function: FUN_004031f0
   Address: 004031f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004031f0(HINSTANCE__ *param_1,undefined4 param_2)

{
  LPCVOID pvVar1;
  int iVar2;
  HGLOBAL pvVar3;
  bool bVar4;
  CHAR aCStack_104 [260];
  
  if (DAT_005bba60 != (undefined4 *)0x0) {
    (**(code **)*DAT_005bba60)(1);
    DAT_005bba60 = (undefined4 *)0x0;
  }
  bVar4 = DAT_005ba4c0 != 0;
  if (bVar4) {
    FUN_004083a0(param_1);
  }
  FUN_00416450(param_1);
  FUN_004011c0(param_1);
  if (DAT_005bb83c != 0) {
    DrawDibClose(DAT_005bb83c);
    DAT_005bb83c = 0;
  }
  if (DAT_005bb840 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_005bb840);
    DAT_005bb840 = (HGDIOBJ)0x0;
  }
  iVar2 = DAT_005bb838;
  if (DAT_005bb838 != 0) {
    FUN_0042f6b0(0);
    FUN_0042e600(iVar2,0);
  }
  if ((DAT_005bb0e8 != (LPCVOID)0x0) &&
     (FUN_0045cd20(), pvVar1 = DAT_005bb0e8, DAT_005bb0e8 != (LPCVOID)0x0)) {
    FUN_0045c1d0();
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
  }
  if (bVar4) {
    if (((byte)DAT_005ba4b4 & 0x10) == 0) {
      FUN_0041d610(&DAT_005ba530);
      FUN_0041e270();
    }
    FUN_0046ee80();
  }
  FUN_00499c50(param_1,"SfKrn_ExplorerEx_Class");
  SfControls_Terminate(param_1);
  WebBrowse_AppTerminate(param_1);
  if (DAT_005bba88 != 0) {
    _SfMetric_Close_4(DAT_005bba88);
  }
  if (DAT_005ba2a0 != 0) {
    _SfLang_Close_4(DAT_005ba2a0);
  }
  if (DAT_005ba29c != 0) {
    _SfMetric_Close_4(DAT_005ba29c);
  }
  if (DAT_005c16d4 != 0) {
    _SfMetric_Close_4(DAT_005c16d4);
  }
  if (DAT_005bba6c != (int *)0x0) {
    (**(code **)(*DAT_005bba6c + 0x20))(DAT_005bba6c);
    (**(code **)(*DAT_005bba6c + 8))(DAT_005bba6c);
    DAT_005bba6c = (int *)0x0;
  }
  _SfOleInit_4(0);
  if (DAT_005bba64 != 0) {
    GetModuleFileNameA((HMODULE)0x0,aCStack_104,0x104);
    ShellExecuteA((HWND)0x0,(LPCSTR)0x0,aCStack_104,"",(LPCSTR)0x0,5);
  }
  pvVar1 = DAT_005bba3c;
  if (DAT_005bba3c != (LPCVOID)0x0) {
    FUN_0056dee0();
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
  }
  pvVar1 = DAT_005bba40;
  if (DAT_005bba40 != (LPCVOID)0x0) {
    FUN_0056dee0();
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
  }
  FUN_0049d680(param_1);
  return param_2;
}


