/* Module: wavplug.dll
   Function: SfACM_CreateList
   Address: 5f3844d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfACM_CreateList(unsigned long *,struct SFDRVFMT_DATAFMTS *,unsigned long) */

long SfACM_CreateList(ulong *param_1,SFDRVFMT_DATAFMTS *param_2,ulong param_3)

{
  LSTATUS LVar1;
  HANDLE hObject;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  _STARTUPINFOA *p_Var5;
  long local_680;
  HKEY local_67c;
  HKEY local_678;
  HANDLE local_674;
  HANDLE local_670;
  _PROCESS_INFORMATION local_66c;
  _STARTUPINFOA local_65c;
  uchar local_618 [260];
  CHAR local_514 [260];
  uchar local_410 [260];
  uchar local_30c [780];
  
                    /* 0x44d0  1  ?SfACM_CreateList@@YGJPAKPAUSFDRVFMT_DATAFMTS@@K@Z */
  uVar4 = ~param_3 >> 2 & 1;
  local_680 = 1;
  if (uVar4 != 0) {
    LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Sonic Foundry\\ACMCache",&local_67c);
    if (LVar1 == 0) {
      local_680 = FUN_5f384410(local_67c,(LPSTR)param_2,param_1);
      RegCloseKey(local_67c);
    }
  }
  if ((~param_3 >> 3 & 1) != 0) {
    hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"Sonic_Foundry_ACM_Event");
    if (hObject == (HANDLE)0xffffffff) {
      hObject = (HANDLE)0x0;
    }
    p_Var5 = &local_65c;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      p_Var5->cb = 0;
      p_Var5 = (_STARTUPINFOA *)&p_Var5->lpReserved;
    }
    local_65c.cb = 0x44;
    GetModuleFileNameA(DAT_5f3db000,local_514,0x104);
    FUN_5f39c1a0(local_30c,(BYTE *)"rundll32.exe %s,_SfAcm_Grovel@16 %s");
    _splitpath(local_514,(char *)&local_67c,(char *)local_410,(char *)0x0,(char *)0x0);
    _mbscpy(local_618,(uchar *)&local_67c);
    _mbscat(local_618,local_410);
    BVar2 = CreateProcessA((LPCSTR)0x0,(LPSTR)local_30c,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0x20,(LPVOID)0x0,(LPCSTR)local_618,
                           &local_65c,&local_66c);
    if (BVar2 != 0) {
      if (hObject == (HANDLE)0x0) {
        WaitForSingleObject(local_66c.hProcess,5000);
      }
      else {
        local_670 = local_66c.hProcess;
        local_674 = hObject;
        WaitForMultipleObjects(2,&local_674,0,30000);
        CloseHandle(hObject);
      }
      CloseHandle(local_66c.hProcess);
      CloseHandle(local_66c.hThread);
      LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Sonic Foundry\\ACMCache",&local_678);
      if (LVar1 == 0) {
        local_680 = FUN_5f384410(local_678,(LPSTR)param_2,param_1);
        RegCloseKey(local_678);
      }
    }
  }
  if ((uVar4 == 0) && ((param_3 & 2) != 0)) {
    FUN_5f3842b0(param_2,param_1);
  }
  return local_680;
}


