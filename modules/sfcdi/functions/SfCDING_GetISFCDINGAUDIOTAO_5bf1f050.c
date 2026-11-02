/* Module: sfcdi.dll
   Function: SfCDING_GetISFCDINGAUDIOTAO
   Address: 5bf1f050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetISFCDINGAUDIOTAO(struct ISFCDINGAUDIOTAO * *) */

long SfCDING_GetISFCDINGAUDIOTAO(ISFCDINGAUDIOTAO **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x1f050  41  ?SfCDING_GetISFCDINGAUDIOTAO@@YGJPAPAUISFCDINGAUDIOTAO@@@Z */
  hMem = GlobalAlloc(0x40,0x1db4);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_5bf21100(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf564b0,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


