/* Module: rmbe3260.dll
   Function: FUN_6604f510
   Address: 6604f510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6604f510(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  char *local_24 [3];
  byte *local_18 [3];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  FUN_6605b650(local_24);
  FUN_6605b650(local_18);
  iVar1 = FUN_6604ed90(param_1,local_24,local_18,&local_c,&local_8);
  if (-1 < iVar1) {
    iVar1 = FUN_6604f4b0(this,local_24[0],local_18[0],local_c,local_8,param_2,param_3);
  }
  FUN_6605b770((int *)local_18);
  FUN_6605b770((int *)local_24);
  return iVar1;
}


