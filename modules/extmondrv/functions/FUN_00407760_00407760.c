/* Module: extmondrv.dll
   Function: FUN_00407760
   Address: 00407760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407760(uint param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  HGLOBAL hMem;
  LPVOID this;
  int iVar3;
  undefined4 local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if (0 < param_2) {
    return 0x80004002;
  }
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x88) == 0) {
      hMem = GlobalAlloc(0x40,0x44);
      this = GlobalLock(hMem);
      if (this == (LPVOID)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00409500(this,-(uint)(param_1 != 0x10) & param_1,&local_4,0,piVar1);
      }
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        return 0x8007000e;
      }
    }
    uVar2 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_004577a0,param_3);
  }
  return uVar2;
}


