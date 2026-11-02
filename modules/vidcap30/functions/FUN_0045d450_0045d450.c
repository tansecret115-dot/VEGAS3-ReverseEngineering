/* Module: vidcap30.exe
   Function: FUN_0045d450
   Address: 0045d450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d450(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  HWND hWnd;
  float10 fVar3;
  undefined8 uVar4;
  CHAR *pCVar5;
  double *pdVar6;
  double local_28;
  CHAR local_20 [32];
  
  FUN_0045d510(param_2,param_3);
  pdVar6 = &local_28;
  uVar1 = FUN_0043df30(pdVar6);
  iVar2 = FUN_0043f790(uVar1,pdVar6);
  if ((iVar2 == 0) && (_DAT_00589f10 != local_28)) {
    iVar2 = ftol();
  }
  else {
    iVar2 = 0;
  }
  uVar4 = FUN_0045bb80(iVar2 * 1000,0);
  pCVar5 = local_20;
  uVar1 = 0x20;
  fVar3 = (float10)FUN_0042ed90();
  FUN_0045aec0(uVar4,(double)fVar3,pCVar5,uVar1);
  hWnd = GetDlgItem(param_1,0x4f0);
  SetWindowTextA(hWnd,local_20);
  return;
}


