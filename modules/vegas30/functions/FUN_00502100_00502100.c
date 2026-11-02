/* Module: vegas30.exe
   Function: FUN_00502100
   Address: 00502100
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00502100(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  wchar_t *unaff_EBX;
  int *unaff_EBP;
  wchar_t **unaff_ESI;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  int *piVar4;
  wchar_t **ppwVar5;
  wchar_t *local_4;
  
  puVar1 = param_3;
  ppwVar5 = &local_4;
  *param_3 = 0;
  local_4 = (wchar_t *)0x0;
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x34))(param_1,ppwVar5);
  do {
    if (iVar2 < 0) {
LAB_005021a7:
      if (unaff_EBP == (int *)0x0) {
LAB_005021ad:
        iVar2 = -0x7ffb1ff6;
      }
      Ordinal_6(unaff_retaddr,piVar4,ppwVar5);
      return iVar2;
    }
    if (unaff_EBP == (int *)0x0) goto LAB_005021ad;
    param_1 = (int *)0x0;
    iVar2 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&param_1);
    if ((-1 < iVar2) && (iVar3 = _wcsicmp(local_4,unaff_EBX), iVar3 == 0)) {
      *puVar1 = unaff_EDI;
      Ordinal_6(local_4);
      goto LAB_005021a7;
    }
    unaff_EBP = (int *)0x0;
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*unaff_EDI + 0x40))(unaff_EDI,&stack0xfffffff4);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    ppwVar5 = unaff_ESI;
    Ordinal_6(unaff_EBX);
  } while( true );
}


