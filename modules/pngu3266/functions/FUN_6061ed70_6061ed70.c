/* Module: pngu3266.dll
   Function: FUN_6061ed70
   Address: 6061ed70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6061ed70(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_60622840(param_1);
  FUN_60622900(param_1 + 1,(LPCSTR)0x0,1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)*param_1 + 4))(FUN_6061ee50,param_1,0);
  }
  return iVar1;
}


