/* Module: vegas30.exe
   Function: FUN_004ab300
   Address: 004ab300
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004ab300(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  piVar2 = param_2;
  iVar1 = *param_2;
  iVar4 = 0;
  param_2 = (int *)0x0;
  iVar3 = 0;
  local_4 = param_1;
  if (0 < iVar1) {
    do {
      iVar3 = *(int *)(piVar2[2] + iVar4 * 4);
      FUN_004f0620(iVar3,iVar3);
      if ((*(int *)(iVar3 + 0x208) != 6) && (-1 < *(int *)(iVar3 + 0x234))) {
        local_4 = 0;
        iVar3 = FUN_004ab190(iVar3,param_3,&local_4);
        if ((-1 < iVar3) && (local_4 != 0)) {
          iVar3 = FUN_004ab010(local_4);
          param_2 = (int *)((int)param_2 + iVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = (int)param_2;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}


