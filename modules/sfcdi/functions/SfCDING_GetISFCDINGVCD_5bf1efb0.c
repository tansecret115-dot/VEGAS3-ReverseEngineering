/* Module: sfcdi.dll
   Function: SfCDING_GetISFCDINGVCD
   Address: 5bf1efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetISFCDINGVCD(struct ISFCDINGVCD * *) */

long SfCDING_GetISFCDINGVCD(ISFCDINGVCD **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x1efb0  44  ?SfCDING_GetISFCDINGVCD@@YGJPAPAUISFCDINGVCD@@@Z */
  hMem = GlobalAlloc(0x40,0x28);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_5bf1ff80(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf56490,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


