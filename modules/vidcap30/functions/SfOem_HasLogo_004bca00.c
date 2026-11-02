/* Module: vidcap30.exe
   Function: SfOem_HasLogo
   Address: 004bca00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_HasLogo(void *,int *) */

long SfOem_HasLogo(void *param_1,int *param_2)

{
  long lVar1;
  undefined1 local_104 [260];
  
                    /* 0xbca00  119  ?SfOem_HasLogo@@YGJPAXPAH@Z */
  if ((param_2 != (int *)0x0) && (param_1 != (void *)0x0)) {
    lVar1 = FUN_004bc780(param_1,&DAT_0059a02c,2,local_104,0x104,0);
    *param_2 = (uint)(-1 < lVar1);
    return lVar1;
  }
  return -0x7ff8ffa9;
}


