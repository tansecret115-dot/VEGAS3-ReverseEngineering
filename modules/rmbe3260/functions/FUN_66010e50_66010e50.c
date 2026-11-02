/* Module: rmbe3260.dll
   Function: FUN_66010e50
   Address: 66010e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66010e50(void *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  byte *local_2c [3];
  undefined4 *local_20 [3];
  byte *local_14 [3];
  undefined4 local_8;
  
  *param_4 = 0;
  param_4[1] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  local_8 = 0x80004005;
  FUN_66016940(local_2c,param_2,param_3);
  FUN_6605b650(local_14);
  iVar1 = FUN_6605d1d0((void *)((int)param_1 + 0x20),local_2c[0],local_14);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_66010f40(param_1,param_2,param_3);
    if (piVar2 == (int *)0x0) {
      local_8 = 0x80070057;
    }
    else {
      local_8 = (**(code **)(*piVar2 + 8))(piVar2,param_2,param_3,param_4,param_5);
    }
  }
  else {
    FUN_660143a0(param_4,(undefined4 *)local_14[0]);
    FUN_6605b650(local_20);
    iVar1 = FUN_6605d1d0((void *)((int)param_1 + 0x20),local_14[0],local_20);
    if (iVar1 != 0) {
      FUN_660143a0(param_5,local_20[0]);
      local_8 = 0;
    }
    FUN_6605b770((int *)local_20);
  }
  FUN_6605b770((int *)local_14);
  FUN_6605b770((int *)local_2c);
  return local_8;
}


