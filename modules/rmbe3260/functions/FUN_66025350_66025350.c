/* Module: rmbe3260.dll
   Function: FUN_66025350
   Address: 66025350
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66025350(undefined4 param_1,int param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_660253a0((int *)&local_8,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_8)(local_8,&DAT_66065c68,param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


