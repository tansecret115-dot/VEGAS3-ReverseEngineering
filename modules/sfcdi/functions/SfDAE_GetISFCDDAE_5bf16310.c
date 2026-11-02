/* Module: sfcdi.dll
   Function: SfDAE_GetISFCDDAE
   Address: 5bf16310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDAE_GetISFCDDAE(struct ISFCDDAE * *) */

long SfDAE_GetISFCDDAE(ISFCDDAE **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x16310  79  ?SfDAE_GetISFCDDAE@@YGJPAPAUISFCDDAE@@@Z */
  hMem = GlobalAlloc(0x40,0x1e08);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_5bf163c0(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf561a8,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


