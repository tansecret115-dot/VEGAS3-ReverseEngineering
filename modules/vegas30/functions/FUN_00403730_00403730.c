/* Module: vegas30.exe
   Function: FUN_00403730
   Address: 00403730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403730(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPCVOID pMem;
  HGLOBAL pvVar3;
  bool bVar4;
  CHAR aCStack_104 [260];
  
  SfWtsUnRegisterSessionNotification(DAT_00647624);
  if (DAT_0064b570 != 0) {
    FUN_005756d0(DAT_0064b570);
    DAT_0064b570 = 0;
  }
  if (DAT_0064b574 != 0) {
    FUN_005754a0(DAT_0064b574);
    DAT_0064b574 = 0;
  }
  if (DAT_0064b578 != 0) {
    FUN_00579c50();
    DAT_0064b578 = 0;
  }
  if (DAT_0064b500 != 0) {
    _SfDibFree_8(DAT_0064b500,0);
  }
  FUN_00562410(&DAT_0064b538);
  bVar4 = DAT_0064762c != 0;
  if (bVar4) {
    FUN_00410a10(param_1);
  }
  FUN_00589d40();
  iVar2 = DAT_0064b138;
  if (DAT_0064b138 != 0) {
    FUN_004325c0(0);
    FUN_005b96f0(iVar2,0);
  }
  FUN_005ec780();
  FUN_005faf60();
  FUN_004e6b30(param_1);
  FUN_00401250(param_1);
  if (DAT_0064b13c != 0) {
    DrawDibClose(DAT_0064b13c);
    DAT_0064b13c = 0;
  }
  if (DAT_0064b140 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0064b140);
    DAT_0064b140 = (HGDIOBJ)0x0;
  }
  if ((bVar4) && (((byte)DAT_0064761c & 0x10) == 0)) {
    FUN_004f9180(&DAT_006476a0);
    FUN_00507e60();
  }
  FUN_00468f30();
  FUN_00543210();
  puVar1 = (undefined4 *)DAT_0064b580[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0064b580[0xd] = 0;
    (**(code **)*puVar1)(1);
  }
  FUN_0057f310();
  if ((undefined4 *)DAT_0064b580[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)DAT_0064b580[1])(1);
  }
  if (DAT_0064b580 != (undefined4 *)0x0) {
    (**(code **)*DAT_0064b580)(1);
  }
  DAT_0064b580 = (undefined4 *)0x0;
  FUN_00443ea0();
  if (DAT_0064b50c != (int *)0x0) {
    (**(code **)(*DAT_0064b50c + 8))(DAT_0064b50c);
  }
  _SfVideoPlugin_SetToNonSharedMode_12(0,0,0);
  if (DAT_00647204 != 0) {
    _SfLang_DestroyStringTables_4(DAT_00647204);
    _SfLang_Close_4(DAT_00647204);
  }
  if (DAT_00647200 != 0) {
    _SfMetric_Close_4(DAT_00647200);
  }
  if (DAT_0064b520 != 0) {
    _SfMetric_Close_4(DAT_0064b520);
  }
  if (DAT_0064b510 != (int *)0x0) {
    (**(code **)(*DAT_0064b510 + 0x20))(DAT_0064b510);
    (**(code **)(*DAT_0064b510 + 8))(DAT_0064b510);
    DAT_0064b510 = (int *)0x0;
  }
  _SfOleInit_4(0);
  if (DAT_0064b508 != 0) {
    GetModuleFileNameA((HMODULE)0x0,aCStack_104,0x104);
    ShellExecuteA((HWND)0x0,(LPCSTR)0x0,aCStack_104,"",(LPCSTR)0x0,5);
  }
  if (DAT_0064b4f8 != (LPCVOID)0x0) {
    FUN_00605540();
    FUN_00605340();
    pMem = DAT_0064b4f8;
    if (DAT_0064b4f8 != (LPCVOID)0x0) {
      FUN_005fecc0();
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  }
  if (DAT_0064b504 != (int *)0x0) {
    (**(code **)(*DAT_0064b504 + 8))(DAT_0064b504);
  }
  return param_2;
}


