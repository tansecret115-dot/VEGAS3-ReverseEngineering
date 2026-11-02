/* Module: mp3plug.dll
   Function: FUN_5f728900
   Address: 5f728900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f728900(HKEY param_1,HKEY param_2,int *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_30 [48];
  
  iVar1 = FUN_5f727ad0((int)param_2,local_30);
  if (iVar1 < 0) {
    *param_3 = (int)param_2;
    return iVar1;
  }
  LVar2 = RegCreateKeyExA(param_1,local_30,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          &param_2,(LPDWORD)0x0);
  if (LVar2 != 0) {
    *param_3 = 0;
    return -0x7ff8fffb;
  }
  *param_3 = (int)param_2;
  return iVar1;
}


