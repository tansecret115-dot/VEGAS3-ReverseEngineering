/* Module: mp3rw.dll
   Function: FUN_00416ec0
   Address: 00416ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416ec0(void *param_1,undefined4 param_2,int param_3,int param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  _STARTUPINFOA *p_Var5;
  DWORD local_364;
  _PROCESS_INFORMATION local_360;
  _STARTUPINFOA local_350;
  BYTE local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  GetSystemDirectoryA((LPSTR)local_30c,0x104);
  FUN_0041c940(local_30c,0x104);
  if (param_4 == 0) {
    local_208[0] = '\0';
  }
  else {
    FUN_00420fe0(local_208,(BYTE *)" SFAPPSTYLE=\"%0#6x\"");
  }
  FUN_00420fe0(local_104,
               (BYTE *)"%s%s -i %s /qn REINSTALL=appgrades REINSTALLMODE=ums SFAPPGRADE=\"%0#6x\"%s"
              );
  p_Var5 = &local_350;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    p_Var5->cb = 0;
    p_Var5 = (_STARTUPINFOA *)&p_Var5->lpReserved;
  }
  local_350.cb = 0x44;
  BVar1 = CreateProcessA((LPCSTR)0x0,(LPSTR)local_104,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)local_30c,&local_350,
                         &local_360);
  if (BVar1 != 0) {
    DVar2 = WaitForSingleObject(local_360.hProcess,30000);
    if (DVar2 != 0x102) {
      GetExitCodeProcess(local_360.hProcess,&local_364);
      if (local_364 == 0) {
        uVar3 = FUN_00416cd0(param_1,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0x80004005;
}


