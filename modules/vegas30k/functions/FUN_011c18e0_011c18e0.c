/* Module: vegas30k.dll
   Function: FUN_011c18e0
   Address: 011c18e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c18e0(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x268);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011c2f00();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_011c3050();
      if (iVar3 == 0) {
        uVar4 = (**(code **)*piVar2)(piVar2,param_1,param_2);
        return uVar4;
      }
      (**(code **)(*piVar2 + 0x68))(1);
    }
  }
  return 0x8007000e;
}


