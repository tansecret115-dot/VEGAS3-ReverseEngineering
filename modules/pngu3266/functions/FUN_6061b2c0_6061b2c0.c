/* Module: pngu3266.dll
   Function: FUN_6061b2c0
   Address: 6061b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061b2c0(HKEY param_1,LPCSTR param_2,int *param_3)

{
  LSTATUS LVar1;
  int *piVar2;
  BYTE local_11c [260];
  int local_18 [3];
  DWORD local_c [2];
  
  local_c[1] = 0;
  local_c[0] = 0x104;
  LVar1 = RegQueryValueExA(param_1,param_2,(LPDWORD)0x0,local_c + 1,local_11c,local_c);
  if (LVar1 == 0) {
    FUN_60618ed0(param_3,(char *)local_11c);
    piVar2 = FUN_606194a0(param_3,local_18,&DAT_60649600);
    FUN_60618e60(param_3,piVar2);
    FUN_60618cd0(local_18);
    FUN_606195b0(param_3);
    FUN_60619550(param_3);
  }
  return;
}


