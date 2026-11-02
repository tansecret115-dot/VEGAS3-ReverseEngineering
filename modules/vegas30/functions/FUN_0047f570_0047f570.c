/* Module: vegas30.exe
   Function: FUN_0047f570
   Address: 0047f570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047f570(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  HGLOBAL hMem;
  
  piVar2 = (int *)FUN_005b87b0(param_1);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0)) {
    hMem = GlobalAlloc(0x40,iVar1 * 0x18 + 0x20);
    piVar2 = GlobalLock(hMem);
    *param_2 = piVar2;
    if (piVar2 == (int *)0x0) {
      return 0x8007000e;
    }
    *piVar2 = iVar1;
  }
  return 0;
}


