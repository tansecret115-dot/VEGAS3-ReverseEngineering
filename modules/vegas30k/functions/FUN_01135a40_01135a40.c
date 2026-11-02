/* Module: vegas30k.dll
   Function: FUN_01135a40
   Address: 01135a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01135a40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 *param_7)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  hMem = GlobalAlloc(0x40,0xb8);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_01134d80();
  }
  *param_7 = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  uVar3 = FUN_01135390(param_2,param_2,param_3,param_4,param_5);
  return uVar3;
}


