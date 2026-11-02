/* Module: pncrt.dll
   Function: longjmp
   Address: 78022fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl longjmp(int *_Buf,int _Value)

{
  PVOID pvVar1;
  int iVar2;
  
                    /* 0x22fc0  666  longjmp */
  pvVar1 = (PVOID)_Buf[6];
  if (pvVar1 != ExceptionList) {
    global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = FUN_78023550();
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      local_unwind2((int)pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_7800cca6();
                    /* WARNING: Could not recover jumptable at 0x78023035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}


