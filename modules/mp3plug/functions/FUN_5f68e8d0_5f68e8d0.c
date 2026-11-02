/* Module: mp3plug.dll
   Function: FUN_5f68e8d0
   Address: 5f68e8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68e8d0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar2 = param_2;
  if (1 < param_2) {
    return 0x80004002;
  }
  piVar1 = (int *)(param_1 + 0x3c + param_2 * 4);
  if (*(int *)(param_1 + 0x3c + param_2 * 4) == 0) {
    hMem = GlobalAlloc(0x40,0x4c);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_5f6952c0(this,param_1,&param_2,iVar2,piVar1);
    }
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      return 0x8007000e;
    }
  }
  (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_5f7397c0,param_3);
  iVar2 = (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  return unaff_ESI;
}


