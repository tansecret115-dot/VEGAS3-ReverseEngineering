/* Module: vidcap30.exe
   Function: FUN_0057bd40
   Address: 0057bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057bd40(LPUNKNOWN param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  int *piVar3;
  int *piVar4;
  
  piVar1 = param_4;
  *param_4 = 0;
  iVar2 = CoCreateInstance((IID *)&DAT_005a2da8,param_1,1,(IID *)&DAT_005a5aa8,&param_4);
  if (-1 < iVar2) {
    piVar4 = (int *)&param_1;
    piVar3 = param_4;
    iVar2 = (**(code **)*param_4)(param_4,&DAT_005a1a78);
    if (iVar2 < 0) {
      (*param_1->lpVtbl->Release)(param_1);
      return iVar2;
    }
    iVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,unaff_ESI,unaff_retaddr);
    (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar2 < 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      return iVar2;
    }
    *piVar1 = (int)piVar4;
    iVar2 = 0;
  }
  return iVar2;
}


