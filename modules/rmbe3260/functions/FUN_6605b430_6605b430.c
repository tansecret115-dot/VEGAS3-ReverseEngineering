/* Module: rmbe3260.dll
   Function: FUN_6605b430
   Address: 6605b430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6605b430(int param_1,char *param_2)

{
  DWORD DVar1;
  LSTATUS LVar2;
  FILE *pFVar3;
  int iVar4;
  int local_14 [2];
  HKEY local_c;
  DWORD local_8;
  
  if (((DAT_660756c0 == 0) || (-1 < DAT_66074eac)) && (DAT_660756bc != 0)) {
    if (DAT_660756c0 == 0) {
      DVar1 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)&DAT_660755b8,0,1,&local_c);
      if (DVar1 == 0) {
        local_14[1] = 4;
        local_8 = DVar1;
        LVar2 = RegQueryValueExA(local_c,s_LogLevel_66074ee0,(LPDWORD)0x0,&local_8,(LPBYTE)local_14,
                                 (LPDWORD)(local_14 + 1));
        if ((LVar2 == 0) && (local_8 == 4)) {
          DAT_66074eac = local_14[0];
        }
        RegCloseKey(local_c);
      }
      if (-1 < DAT_66074eac) {
        pFVar3 = fopen((char *)&DAT_660754b0,&DAT_66074edc);
        if (pFVar3 != (FILE *)0x0) {
          iVar4 = _getpid();
          fprintf(pFVar3,s_PID_0x_x__Process_Started_66074ec0,iVar4);
          fclose(pFVar3);
        }
      }
      DAT_660756c0 = 1;
    }
    if ((-1 < DAT_66074eac) && (param_1 <= DAT_66074eac)) {
      pFVar3 = fopen((char *)&DAT_660754b0,&DAT_66074edc);
      if (pFVar3 != (FILE *)0x0) {
        iVar4 = _getpid();
        fprintf(pFVar3,s_PID_0x_x__66074eb4,iVar4);
        vfprintf(pFVar3,param_2,&stack0x0000000c);
        fprintf(pFVar3,&DAT_66074eb0);
        fclose(pFVar3);
      }
    }
  }
  return;
}


