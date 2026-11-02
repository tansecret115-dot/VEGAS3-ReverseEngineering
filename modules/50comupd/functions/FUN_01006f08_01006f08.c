/* Module: 50comupd.exe
   Function: FUN_01006f08
   Address: 01006f08
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_01006f08(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var;
  uint local_8;
  
  local_8 = 0;
  if (*param_1 == 0x4349444c) {
    uVar1 = *param_5;
    if ((uint)param_1[8] < uVar1) {
      bVar3 = 3;
    }
    else {
      bVar2 = FUN_0100703d((int *)param_1[10],uVar1,param_2,param_3,param_4,uVar1,&local_8);
      *param_5 = local_8;
      bVar3 = -(CONCAT31(extraout_var,bVar2) != 0) & 4;
    }
  }
  else {
    bVar3 = 2;
  }
  return bVar3;
}


