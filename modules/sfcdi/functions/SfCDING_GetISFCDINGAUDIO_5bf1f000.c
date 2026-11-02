/* Module: sfcdi.dll
   Function: SfCDING_GetISFCDINGAUDIO
   Address: 5bf1f000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetISFCDINGAUDIO(struct ISFCDINGAUDIO * *) */

long SfCDING_GetISFCDINGAUDIO(ISFCDINGAUDIO **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x1f000  40  ?SfCDING_GetISFCDINGAUDIO@@YGJPAPAUISFCDINGAUDIO@@@Z */
  hMem = GlobalAlloc(0x40,0x1db4);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_5bf20c20(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf564a0,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


