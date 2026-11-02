/* Module: sfcdi.dll
   Function: cdr_FindInterface
   Address: 5bf07440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall cdr_FindInterface(char const *) */

uint cdr_FindInterface(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_64 [5];
  CHAR local_50 [80];
  
                    /* 0x7440  170  ?cdr_FindInterface@@YGIPBD@Z */
  iVar1 = cdr_GetNumInterfaces();
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      local_64[0] = 100;
      cdr_GetInterfaceCaps(uVar3,(cdrcaps_tag *)local_64);
      iVar2 = lstrcmpA(param_1,local_50);
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}


