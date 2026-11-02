/* Module: sfcdi.dll
   Function: SfCDING_GetISFCDINGERASE
   Address: 5bf1ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetISFCDINGERASE(struct ISFCDINGERASE * *) */

long SfCDING_GetISFCDINGERASE(ISFCDINGERASE **param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0x1ef60  43  ?SfCDING_GetISFCDINGERASE@@YGJPAPAUISFCDINGERASE@@@Z */
  hMem = GlobalAlloc(0x40,0x18);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_5bf21460(puVar1);
    if (piVar2 != (int *)0x0) {
      lVar3 = (**(code **)*piVar2)(piVar2,&DAT_5bf56480,param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      return lVar3;
    }
  }
  return -0x7ff8fff2;
}


