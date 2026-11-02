/* Module: 50comupd.exe
   Function: FUN_010068c8
   Address: 010068c8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010068c8(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (*(code *)param_3[7])(param_3[0x22],0,1);
  iVar4 = (*(code *)param_3[4])(param_3[0x22],param_1,param_2);
  if (0 < iVar4) {
    cVar2 = param_1[param_2 + -1];
    param_1[param_2 + -1] = '\0';
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    if ((((int)~uVar5 < param_2) || (cVar2 == '\0')) &&
       (iVar3 = (*(code *)param_3[7])(param_3[0x22],iVar3 + ~uVar5,0), iVar3 != -1)) {
      return 1;
    }
  }
  FUN_01006dcb((undefined4 *)*param_3,4,0);
  return 0;
}


