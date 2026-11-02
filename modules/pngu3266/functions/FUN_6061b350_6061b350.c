/* Module: pngu3266.dll
   Function: FUN_6061b350
   Address: 6061b350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6061b350(int *param_1)

{
  undefined4 uVar1;
  HKEY__ local_10 [3];
  
  FUN_60618bb0(local_10);
  FUN_6061b150(local_10);
  uVar1 = 0x35;
  if (*(int *)(local_10[0].unused + -8) == 0) {
    FUN_60618ed0(local_10,s_209_66_98_23_60649458);
    uVar1 = 0x50;
  }
  uVar1 = (**(code **)(*param_1 + 0xc))(local_10[0].unused,uVar1,0);
  FUN_60618cd0(&local_10[0].unused);
  return uVar1;
}


