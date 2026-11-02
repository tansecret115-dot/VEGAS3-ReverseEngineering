/* Module: mp3plug.dll
   Function: FUN_5f713740
   Address: 5f713740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f713740(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0x90) == -0x7efefffc) {
    return 0x81010004;
  }
  bVar1 = FUN_5f714540((int)param_1);
  if (bVar1) {
    if ((((*(int *)((int)param_1 + 0x7c) != 0) &&
         (*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x7c))) ||
        (iVar3 = *(int *)((int)param_1 + 0x90), iVar3 == -0x7efefffd)) ||
       ((iVar3 == -0x7efeffff || (*(int *)((int)param_1 + 0x10) == 0)))) {
      FUN_5f714440((int)param_1);
      iVar3 = *(int *)((int)param_1 + 0x90);
    }
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x90);
  }
  if (*(int *)((int)param_1 + 0x10) < 0x20) {
    if ((iVar3 == 0) || (iVar3 == -0x7efefffd)) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x81010003;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0x81010001;
    }
  }
  else if ((iVar3 == 0) || (iVar3 == -0x7efefffd)) {
    uVar2 = FUN_5f713844(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = uVar2;
  }
  else {
    uVar2 = FUN_5f7139c0(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = uVar2;
  }
  iVar3 = FUN_5f714530((int)param_1);
  if (((char)iVar3 != '\0') &&
     ((*(int *)((int)param_1 + 0x90) == -0x7efeffff ||
      (*(int *)((int)param_1 + 0x90) == -0x7efefffd)))) {
    *(undefined4 *)((int)param_1 + 0x90) = 0x81010004;
  }
  return *(undefined4 *)((int)param_1 + 0x90);
}


