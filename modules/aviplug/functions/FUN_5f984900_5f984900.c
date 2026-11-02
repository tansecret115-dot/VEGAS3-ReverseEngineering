/* Module: aviplug.dll
   Function: FUN_5f984900
   Address: 5f984900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f984900(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  
  *param_5 = 0;
  if (param_1 != 0) {
    iVar2 = 4;
    bVar6 = true;
    piVar3 = &DAT_5f9eee08;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0x80040110;
    }
  }
  uVar5 = 0x8007000e;
  hMem = GlobalAlloc(0x40,0x74);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    puVar1 = FUN_5f983260(this,param_1,param_3,param_4);
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 1;
      uVar5 = (**(code **)*piVar3)(piVar3,param_2,param_5);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return uVar5;
}


