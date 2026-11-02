/* Module: sfcdi.dll
   Function: cdr_GetOwningApplication
   Address: 5bf02230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetOwningApplication(struct tPARAMETERS_DEVDES *,char *,unsigned int) */

long cdr_GetOwningApplication(tPARAMETERS_DEVDES *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  DWORD DVar2;
  
                    /* 0x2230  183  ?cdr_GetOwningApplication@@YGJPAUtPARAMETERS_DEVDES@@PADI@Z */
  uVar1 = FUN_5bf01000((uint)param_1);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  DVar2 = WaitForSingleObject(DAT_5bf65ff8,1000);
  if (DVar2 != 0x102) {
    lstrcpynA(param_2,(LPCSTR)(&DAT_5bf7c00c + uVar1 * 0x95),param_3);
    param_2[param_3 - 1] = '\0';
    ReleaseMutex(DAT_5bf65ff8);
    return 0;
  }
  return -0x7fffbffb;
}


