/* Module: sfcdi.dll
   Function: ldr_FindInterface
   Address: 5bf082f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall ldr_FindInterface(char *) */

uint ldr_FindInterface(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ldrcaps_tag local_40 [20];
  CHAR local_2c [44];
  
                    /* 0x82f0  238  ?ldr_FindInterface@@YGIPAD@Z */
  iVar1 = ldr_GetNumInterfaces();
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      ldr_GetInterfaceCaps(uVar3,local_40,0x40);
      iVar2 = lstrcmpA(param_1,local_2c);
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}


