/* Module: sfcdi.dll
   Function: prn_FindInterface
   Address: 5bf08760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall prn_FindInterface(char *) */

uint prn_FindInterface(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  prncaps_tag local_38 [20];
  CHAR local_24 [36];
  
                    /* 0x8760  251  ?prn_FindInterface@@YGIPAD@Z */
  iVar1 = prn_GetNumInterfaces();
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      prn_GetInterfaceCaps(uVar3,local_38,0x38);
      iVar2 = lstrcmpA(param_1,local_24);
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}


