/* Module: sfcdi.dll
   Function: SfCDING_GetISFCDINGDATA
   Address: 5bf1f0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetISFCDINGDATA(struct ISFCDINGDATA * *) */

long SfCDING_GetISFCDINGDATA(ISFCDINGDATA **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x1f0a0  42  ?SfCDING_GetISFCDINGDATA@@YGJPAPAUISFCDINGDATA@@@Z */
  hMem = GlobalAlloc(0x40,0x24);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_5bf207b0(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf564c0,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


