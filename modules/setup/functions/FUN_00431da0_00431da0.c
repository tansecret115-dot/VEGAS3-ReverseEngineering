/* Module: Setup.exe
   Function: FUN_00431da0
   Address: 00431da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431da0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_0042d340((int)param_2,local_18);
  FUN_0042d320(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00431b00(param_1,local_18,param_3,param_4);
  return;
}


