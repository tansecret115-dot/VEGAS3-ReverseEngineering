/* Module: vegas30.exe
   Function: FUN_006090f0
   Address: 006090f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_006090f0(HKEY param_1,HKEY param_2,undefined4 *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_30 [48];
  
  iVar1 = FUN_006082c0(param_2,local_30,0x2d);
  if (iVar1 < 0) {
    *param_3 = param_2;
    return iVar1;
  }
  LVar2 = RegCreateKeyExA(param_1,local_30,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          &param_2,(LPDWORD)0x0);
  if (LVar2 != 0) {
    *param_3 = 0;
    return -0x7ff8fffb;
  }
  *param_3 = param_2;
  return iVar1;
}


