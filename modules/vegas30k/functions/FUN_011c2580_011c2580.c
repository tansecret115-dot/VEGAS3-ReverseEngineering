/* Module: vegas30k.dll
   Function: FUN_011c2580
   Address: 011c2580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c2580(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x118);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011c5300(0);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_011c5390();
      if (iVar3 == 0) {
        iVar3 = (**(code **)*piVar2)(piVar2,param_1,param_2);
        if (iVar3 < 0) {
          (**(code **)(*piVar2 + 0x4c))(1);
        }
        return iVar3;
      }
      (*(code *)((undefined4 *)*piVar2)[0x13])(1);
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


