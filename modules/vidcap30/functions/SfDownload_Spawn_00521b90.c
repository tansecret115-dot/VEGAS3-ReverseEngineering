/* Module: vidcap30.exe
   Function: SfDownload_Spawn
   Address: 00521b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfDownload_Spawn(char *,char *,char *) */

int SfDownload_Spawn(char *param_1,char *param_2,char *param_3)

{
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_d88;
  _STARTUPINFOA local_d78;
  CHAR local_d34 [260];
  CHAR local_c30 [260];
  CHAR local_b2c [2860];
  
  p_Var3 = &local_d78;
                    /* 0x121b90  71  ?SfDownload_Spawn@@YGHPAD00@Z */
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_d78.cb = 0x44;
  GetModuleFileNameA(DAT_005c16d0,local_d34,0x104);
  GetShortPathNameA(local_d34,local_c30,0x104);
  SfPrintF(local_b2c,"RunDLL32.exe %s,_SfDownload_WinMain@16 |%s|%s|%s",local_c30,param_1,param_2,
           param_3);
  BVar1 = CreateProcessA((LPCSTR)0x0,local_b2c,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,0,0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_d78,&local_d88);
  return BVar1;
}


