/* Module: InstMsi-x86a.exe
   Function: FUN_01007520
   Address: 01007520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_01007520(int *param_1,uint *param_2,undefined *param_3,undefined *param_4,int *param_5,
            undefined4 *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_5 = *param_1 + 0x1800;
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  *param_6 = 0;
  puVar1 = (undefined4 *)(*(code *)param_3)(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  iVar2 = (*(code *)param_3)(0x2efc);
  puVar1[10] = iVar2;
  if (iVar2 == 0) {
    (*(code *)param_4)(puVar1);
    return 1;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[6] = param_10;
  puVar1[7] = param_11;
  puVar1[8] = *param_1;
  puVar1[9] = param_2[1];
  *puVar1 = 0x4349444c;
  iVar2 = FUN_01007710((int *)puVar1[10],*param_2,(int)param_3,(int)param_4,param_7,param_8,param_9,
                       param_10,param_11);
  if (iVar2 == 0) {
    (*(code *)param_4)(puVar1);
    return 1;
  }
  *param_6 = puVar1;
  return 0;
}


