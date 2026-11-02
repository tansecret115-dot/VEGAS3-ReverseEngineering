/* Module: encn3260.dll
   Function: FUN_664aea50
   Address: 664aea50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664aea50(void *this,undefined4 param_1)

{
  WORD *pWVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x48) = param_1;
  if (*(int *)((int)this + 0x4c) == 0) {
    FUN_664b9350();
    pWVar1 = FUN_664aefc0(this,(WORD *)((int)this + 0x3e));
    *(WORD **)((int)this + 0x44) = pWVar1;
    if (DAT_664f1d3c != (code *)0x0) {
      uVar2 = (*DAT_664f1d3c)();
      *(undefined4 *)((int)this + 0x6c) = uVar2;
    }
    *(undefined4 *)((int)this + 0x4c) = 1;
  }
  return 0;
}


