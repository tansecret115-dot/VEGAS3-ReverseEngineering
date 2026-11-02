/* Module: rmto3260.dll
   Function: FUN_66301f30
   Address: 66301f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66301f30(int param_1,char *param_2)

{
  DWORD DVar1;
  LSTATUS LVar2;
  FILE *pFVar3;
  int iVar4;
  int local_14 [2];
  HKEY local_c;
  DWORD local_8;
  
  if (((DAT_66312038 == 0) || (-1 < DAT_66311b48)) && (DAT_66312034 != 0)) {
    if (DAT_66312038 == 0) {
      DVar1 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)&DAT_66311f30,0,1,&local_c);
      if (DVar1 == 0) {
        local_14[1] = 4;
        local_8 = DVar1;
        LVar2 = RegQueryValueExA(local_c,s_LogLevel_66311b78,(LPDWORD)0x0,&local_8,(LPBYTE)local_14,
                                 (LPDWORD)(local_14 + 1));
        if ((LVar2 == 0) && (local_8 == 4)) {
          DAT_66311b48 = local_14[0];
        }
        RegCloseKey(local_c);
      }
      if (-1 < DAT_66311b48) {
        pFVar3 = fopen((char *)&DAT_66311e28,&DAT_66311b74);
        if (pFVar3 != (FILE *)0x0) {
          iVar4 = _getpid();
          fprintf(pFVar3,s_PID_0x_x__Process_Started_66311b58,iVar4);
          fclose(pFVar3);
        }
      }
      DAT_66312038 = 1;
    }
    if ((-1 < DAT_66311b48) && (param_1 <= DAT_66311b48)) {
      pFVar3 = fopen((char *)&DAT_66311e28,&DAT_66311b74);
      if (pFVar3 != (FILE *)0x0) {
        iVar4 = _getpid();
        fprintf(pFVar3,s_PID_0x_x__66311b4c,iVar4);
        vfprintf(pFVar3,param_2,&stack0x0000000c);
        fprintf(pFVar3,&DAT_6630a1a4);
        fclose(pFVar3);
      }
    }
  }
  return;
}


