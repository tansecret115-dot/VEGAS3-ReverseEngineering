/* Module: wmfplug2.dll
   Function: FUN_0041d140
   Address: 0041d140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d140(HKEY param_1)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwIndex;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 *in_stack_00000018;
  HKEY local_e4;
  uint local_e0;
  DWORD local_dc;
  int local_d8 [4];
  CHAR local_c8 [200];
  
  RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_e0,(LPDWORD)0x0,(LPDWORD)0x0,
                   (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  dwIndex = 0;
  if (local_e0 != 0) {
    do {
      local_dc = 200;
      LVar1 = RegEnumKeyExA(param_1,dwIndex,local_c8,&local_dc,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      if (LVar1 != 0) {
        return 0;
      }
      LVar1 = RegOpenKeyExA(param_1,local_c8,0,0x2001f,&local_e4);
      if (LVar1 != 0) {
        return 0;
      }
      iVar2 = FUN_0041d0f0(local_e4,(LPBYTE)local_d8);
      if (-1 < iVar2) {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = local_d8;
        piVar4 = (int *)&stack0x00000008;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          if (in_stack_00000018 == (undefined4 *)0x0) {
            RegCloseKey(local_e4);
            return 1;
          }
          *in_stack_00000018 = local_e4;
          return 1;
        }
      }
      RegCloseKey(local_e4);
      dwIndex = dwIndex + 1;
    } while (dwIndex < local_e0);
  }
  return 0;
}


