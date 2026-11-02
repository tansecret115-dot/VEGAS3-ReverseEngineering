/* Module: qt4plug.dll
   Function: FUN_5f519c50
   Address: 5f519c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f519c50(int param_1,LPCWSTR param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_250;
  CHAR local_23c [259];
  undefined1 local_139;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596730;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffda0;
  ExceptionList = &local_14;
  puVar1 = &stack0xfffffda0;
  if (*(int *)(param_1 + 0x18) == 0) {
    ExceptionList = &local_14;
    iVar4 = FUN_5f5196a0(1);
    if (iVar4 < 0) {
      ExceptionList = local_14;
      return iVar4;
    }
    *(undefined4 *)(param_1 + 0x18) = 1;
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
    WideCharToMultiByte(0,0,param_2,-1,local_23c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x23c) {
    local_23c[0] = '\0';
  }
  local_139 = 0;
  sVar3 = FUN_5f579290();
  if (sVar3 != 0) {
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  bVar2 = FUN_5f519e50(local_23c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    local_8 = 0;
    local_24 = FUN_5f577ab0();
    if ((short)local_24 == 0) {
      uVar5 = FUN_5f576fb0();
      local_24 = uVar5;
      FUN_5f576e10();
      local_8 = 0xffffffff;
      if ((short)uVar5 == 0) {
        iVar6 = FUN_5f576210();
        iVar4 = 0;
        if (0 < iVar6) {
          do {
            iVar4 = iVar4 + 1;
            iVar7 = FUN_5f5773f0();
            if (iVar7 == 0) break;
            iVar7 = FUN_5f576510();
            if (iVar7 == 0) {
              FUN_5f575f50();
              ExceptionList = local_14;
              return -0x7ffb1ff5;
            }
            FUN_5f576650();
            if ((local_250 == 0x736f756e) || (local_250 == 0x76696465)) {
              FUN_5f575f50();
              ExceptionList = local_14;
              return 0;
            }
          } while (iVar4 < iVar6);
        }
        FUN_5f575f50();
      }
    }
  }
  ExceptionList = local_14;
  return -0x7ffb1ff5;
}


