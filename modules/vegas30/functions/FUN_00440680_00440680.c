/* Module: vegas30.exe
   Function: FUN_00440680
   Address: 00440680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00440680(undefined4 param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = DAT_0064b138;
  uVar4 = FUN_005b8d80(DAT_0064b138);
  hMem = GlobalAlloc(0x40,0x38);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_00440320(uVar3,uVar4,0);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = FUN_004405e0(param_1,puVar2);
      (**(code **)*puVar2)(1);
      return uVar3;
    }
  }
  return 0x8007000e;
}


