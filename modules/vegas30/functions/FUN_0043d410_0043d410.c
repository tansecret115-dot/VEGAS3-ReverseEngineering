/* Module: vegas30.exe
   Function: FUN_0043d410
   Address: 0043d410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0043d410(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  
  pFVar2 = fopen(param_2,(char *)&PTR_DAT_00611e00);
  param_1[5] = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    return 0x8004e006;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  uVar1 = *(undefined2 *)(param_3 + 4);
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar3 = FUN_0043d330(pFVar2,0,param_1);
  return uVar3;
}


