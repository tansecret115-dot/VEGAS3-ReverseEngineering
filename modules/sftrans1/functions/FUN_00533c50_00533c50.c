/* Module: sftrans1.dll
   Function: FUN_00533c50
   Address: 00533c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00533c50(int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  CHAR local_2c [12];
  BYTE local_20 [12];
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  undefined4 local_8;
  
  uVar3 = 0;
  local_8 = 0;
  local_14 = 0xb;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_10);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_10,"License",0,0x20019,&local_c);
    if (LVar1 == 0) {
      LVar1 = RegQueryValueExA(local_c,"LastValidMachineCode",(LPDWORD)0x0,(LPDWORD)0x0,local_20,
                               &local_14);
      if (LVar1 == 0) {
        FUN_0052f8e0(local_2c,0xb);
        FUN_00551640();
        FUN_00551640();
        lstrcpynA(&stack0xffffffc8,(LPCSTR)local_20,9);
        lstrcpynA(&stack0xffffffc8,local_2c,9);
        iVar2 = lstrcmpA(&stack0xffffffc8,&stack0xffffffc8);
        if (iVar2 != 0) {
          local_8 = 1;
        }
      }
      else {
        local_8 = 0;
      }
      RegCloseKey(local_c);
      uVar3 = local_8;
    }
    RegCloseKey(local_10);
  }
  return uVar3;
}


