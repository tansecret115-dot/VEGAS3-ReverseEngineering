/* Module: vidcap30.exe
   Function: SfOem_HideUpsellCheckbox
   Address: 004bd330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_HideUpsellCheckbox(void *,int *) */

long SfOem_HideUpsellCheckbox(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  CHAR local_104 [260];
  
                    /* 0xbd330  120  ?SfOem_HideUpsellCheckbox@@YGJPAXPAH@Z */
  if ((param_2 != (int *)0x0) && (param_1 != (void *)0x0)) {
    iVar1 = FUN_004bc780(param_1,"hideupsellcheckbox",2,local_104,0x104,0);
    *param_2 = 1;
    if (-1 < iVar1) {
      iVar2 = lstrcmpiA("true",local_104);
      *param_2 = (uint)(iVar2 == 0);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


