/* Module: wmfplug2.dll
   Function: FUN_0041d570
   Address: 0041d570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041d570(HKEY param_1,int param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  LSTATUS LVar3;
  uint uVar4;
  HKEY local_d8;
  uint local_d4;
  uint local_d0;
  DWORD local_cc;
  CHAR local_c8 [200];
  
  local_d4 = 0;
  wsprintfA(local_c8,"%u",param_2);
  iVar2 = RegOpenKeyExA(param_1,local_c8,0,0x20019,&local_d8);
  while (iVar2 == 0) {
    RegCloseKey(local_d8);
    param_2 = param_2 + 1;
    wsprintfA(local_c8,"%u",param_2);
    iVar2 = RegOpenKeyExA(param_1,local_c8,0,0x20019,&local_d8);
  }
  uVar4 = 0;
  LVar3 = RegCreateKeyExA(param_1,local_c8,0,"",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_d8,
                          &local_cc);
  if (LVar3 != 0) {
    return 0x80004005;
  }
  local_d0 = 0;
  do {
    if (param_5 <= local_d0) break;
    iVar2 = *param_3;
    iVar1 = *param_3;
    local_d4 = FUN_0041d430(local_d8,(int)param_3,(int *)((int)param_3 + iVar2));
    uVar4 = uVar4 + iVar1 + param_3[0x12];
    param_3 = (int *)((int)param_3 + iVar2 + param_3[0x12]);
    if (param_4 < uVar4) {
      local_d4 = 0x80070057;
    }
    local_d0 = local_d0 + 1;
  } while (-1 < (int)local_d4);
  RegCloseKey(local_d8);
  return local_d4;
}


