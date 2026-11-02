/* Module: rmme3260.dll
   Function: FUN_66243ef0
   Address: 66243ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66243ef0(void *this,undefined4 param_1)

{
  WORD *pWVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x48) = param_1;
  if (*(int *)((int)this + 0x4c) == 0) {
    FUN_6624e7d0();
    pWVar1 = FUN_66244460(this,(WORD *)((int)this + 0x3e));
    *(WORD **)((int)this + 0x44) = pWVar1;
    if (DAT_6627e544 != (code *)0x0) {
      uVar2 = (*DAT_6627e544)();
      *(undefined4 *)((int)this + 0x6c) = uVar2;
    }
    *(undefined4 *)((int)this + 0x4c) = 1;
  }
  return 0;
}


