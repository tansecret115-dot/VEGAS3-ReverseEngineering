/* Module: vegas30k.dll
   Function: FUN_0118f940
   Address: 0118f940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118f940(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x14);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_01191c10(param_1);
  }
  *(int **)(param_1 + 0x38) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  pvVar1 = GlobalAlloc(0x40,0xc);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    piVar3 = (int *)FUN_01191b30(param_1);
    *(int **)(param_1 + 0x34) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return 0;
}


