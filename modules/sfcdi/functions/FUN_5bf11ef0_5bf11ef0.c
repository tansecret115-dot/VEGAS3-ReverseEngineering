/* Module: sfcdi.dll
   Function: FUN_5bf11ef0
   Address: 5bf11ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5bf11ef0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; ((cVar1 != ' ' && (cVar1 != '\0')) && (uVar2 < param_3 - 1U)); uVar2 = uVar2 + 1)
  {
    *(char *)(uVar2 + param_2) = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  *(undefined1 *)(uVar2 + param_2) = 0;
  if (*param_1 != '\0') {
    param_1 = param_1 + 1;
  }
  return param_1;
}


